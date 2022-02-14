
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hns_roce_mr {int pbl_size; scalar_t__ type; int l0_chunk_last_num; int l1_chunk_last_num; int * pbl_l2_dma_addr; int * pbl_bt_l2; int * pbl_l1_dma_addr; int * pbl_bt_l1; int pbl_l0_dma_addr; int pbl_bt_l0; int pbl_dma_addr; int pbl_buf; } ;
struct TYPE_2__ {int pbl_ba_pg_sz; int pbl_hop_num; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_4,
          struct hns_roce_mr *VAR_5)
{
 struct device *VAR_6 = VAR_4->dev;
 int VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 u64 VAR_13;

 VAR_8 = VAR_5->pbl_size;
 VAR_11 = 1 << (VAR_4->caps.pbl_ba_pg_sz + VAR_3);
 VAR_12 = (VAR_5->type == VAR_2) ? 1 : VAR_4->caps.pbl_hop_num;

 if (VAR_12 == VAR_1)
  return;

 if (VAR_12 == 1) {
  FUNC_0(VAR_6, (unsigned int)(VAR_8 * VAR_0),
      VAR_5->pbl_buf, VAR_5->pbl_dma_addr);
  return;
 }

 FUNC_0(VAR_6, VAR_11, VAR_5->pbl_bt_l0,
     VAR_5->pbl_l0_dma_addr);

 if (VAR_12 == 2) {
  for (VAR_9 = 0; VAR_9 < VAR_5->l0_chunk_last_num; VAR_9++) {
   if (VAR_9 == VAR_5->l0_chunk_last_num - 1) {
    VAR_7 =
      VAR_9 * (VAR_11 / VAR_0);

    FUNC_0(VAR_6,
          (VAR_8 - VAR_7) * VAR_0,
           VAR_5->pbl_bt_l1[VAR_9],
           VAR_5->pbl_l1_dma_addr[VAR_9]);

    break;
   }

   FUNC_0(VAR_6, VAR_11, VAR_5->pbl_bt_l1[VAR_9],
       VAR_5->pbl_l1_dma_addr[VAR_9]);
  }
 } else if (VAR_12 == 3) {
  for (VAR_9 = 0; VAR_9 < VAR_5->l0_chunk_last_num; VAR_9++) {
   FUNC_0(VAR_6, VAR_11, VAR_5->pbl_bt_l1[VAR_9],
       VAR_5->pbl_l1_dma_addr[VAR_9]);

   for (VAR_10 = 0; VAR_10 < VAR_11 / VAR_0; VAR_10++) {
    VAR_13 = VAR_9 * (VAR_11 / VAR_0) + VAR_10;

    if ((VAR_9 == VAR_5->l0_chunk_last_num - 1)
        && VAR_10 == VAR_5->l1_chunk_last_num - 1) {
     VAR_7 = VAR_13 *
            (VAR_11 / VAR_0);

     FUNC_0(VAR_6,
           (VAR_8 - VAR_7) *
           VAR_0,
           VAR_5->pbl_bt_l2[VAR_13],
           VAR_5->pbl_l2_dma_addr[VAR_13]);

     break;
    }

    FUNC_0(VAR_6, VAR_11,
      VAR_5->pbl_bt_l2[VAR_13],
      VAR_5->pbl_l2_dma_addr[VAR_13]);
   }
  }
 }

 FUNC_1(VAR_5->pbl_bt_l1);
 FUNC_1(VAR_5->pbl_l1_dma_addr);
 VAR_5->pbl_bt_l1 = ((void*)0);
 VAR_5->pbl_l1_dma_addr = ((void*)0);
 if (VAR_12 == 3) {
  FUNC_1(VAR_5->pbl_bt_l2);
  FUNC_1(VAR_5->pbl_l2_dma_addr);
  VAR_5->pbl_bt_l2 = ((void*)0);
  VAR_5->pbl_l2_dma_addr = ((void*)0);
 }
}
