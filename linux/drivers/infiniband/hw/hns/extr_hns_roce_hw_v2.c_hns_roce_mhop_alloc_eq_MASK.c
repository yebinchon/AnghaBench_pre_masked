
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hns_roce_eq {int entries; int eqe_size; int l0_last_num; int l1_last_num; scalar_t__** buf_dma; scalar_t__** buf; scalar_t__** l1_dma; scalar_t__** bt_l1; scalar_t__ l0_dma; scalar_t__* bt_l0; scalar_t__ nxt_eqe_ba; scalar_t__ cur_eqe_ba; } ;
struct TYPE_2__ {int eqe_hop_num; int eqe_buf_pg_sz; int eqe_ba_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*,int) ;
 void* FUNC_3 (struct device*,int,scalar_t__*,int ) ;
 int FUNC_4 (struct device*,int,scalar_t__*,scalar_t__) ;
 void* FUNC_5 (int,int,int ) ;
 int FUNC_6 (scalar_t__**) ;

__attribute__((used)) static int FUNC_7(struct hns_roce_dev *VAR_6,
      struct hns_roce_eq *VAR_7)
{
 struct device *VAR_8 = VAR_6->dev;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u64 VAR_15;
 u64 VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21 = 0;
 int VAR_22 = 0;

 VAR_14 = VAR_6->caps.eqe_hop_num;
 VAR_12 = 1 << (VAR_6->caps.eqe_buf_pg_sz + VAR_5);
 VAR_13 = 1 << (VAR_6->caps.eqe_ba_pg_sz + VAR_5);

 VAR_17 = FUNC_0(FUNC_1(VAR_7->entries * VAR_7->eqe_size),
         VAR_12);
 VAR_18 = FUNC_0(VAR_17, VAR_13 / VAR_0);

 if (VAR_14 == VAR_4) {
  if (VAR_7->entries > VAR_12 / VAR_7->eqe_size) {
   FUNC_2(VAR_8, "eq entries %d is larger than buf_pg_sz!",
    VAR_7->entries);
   return -VAR_1;
  }
  VAR_7->bt_l0 = FUNC_3(VAR_8, VAR_7->entries * VAR_7->eqe_size,
            &(VAR_7->l0_dma), VAR_3);
  if (!VAR_7->bt_l0)
   return -VAR_2;

  VAR_7->cur_eqe_ba = VAR_7->l0_dma;
  VAR_7->nxt_eqe_ba = 0;

  return 0;
 }

 VAR_7->buf_dma = FUNC_5(VAR_17, sizeof(*VAR_7->buf_dma), VAR_3);
 if (!VAR_7->buf_dma)
  return -VAR_2;
 VAR_7->buf = FUNC_5(VAR_17, sizeof(*VAR_7->buf), VAR_3);
 if (!VAR_7->buf)
  goto err_kcalloc_buf;

 if (VAR_14 == 2) {
  VAR_7->l1_dma = FUNC_5(VAR_18, sizeof(*VAR_7->l1_dma), VAR_3);
  if (!VAR_7->l1_dma)
   goto err_kcalloc_l1_dma;

  VAR_7->bt_l1 = FUNC_5(VAR_18, sizeof(*VAR_7->bt_l1), VAR_3);
  if (!VAR_7->bt_l1)
   goto err_kcalloc_bt_l1;
 }


 VAR_7->bt_l0 = FUNC_3(VAR_8, VAR_13, &VAR_7->l0_dma, VAR_3);
 if (!VAR_7->bt_l0)
  goto err_dma_alloc_l0;

 if (VAR_14 == 1) {
  if (VAR_17 > (VAR_13 / VAR_0))
   FUNC_2(VAR_8, "ba_num %d is too large for 1 hop\n",
    VAR_17);


  for (VAR_21 = 0; VAR_21 < VAR_13 / VAR_0; VAR_21++) {
   if (VAR_10 + 1 < VAR_17) {
    VAR_15 = VAR_12;
   } else {
    VAR_11 = VAR_21 * (VAR_12 / VAR_7->eqe_size);
    VAR_15 = (VAR_7->entries - VAR_11) * VAR_7->eqe_size;
   }
   VAR_7->buf[VAR_21] = FUNC_3(VAR_8, VAR_15,
       (VAR_7->buf_dma[VAR_21]),
       VAR_3);
   if (!VAR_7->buf[VAR_21])
    goto err_dma_alloc_buf;

   *(VAR_7->bt_l0 + VAR_21) = *VAR_7->buf_dma[VAR_21];

   VAR_10++;
   if (VAR_10 >= VAR_17)
    break;
  }
  VAR_7->cur_eqe_ba = *VAR_7->buf_dma[0];
  if (VAR_17 > 1)
   VAR_7->nxt_eqe_ba = *VAR_7->buf_dma[1];

 } else if (VAR_14 == 2) {

  for (VAR_21 = 0; VAR_21 < VAR_13 / VAR_0; VAR_21++) {
   VAR_7->bt_l1[VAR_21] = FUNC_3(VAR_8, VAR_13,
         (VAR_7->l1_dma[VAR_21]),
         VAR_3);
   if (!VAR_7->bt_l1[VAR_21])
    goto err_dma_alloc_l1;
   *(VAR_7->bt_l0 + VAR_21) = *VAR_7->l1_dma[VAR_21];

   for (VAR_22 = 0; VAR_22 < VAR_13 / VAR_0; VAR_22++) {
    VAR_16 = VAR_21 * VAR_13 / VAR_0 + VAR_22;
    if (VAR_10 + 1 < VAR_17) {
     VAR_15 = VAR_12;
    } else {
     VAR_11 = (VAR_12 / VAR_7->eqe_size)
          * VAR_16;
     VAR_15 = (VAR_7->entries - VAR_11)
      * VAR_7->eqe_size;
    }
    VAR_7->buf[VAR_16] = FUNC_3(VAR_8, VAR_15,
          (VAR_7->buf_dma[VAR_16]),
          VAR_3);
    if (!VAR_7->buf[VAR_16])
     goto err_dma_alloc_buf;

    *(VAR_7->bt_l1[VAR_21] + VAR_22) = *VAR_7->buf_dma[VAR_16];

    VAR_10++;
    if (VAR_10 >= VAR_17) {
     VAR_9 = 1;
     break;
    }
   }

   if (VAR_9)
    break;
  }
  VAR_7->cur_eqe_ba = *VAR_7->buf_dma[0];
  if (VAR_17 > 1)
   VAR_7->nxt_eqe_ba = *VAR_7->buf_dma[1];
 }

 VAR_7->l0_last_num = VAR_21 + 1;
 if (VAR_14 == 2)
  VAR_7->l1_last_num = VAR_22 + 1;

 return 0;

err_dma_alloc_l1:
 FUNC_4(VAR_8, VAR_13, VAR_7->bt_l0, VAR_7->l0_dma);
 VAR_7->bt_l0 = ((void*)0);
 VAR_7->l0_dma = 0;
 for (VAR_21 -= 1; VAR_21 >= 0; VAR_21--) {
  FUNC_4(VAR_8, VAR_13, VAR_7->bt_l1[VAR_21],
      *VAR_7->l1_dma[VAR_21]);

  for (VAR_22 = 0; VAR_22 < VAR_13 / VAR_0; VAR_22++) {
   VAR_16 = VAR_21 * VAR_13 / VAR_0 + VAR_22;
   FUNC_4(VAR_8, VAR_12, VAR_7->buf[VAR_16],
       *VAR_7->buf_dma[VAR_16]);
  }
 }
 goto err_dma_alloc_l0;

err_dma_alloc_buf:
 FUNC_4(VAR_8, VAR_13, VAR_7->bt_l0, VAR_7->l0_dma);
 VAR_7->bt_l0 = ((void*)0);
 VAR_7->l0_dma = 0;

 if (VAR_14 == 1)
  for (VAR_21 -= 1; VAR_21 >= 0; VAR_21--)
   FUNC_4(VAR_8, VAR_12, VAR_7->buf[VAR_21],
       *VAR_7->buf_dma[VAR_21]);
 else if (VAR_14 == 2) {
  VAR_19 = VAR_21;
  VAR_20 = VAR_22;
  for (; VAR_21 >= 0; VAR_21--) {
   FUNC_4(VAR_8, VAR_13, VAR_7->bt_l1[VAR_21],
       *VAR_7->l1_dma[VAR_21]);

   for (VAR_22 = 0; VAR_22 < VAR_13 / VAR_0; VAR_22++) {
    if (VAR_21 == VAR_19 && VAR_22 >= VAR_20)
     break;

    VAR_16 = VAR_21 * VAR_13 / VAR_0 + VAR_22;
    FUNC_4(VAR_8, VAR_12,
        VAR_7->buf[VAR_16],
        *VAR_7->buf_dma[VAR_16]);
   }
  }
 }

err_dma_alloc_l0:
 FUNC_6(VAR_7->bt_l1);
 VAR_7->bt_l1 = ((void*)0);

err_kcalloc_bt_l1:
 FUNC_6(VAR_7->l1_dma);
 VAR_7->l1_dma = ((void*)0);

err_kcalloc_l1_dma:
 FUNC_6(VAR_7->buf);
 VAR_7->buf = ((void*)0);

err_kcalloc_buf:
 FUNC_6(VAR_7->buf_dma);
 VAR_7->buf_dma = ((void*)0);

 return -VAR_2;
}
