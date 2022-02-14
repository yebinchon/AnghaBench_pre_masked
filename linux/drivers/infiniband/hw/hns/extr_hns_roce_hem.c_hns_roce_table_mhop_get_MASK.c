
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
typedef int u32 ;
struct hns_roce_hem_table {size_t num_hem; size_t** bt_l0; size_t* bt_l0_dma_addr; size_t** bt_l1; size_t* bt_l1_dma_addr; int mutex; TYPE_2__** hem; int type; scalar_t__ lowmem; } ;
struct hns_roce_hem_mhop {int buf_chunk_size; int bt_chunk_size; int hop_num; int l0_idx; int l1_idx; int l2_idx; } ;
struct hns_roce_hem_iter {int dummy; } ;
struct hns_roce_dev {TYPE_1__* hw; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int refcount; } ;
struct TYPE_4__ {scalar_t__ (* set_hem ) (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 void* FUNC_3 (struct device*,int,size_t*,int) ;
 int FUNC_4 (struct device*,int,size_t*,size_t) ;
 TYPE_2__* FUNC_5 (struct hns_roce_dev*,int,int,int) ;
 int FUNC_6 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long*,struct hns_roce_hem_mhop*) ;
 int FUNC_7 (int ,int) ;
 size_t FUNC_8 (struct hns_roce_hem_iter*) ;
 int FUNC_9 (TYPE_2__*,struct hns_roce_hem_iter*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;
 scalar_t__ FUNC_13 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;
 scalar_t__ FUNC_14 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct hns_roce_dev *VAR_10,
       struct hns_roce_hem_table *VAR_11,
       unsigned long VAR_12)
{
 struct device *VAR_13 = VAR_10->dev;
 struct hns_roce_hem_mhop VAR_14;
 struct hns_roce_hem_iter VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u64 VAR_22;
 u64 VAR_23 = 0;
 u64 VAR_24 = 0;
 u64 VAR_25;
 unsigned long VAR_26 = VAR_12;
 int VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29;
 int VAR_30;

 VAR_30 = FUNC_6(VAR_10, VAR_11, &VAR_26, &VAR_14);
 if (VAR_30)
  return VAR_30;

 VAR_16 = VAR_14.buf_chunk_size;
 VAR_17 = VAR_14.bt_chunk_size;
 VAR_19 = VAR_14.hop_num;
 VAR_18 = VAR_17 / VAR_0;

 VAR_21 = FUNC_7(VAR_11->type, VAR_19);
 switch (VAR_21) {
 case 3:
  VAR_22 = VAR_14.l0_idx * VAR_18 * VAR_18 +
     VAR_14.l1_idx * VAR_18 + VAR_14.l2_idx;
  VAR_23 = VAR_14.l0_idx * VAR_18 + VAR_14.l1_idx;
  VAR_24 = VAR_14.l0_idx;
  break;
 case 2:
  VAR_22 = VAR_14.l0_idx * VAR_18 + VAR_14.l1_idx;
  VAR_24 = VAR_14.l0_idx;
  break;
 case 1:
  VAR_22 = VAR_14.l0_idx;
  break;
 default:
  FUNC_2(VAR_13, "Table %d not support hop_num = %d!\n",
        VAR_11->type, VAR_19);
  return -VAR_1;
 }

 if (FUNC_15(VAR_22 >= VAR_11->num_hem)) {
  FUNC_2(VAR_13, "Table %d exceed hem limt idx = %llu,max = %lu!\n",
        VAR_11->type, VAR_22, VAR_11->num_hem);
  return -VAR_1;
 }

 FUNC_10(&VAR_11->mutex);

 if (VAR_11->hem[VAR_22]) {
  ++VAR_11->hem[VAR_22]->refcount;
  goto out;
 }


 if ((FUNC_1(VAR_11->type, VAR_19) ||
  FUNC_0(VAR_11->type, VAR_19)) &&
  !VAR_11->bt_l0[VAR_24]) {
  VAR_11->bt_l0[VAR_24] = FUNC_3(VAR_13, VAR_17,
         &(VAR_11->bt_l0_dma_addr[VAR_24]),
         VAR_5);
  if (!VAR_11->bt_l0[VAR_24]) {
   VAR_30 = -VAR_3;
   goto out;
  }
  VAR_28 = 1;


  if (VAR_11->type < VAR_6) {
   VAR_29 = 0;
   if (VAR_10->hw->set_hem(VAR_10, VAR_11, VAR_12, VAR_29)) {
    VAR_30 = -VAR_2;
    FUNC_2(VAR_13, "set HEM base address to HW failed!\n");
    goto err_dma_alloc_l1;
   }
  }
 }


 if (FUNC_1(VAR_11->type, VAR_19) &&
     !VAR_11->bt_l1[VAR_23]) {
  VAR_11->bt_l1[VAR_23] = FUNC_3(VAR_13, VAR_17,
         &(VAR_11->bt_l1_dma_addr[VAR_23]),
         VAR_5);
  if (!VAR_11->bt_l1[VAR_23]) {
   VAR_30 = -VAR_3;
   goto err_dma_alloc_l1;
  }
  VAR_27 = 1;
  *(VAR_11->bt_l0[VAR_24] + VAR_14.l1_idx) =
            VAR_11->bt_l1_dma_addr[VAR_23];


  VAR_29 = 1;
  if (VAR_10->hw->set_hem(VAR_10, VAR_11, VAR_12, VAR_29)) {
   VAR_30 = -VAR_2;
   FUNC_2(VAR_13, "set HEM base address to HW failed!\n");
   goto err_alloc_hem_buf;
  }
 }





 VAR_20 = VAR_11->type < VAR_6 ? VAR_16 : VAR_17;
 VAR_11->hem[VAR_22] = FUNC_5(VAR_10,
      VAR_20 >> VAR_8,
      VAR_20,
      (VAR_11->lowmem ? VAR_5 :
      VAR_4) | VAR_9);
 if (!VAR_11->hem[VAR_22]) {
  VAR_30 = -VAR_3;
  goto err_alloc_hem_buf;
 }

 FUNC_9(VAR_11->hem[VAR_22], &VAR_15);
 VAR_25 = FUNC_8(&VAR_15);

 if (VAR_11->type < VAR_6) {
  if (VAR_19 == 2) {
   *(VAR_11->bt_l1[VAR_23] + VAR_14.l2_idx) = VAR_25;
   VAR_29 = 2;
  } else if (VAR_19 == 1) {
   *(VAR_11->bt_l0[VAR_24] + VAR_14.l1_idx) = VAR_25;
   VAR_29 = 1;
  } else if (VAR_19 == VAR_7) {
   VAR_29 = 0;
  } else {
   VAR_30 = -VAR_1;
   goto err_dma_alloc_l1;
  }


  if (VAR_10->hw->set_hem(VAR_10, VAR_11, VAR_12, VAR_29)) {
   VAR_30 = -VAR_2;
   FUNC_2(VAR_13, "set HEM base address to HW failed!\n");
   goto err_alloc_hem_buf;
  }
 } else if (VAR_19 == 2) {
  *(VAR_11->bt_l0[VAR_24] + VAR_14.l1_idx) = VAR_25;
 }

 ++VAR_11->hem[VAR_22]->refcount;
 goto out;

err_alloc_hem_buf:
 if (VAR_27) {
  FUNC_4(VAR_13, VAR_17, VAR_11->bt_l1[VAR_23],
      VAR_11->bt_l1_dma_addr[VAR_23]);
  VAR_11->bt_l1[VAR_23] = ((void*)0);
 }

err_dma_alloc_l1:
 if (VAR_28) {
  FUNC_4(VAR_13, VAR_17, VAR_11->bt_l0[VAR_24],
      VAR_11->bt_l0_dma_addr[VAR_24]);
  VAR_11->bt_l0[VAR_24] = ((void*)0);
 }

out:
 FUNC_11(&VAR_11->mutex);
 return VAR_30;
}
