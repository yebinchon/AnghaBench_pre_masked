
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hns_roce_eq {int entries; int eqe_size; int l0_last_num; int l1_last_num; int * bt_l1; int * l1_dma; int * buf; int * buf_dma; int l0_dma; int bt_l0; } ;
struct TYPE_2__ {int eqe_hop_num; int eqe_buf_pg_sz; int eqe_ba_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_3,
      struct hns_roce_eq *VAR_4)
{
 struct device *VAR_5 = VAR_3->dev;
 u64 VAR_6;
 u64 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;

 VAR_10 = VAR_3->caps.eqe_hop_num;
 VAR_8 = 1 << (VAR_3->caps.eqe_buf_pg_sz + VAR_2);
 VAR_9 = 1 << (VAR_3->caps.eqe_ba_pg_sz + VAR_2);

 if (VAR_10 == VAR_1) {
  FUNC_0(VAR_5, (unsigned int)(VAR_4->entries *
      VAR_4->eqe_size), VAR_4->bt_l0, VAR_4->l0_dma);
  return;
 }

 FUNC_0(VAR_5, VAR_9, VAR_4->bt_l0, VAR_4->l0_dma);
 if (VAR_10 == 1) {
  for (VAR_12 = 0; VAR_12 < VAR_4->l0_last_num; VAR_12++) {
   if (VAR_12 == VAR_4->l0_last_num - 1) {
    VAR_11 = VAR_12 * (VAR_8 / VAR_4->eqe_size);
    VAR_7 = (VAR_4->entries - VAR_11) * VAR_4->eqe_size;
    FUNC_0(VAR_5, VAR_7, VAR_4->buf[VAR_12],
        VAR_4->buf_dma[VAR_12]);
    break;
   }
   FUNC_0(VAR_5, VAR_8, VAR_4->buf[VAR_12],
       VAR_4->buf_dma[VAR_12]);
  }
 } else if (VAR_10 == 2) {
  for (VAR_12 = 0; VAR_12 < VAR_4->l0_last_num; VAR_12++) {
   FUNC_0(VAR_5, VAR_9, VAR_4->bt_l1[VAR_12],
       VAR_4->l1_dma[VAR_12]);

   for (VAR_13 = 0; VAR_13 < VAR_9 / VAR_0; VAR_13++) {
    VAR_6 = VAR_12 * (VAR_9 / VAR_0) + VAR_13;
    if ((VAR_12 == VAR_4->l0_last_num - 1)
         && VAR_13 == VAR_4->l1_last_num - 1) {
     VAR_11 = (VAR_8 / VAR_4->eqe_size)
          * VAR_6;
     VAR_7 = (VAR_4->entries - VAR_11)
      * VAR_4->eqe_size;
     FUNC_0(VAR_5, VAR_7,
         VAR_4->buf[VAR_6],
         VAR_4->buf_dma[VAR_6]);
     break;
    }
    FUNC_0(VAR_5, VAR_8, VAR_4->buf[VAR_6],
        VAR_4->buf_dma[VAR_6]);
   }
  }
 }
 FUNC_1(VAR_4->buf_dma);
 FUNC_1(VAR_4->buf);
 FUNC_1(VAR_4->l1_dma);
 FUNC_1(VAR_4->bt_l1);
 VAR_4->buf_dma = ((void*)0);
 VAR_4->buf = ((void*)0);
 VAR_4->l1_dma = ((void*)0);
 VAR_4->bt_l1 = ((void*)0);
}
