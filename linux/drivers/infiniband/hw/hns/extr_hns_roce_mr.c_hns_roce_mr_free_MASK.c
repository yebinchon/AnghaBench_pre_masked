
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_mr {unsigned long long size; scalar_t__ type; int key; scalar_t__ enabled; int pbl_dma_addr; int pbl_buf; int umem; } ;
struct TYPE_4__ {int mtpt_bitmap; int mtpt_table; } ;
struct TYPE_3__ {int num_mtpts; int pbl_hop_num; } ;
struct hns_roce_dev {TYPE_2__ mr_table; TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,unsigned int,int ,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct hns_roce_dev*,int *,int) ;
 int FUNC_4 (struct hns_roce_dev*,struct hns_roce_mr*) ;
 int FUNC_5 (struct hns_roce_dev*,int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct hns_roce_dev *VAR_3,
        struct hns_roce_mr *VAR_4)
{
 struct device *VAR_5 = VAR_3->dev;
 int VAR_6 = 0;
 int VAR_7;

 if (VAR_4->enabled) {
  VAR_7 = FUNC_3(VAR_3, ((void*)0), FUNC_7(VAR_4->key)
      & (VAR_3->caps.num_mtpts - 1));
  if (VAR_7)
   FUNC_0(VAR_5, "HW2SW_MPT failed (%d)\n", VAR_7);
 }

 if (VAR_4->size != ~0ULL) {
  if (VAR_4->type == VAR_2)
   VAR_6 = FUNC_6(VAR_4->umem);

  if (!VAR_3->caps.pbl_hop_num)
   FUNC_1(VAR_5,
       (unsigned int)(VAR_6 * VAR_0),
       VAR_4->pbl_buf, VAR_4->pbl_dma_addr);
  else
   FUNC_4(VAR_3, VAR_4);
 }

 if (VAR_4->enabled)
  FUNC_5(VAR_3, &VAR_3->mr_table.mtpt_table,
       FUNC_7(VAR_4->key));

 FUNC_2(&VAR_3->mr_table.mtpt_bitmap,
        FUNC_7(VAR_4->key), VAR_1);
}
