
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
typedef int u32 ;
struct hns_roce_hem_table {scalar_t__ type; int mutex; int ** bt_l0; int * bt_l0_dma_addr; int ** bt_l1; int * bt_l1_dma_addr; int num_hem; TYPE_2__** hem; } ;
struct hns_roce_hem_mhop {int bt_chunk_size; int hop_num; int l0_idx; int l1_idx; int l2_idx; } ;
struct hns_roce_dev {TYPE_1__* hw; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {scalar_t__ refcount; } ;
struct TYPE_4__ {scalar_t__ (* clear_hem ) (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct device*,char*,scalar_t__,int) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int,int *,int ) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long*,struct hns_roce_hem_mhop*) ;
 scalar_t__ FUNC_6 (int **,int,int) ;
 scalar_t__ FUNC_7 (TYPE_2__**,int,int,int ) ;
 int FUNC_8 (struct hns_roce_dev*,TYPE_2__*) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;
 scalar_t__ FUNC_13 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;
 scalar_t__ FUNC_14 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;
 scalar_t__ FUNC_15 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;
 scalar_t__ FUNC_16 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;
 scalar_t__ FUNC_17 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,int) ;

__attribute__((used)) static void FUNC_18(struct hns_roce_dev *VAR_3,
        struct hns_roce_hem_table *VAR_4,
        unsigned long VAR_5,
        int VAR_6)
{
 struct device *VAR_7 = VAR_3->dev;
 struct hns_roce_hem_mhop VAR_8;
 unsigned long VAR_9 = VAR_5;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u64 VAR_15;
 u64 VAR_16 = 0;
 int VAR_17;

 VAR_17 = FUNC_5(VAR_3, VAR_4, &VAR_9, &VAR_8);
 if (VAR_17)
  return;

 VAR_10 = VAR_8.bt_chunk_size;
 VAR_12 = VAR_8.hop_num;
 VAR_11 = VAR_10 / VAR_0;

 VAR_14 = FUNC_9(VAR_4->type, VAR_12);
 switch (VAR_14) {
 case 3:
  VAR_15 = VAR_8.l0_idx * VAR_11 * VAR_11 +
     VAR_8.l1_idx * VAR_11 + VAR_8.l2_idx;
  VAR_16 = VAR_8.l0_idx * VAR_11 + VAR_8.l1_idx;
  break;
 case 2:
  VAR_15 = VAR_8.l0_idx * VAR_11 + VAR_8.l1_idx;
  break;
 case 1:
  VAR_15 = VAR_8.l0_idx;
  break;
 default:
  FUNC_2(VAR_7, "Table %d not support hop_num = %d!\n",
        VAR_4->type, VAR_12);
  return;
 }

 FUNC_10(&VAR_4->mutex);

 if (VAR_6 && (--VAR_4->hem[VAR_15]->refcount > 0)) {
  FUNC_11(&VAR_4->mutex);
  return;
 }

 if (VAR_4->type < VAR_1 && VAR_12 == 1) {
  if (VAR_3->hw->clear_hem(VAR_3, VAR_4, VAR_5, 1))
   FUNC_3(VAR_7, "Clear HEM base address failed.\n");
 } else if (VAR_4->type < VAR_1 && VAR_12 == 2) {
  if (VAR_3->hw->clear_hem(VAR_3, VAR_4, VAR_5, 2))
   FUNC_3(VAR_7, "Clear HEM base address failed.\n");
 } else if (VAR_4->type < VAR_1 &&
     VAR_12 == VAR_2) {
  if (VAR_3->hw->clear_hem(VAR_3, VAR_4, VAR_5, 0))
   FUNC_3(VAR_7, "Clear HEM base address failed.\n");
 }





 FUNC_8(VAR_3, VAR_4->hem[VAR_15]);
 VAR_4->hem[VAR_15] = ((void*)0);

 if (FUNC_0(VAR_4->type, VAR_12)) {
  VAR_13 = VAR_8.l0_idx * VAR_11;
  if (FUNC_7(VAR_4->hem, VAR_13,
         VAR_11, VAR_4->num_hem)) {
   if (VAR_4->type < VAR_1 &&
       VAR_3->hw->clear_hem(VAR_3, VAR_4, VAR_5, 0))
    FUNC_3(VAR_7, "Clear HEM base address failed.\n");

   FUNC_4(VAR_7, VAR_10,
       VAR_4->bt_l0[VAR_8.l0_idx],
       VAR_4->bt_l0_dma_addr[VAR_8.l0_idx]);
   VAR_4->bt_l0[VAR_8.l0_idx] = ((void*)0);
  }
 } else if (FUNC_1(VAR_4->type, VAR_12)) {
  VAR_13 = VAR_8.l0_idx * VAR_11 * VAR_11 +
       VAR_8.l1_idx * VAR_11;
  if (FUNC_7(VAR_4->hem, VAR_13,
         VAR_11, VAR_4->num_hem)) {
   if (VAR_3->hw->clear_hem(VAR_3, VAR_4, VAR_5, 1))
    FUNC_3(VAR_7, "Clear HEM base address failed.\n");

   FUNC_4(VAR_7, VAR_10,
       VAR_4->bt_l1[VAR_16],
       VAR_4->bt_l1_dma_addr[VAR_16]);
   VAR_4->bt_l1[VAR_16] = ((void*)0);

   VAR_13 = VAR_8.l0_idx * VAR_11;
   if (FUNC_6(VAR_4->bt_l1, VAR_13,
         VAR_11)) {
    if (VAR_3->hw->clear_hem(VAR_3, VAR_4, VAR_5,
         0))
     FUNC_3(VAR_7, "Clear HEM base address failed.\n");

    FUNC_4(VAR_7, VAR_10,
         VAR_4->bt_l0[VAR_8.l0_idx],
         VAR_4->bt_l0_dma_addr[VAR_8.l0_idx]);
    VAR_4->bt_l0[VAR_8.l0_idx] = ((void*)0);
   }
  }
 }

 FUNC_11(&VAR_4->mutex);
}
