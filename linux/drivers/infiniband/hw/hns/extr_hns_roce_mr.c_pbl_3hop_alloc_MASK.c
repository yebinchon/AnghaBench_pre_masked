
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hns_roce_mr {int l0_chunk_last_num; int l1_chunk_last_num; void** pbl_l2_dma_addr; void** pbl_bt_l2; void*** pbl_bt_l1; void** pbl_l1_dma_addr; void** pbl_bt_l0; } ;
struct hns_roce_dev {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*,int,void**,int ) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_mr*,int,int,int) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (void**) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_2, int VAR_3,
          struct hns_roce_mr *VAR_4, u32 VAR_5)
{
 struct device *VAR_6 = VAR_2->dev;
 int VAR_7 = 0;
 int VAR_8;
 u64 VAR_9;
 u64 VAR_10 = 0;
 u64 VAR_11;
 u64 VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 VAR_9 = (VAR_3 + VAR_5 / 8 - 1) / (VAR_5 / 8);

 VAR_4->pbl_l2_dma_addr = FUNC_2(VAR_9,
          sizeof(*VAR_4->pbl_l2_dma_addr),
          VAR_1);
 if (!VAR_4->pbl_l2_dma_addr)
  return -VAR_0;

 VAR_4->pbl_bt_l2 = FUNC_2(VAR_9,
    sizeof(*VAR_4->pbl_bt_l2),
    VAR_1);
 if (!VAR_4->pbl_bt_l2)
  goto err_kcalloc_bt_l2;


 for (VAR_13 = 0; VAR_13 < VAR_5 / 8; VAR_13++) {
  VAR_4->pbl_bt_l1[VAR_13] = FUNC_0(VAR_6, VAR_5,
         &(VAR_4->pbl_l1_dma_addr[VAR_13]),
         VAR_1);
  if (!VAR_4->pbl_bt_l1[VAR_13]) {
   FUNC_1(VAR_2, VAR_4, 1, VAR_13, 0);
   goto err_dma_alloc_l0;
  }

  *(VAR_4->pbl_bt_l0 + VAR_13) = VAR_4->pbl_l1_dma_addr[VAR_13];

  for (VAR_14 = 0; VAR_14 < VAR_5 / 8; VAR_14++) {
   VAR_11 = VAR_13 * VAR_5 / 8 + VAR_14;

   if (VAR_10 + 1 < VAR_9) {
    VAR_12 = VAR_5;
   } else {
    VAR_8 = VAR_11 *
         (VAR_5 / 8);
    VAR_12 = (VAR_3 - VAR_8) * 8;
   }
   VAR_4->pbl_bt_l2[VAR_11] = FUNC_0(
          VAR_6, VAR_12,
          &(VAR_4->pbl_l2_dma_addr[VAR_11]),
          VAR_1);
   if (!VAR_4->pbl_bt_l2[VAR_11]) {
    FUNC_1(VAR_2, VAR_4, 2, VAR_13, VAR_14);
    goto err_dma_alloc_l0;
   }

   *(VAR_4->pbl_bt_l1[VAR_13] + VAR_14) =
     VAR_4->pbl_l2_dma_addr[VAR_11];

   VAR_10++;
   if (VAR_10 >= VAR_9) {
    VAR_7 = 1;
    break;
   }
  }

  if (VAR_7)
   break;
 }

 VAR_4->l0_chunk_last_num = VAR_13 + 1;
 VAR_4->l1_chunk_last_num = VAR_14 + 1;


 return 0;

err_dma_alloc_l0:
 FUNC_3(VAR_4->pbl_bt_l2);
 VAR_4->pbl_bt_l2 = ((void*)0);

err_kcalloc_bt_l2:
 FUNC_3(VAR_4->pbl_l2_dma_addr);
 VAR_4->pbl_l2_dma_addr = ((void*)0);

 return -VAR_0;
}
