
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
typedef int u32 ;
struct hns_roce_mr {int pbl_l0_dma_addr; int * pbl_bt_l0; int * pbl_l1_dma_addr; int ** pbl_bt_l1; int * pbl_l2_dma_addr; int ** pbl_bt_l2; } ;
struct TYPE_2__ {int pbl_ba_pg_sz; int pbl_hop_num; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct device*,int,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_2,
          struct hns_roce_mr *VAR_3, int VAR_4,
          int VAR_5, int VAR_6)
{
 struct device *VAR_7 = VAR_2->dev;
 u32 VAR_8;
 u32 VAR_9;
 u64 VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = 1 << (VAR_2->caps.pbl_ba_pg_sz + VAR_1);
 VAR_8 = VAR_2->caps.pbl_hop_num;

 VAR_11 = VAR_5;
 if (VAR_8 == 3 && VAR_4 == 2) {
  for (; VAR_11 >= 0; VAR_11--) {
   FUNC_1(VAR_7, VAR_9, VAR_3->pbl_bt_l1[VAR_11],
       VAR_3->pbl_l1_dma_addr[VAR_11]);

   for (VAR_12 = 0; VAR_12 < VAR_9 / VAR_0; VAR_12++) {
    if (VAR_11 == VAR_5 && VAR_12 >= VAR_6)
     break;

    VAR_10 = VAR_11 * VAR_9 / VAR_0 + VAR_12;
    FUNC_1(VAR_7, VAR_9,
        VAR_3->pbl_bt_l2[VAR_10],
        VAR_3->pbl_l2_dma_addr[VAR_10]);
   }
  }
 } else if (VAR_8 == 3 && VAR_4 == 1) {
  for (VAR_11 -= 1; VAR_11 >= 0; VAR_11--) {
   FUNC_1(VAR_7, VAR_9, VAR_3->pbl_bt_l1[VAR_11],
       VAR_3->pbl_l1_dma_addr[VAR_11]);

   for (VAR_12 = 0; VAR_12 < VAR_9 / VAR_0; VAR_12++) {
    VAR_10 = VAR_11 * VAR_9 / VAR_0 + VAR_12;
    FUNC_1(VAR_7, VAR_9,
        VAR_3->pbl_bt_l2[VAR_10],
        VAR_3->pbl_l2_dma_addr[VAR_10]);
   }
  }
 } else if (VAR_8 == 2 && VAR_4 == 1) {
  for (VAR_11 -= 1; VAR_11 >= 0; VAR_11--)
   FUNC_1(VAR_7, VAR_9, VAR_3->pbl_bt_l1[VAR_11],
       VAR_3->pbl_l1_dma_addr[VAR_11]);
 } else {
  FUNC_0(VAR_7, "not support: mhop_num=%d, err_loop_index=%d.",
    VAR_8, VAR_4);
  return;
 }

 FUNC_1(VAR_7, VAR_9, VAR_3->pbl_bt_l0, VAR_3->pbl_l0_dma_addr);
 VAR_3->pbl_bt_l0 = ((void*)0);
 VAR_3->pbl_l0_dma_addr = 0;
}
