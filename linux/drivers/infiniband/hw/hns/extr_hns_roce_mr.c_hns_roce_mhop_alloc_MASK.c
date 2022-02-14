
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_mr {scalar_t__ type; int pbl_size; int pbl_hop_num; int pbl_ba_pg_sz; int * pbl_l1_dma_addr; int * pbl_bt_l1; int pbl_buf_pg_sz; int pbl_l0_dma_addr; int pbl_ba; int pbl_bt_l0; } ;
struct TYPE_2__ {int pbl_hop_num; int pbl_ba_pg_sz; int pbl_buf_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,int,int *,int ) ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hns_roce_dev*,int,struct hns_roce_mr*,int) ;
 scalar_t__ FUNC_4 (struct hns_roce_dev*,int,struct hns_roce_mr*,int) ;
 scalar_t__ FUNC_5 (struct hns_roce_dev*,int,struct hns_roce_mr*,int) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_5, int VAR_6,
          struct hns_roce_mr *VAR_7)
{
 struct device *VAR_8 = VAR_5->dev;
 u32 VAR_9;
 u32 VAR_10;

 VAR_10 = (VAR_7->type == VAR_3 ? 1 : VAR_5->caps.pbl_hop_num);
 VAR_9 = 1 << (VAR_5->caps.pbl_ba_pg_sz + VAR_4);

 if (VAR_10 == VAR_2)
  return 0;

 if (VAR_10 == 1)
  return FUNC_3(VAR_5, VAR_6, VAR_7, VAR_9);

 VAR_7->pbl_l1_dma_addr = FUNC_1(VAR_9 / 8,
          sizeof(*VAR_7->pbl_l1_dma_addr),
          VAR_1);
 if (!VAR_7->pbl_l1_dma_addr)
  return -VAR_0;

 VAR_7->pbl_bt_l1 = FUNC_1(VAR_9 / 8, sizeof(*VAR_7->pbl_bt_l1),
    VAR_1);
 if (!VAR_7->pbl_bt_l1)
  goto err_kcalloc_bt_l1;


 VAR_7->pbl_bt_l0 = FUNC_0(VAR_8, VAR_9,
        &(VAR_7->pbl_l0_dma_addr),
        VAR_1);
 if (!VAR_7->pbl_bt_l0)
  goto err_kcalloc_l2_dma;

 if (VAR_10 == 2) {
  if (FUNC_4(VAR_5, VAR_6, VAR_7, VAR_9))
   goto err_kcalloc_l2_dma;
 }

 if (VAR_10 == 3) {
  if (FUNC_5(VAR_5, VAR_6, VAR_7, VAR_9))
   goto err_kcalloc_l2_dma;
 }


 VAR_7->pbl_size = VAR_6;
 VAR_7->pbl_ba = VAR_7->pbl_l0_dma_addr;
 VAR_7->pbl_hop_num = VAR_5->caps.pbl_hop_num;
 VAR_7->pbl_ba_pg_sz = VAR_5->caps.pbl_ba_pg_sz;
 VAR_7->pbl_buf_pg_sz = VAR_5->caps.pbl_buf_pg_sz;

 return 0;

err_kcalloc_l2_dma:
 FUNC_2(VAR_7->pbl_bt_l1);
 VAR_7->pbl_bt_l1 = ((void*)0);

err_kcalloc_bt_l1:
 FUNC_2(VAR_7->pbl_l1_dma_addr);
 VAR_7->pbl_l1_dma_addr = ((void*)0);

 return -VAR_0;
}
