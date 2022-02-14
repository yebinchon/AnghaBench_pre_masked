
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hns_roce_hem_table {unsigned long table_chunk_size; unsigned long num_hem; unsigned long num_obj; unsigned long obj_size; int lowmem; int * hem; int * bt_l1; int * bt_l1_dma_addr; int * bt_l0; int mutex; scalar_t__ type; void* bt_l0_dma_addr; } ;
struct hns_roce_hem_mhop {unsigned long buf_chunk_size; unsigned long bt_chunk_size; unsigned long ba_l0_num; scalar_t__ hop_num; } ;
struct TYPE_2__ {unsigned long chunk_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct hns_roce_dev*,struct hns_roce_hem_mhop*,scalar_t__) ;
 int FUNC_3 (struct hns_roce_dev*,scalar_t__) ;
 void* FUNC_4 (unsigned long,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct hns_roce_dev *VAR_5,
       struct hns_roce_hem_table *VAR_6, u32 VAR_7,
       unsigned long VAR_8, unsigned long VAR_9,
       int VAR_10)
{
 unsigned long VAR_11;
 unsigned long VAR_12;

 if (!FUNC_3(VAR_5, VAR_7)) {
  VAR_6->table_chunk_size = VAR_5->caps.chunk_sz;
  VAR_11 = VAR_6->table_chunk_size / VAR_8;
  VAR_12 = (VAR_9 + VAR_11 - 1) / VAR_11;

  VAR_6->hem = FUNC_4(VAR_12, sizeof(*VAR_6->hem), VAR_3);
  if (!VAR_6->hem)
   return -VAR_2;
 } else {
  struct hns_roce_hem_mhop VAR_13 = {};
  unsigned long VAR_14;
  unsigned long VAR_15;
  unsigned long VAR_16;
  unsigned long VAR_17 = 0;
  u32 VAR_18;

  if (FUNC_2(VAR_5, &VAR_13, VAR_7))
   return -VAR_1;

  VAR_14 = VAR_13.buf_chunk_size;
  VAR_15 = VAR_13.bt_chunk_size;
  VAR_17 = VAR_13.ba_l0_num;
  VAR_18 = VAR_13.hop_num;

  VAR_11 = VAR_14 / VAR_8;
  VAR_12 = (VAR_9 + VAR_11 - 1) / VAR_11;
  VAR_16 = VAR_15 / VAR_0;
  if (VAR_7 >= VAR_4)
   VAR_17 = VAR_16;

  VAR_6->hem = FUNC_4(VAR_12, sizeof(*VAR_6->hem),
      VAR_3);
  if (!VAR_6->hem)
   goto err_kcalloc_hem_buf;

  if (FUNC_1(VAR_7, VAR_18)) {
   unsigned long VAR_19;

   VAR_19 = (VAR_12 + VAR_16 - 1) /
          VAR_16;
   VAR_6->bt_l1 = FUNC_4(VAR_19,
            sizeof(*VAR_6->bt_l1),
            VAR_3);
   if (!VAR_6->bt_l1)
    goto err_kcalloc_bt_l1;

   VAR_6->bt_l1_dma_addr = FUNC_4(VAR_19,
       sizeof(*VAR_6->bt_l1_dma_addr),
       VAR_3);

   if (!VAR_6->bt_l1_dma_addr)
    goto err_kcalloc_l1_dma;
  }

  if (FUNC_0(VAR_7, VAR_18) ||
   FUNC_1(VAR_7, VAR_18)) {
   VAR_6->bt_l0 = FUNC_4(VAR_17, sizeof(*VAR_6->bt_l0),
            VAR_3);
   if (!VAR_6->bt_l0)
    goto err_kcalloc_bt_l0;

   VAR_6->bt_l0_dma_addr = FUNC_4(VAR_17,
       sizeof(*VAR_6->bt_l0_dma_addr),
       VAR_3);
   if (!VAR_6->bt_l0_dma_addr)
    goto err_kcalloc_l0_dma;
  }
 }

 VAR_6->type = VAR_7;
 VAR_6->num_hem = VAR_12;
 VAR_6->num_obj = VAR_9;
 VAR_6->obj_size = VAR_8;
 VAR_6->lowmem = VAR_10;
 FUNC_6(&VAR_6->mutex);

 return 0;

err_kcalloc_l0_dma:
 FUNC_5(VAR_6->bt_l0);
 VAR_6->bt_l0 = ((void*)0);

err_kcalloc_bt_l0:
 FUNC_5(VAR_6->bt_l1_dma_addr);
 VAR_6->bt_l1_dma_addr = ((void*)0);

err_kcalloc_l1_dma:
 FUNC_5(VAR_6->bt_l1);
 VAR_6->bt_l1 = ((void*)0);

err_kcalloc_bt_l1:
 FUNC_5(VAR_6->hem);
 VAR_6->hem = ((void*)0);

err_kcalloc_hem_buf:
 return -VAR_2;
}
