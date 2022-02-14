
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_mw {int rkey; scalar_t__ enabled; } ;
struct TYPE_4__ {int mtpt_bitmap; int mtpt_table; } ;
struct TYPE_3__ {int num_mtpts; } ;
struct hns_roce_dev {TYPE_2__ mr_table; TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct hns_roce_dev*,int *,int) ;
 int FUNC_3 (struct hns_roce_dev*,int *,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct hns_roce_dev *VAR_1,
        struct hns_roce_mw *VAR_2)
{
 struct device *VAR_3 = VAR_1->dev;
 int VAR_4;

 if (VAR_2->enabled) {
  VAR_4 = FUNC_2(VAR_1, ((void*)0), FUNC_4(VAR_2->rkey)
      & (VAR_1->caps.num_mtpts - 1));
  if (VAR_4)
   FUNC_0(VAR_3, "MW HW2SW_MPT failed (%d)\n", VAR_4);

  FUNC_3(VAR_1, &VAR_1->mr_table.mtpt_table,
       FUNC_4(VAR_2->rkey));
 }

 FUNC_1(&VAR_1->mr_table.mtpt_bitmap,
        FUNC_4(VAR_2->rkey), VAR_0);
}
