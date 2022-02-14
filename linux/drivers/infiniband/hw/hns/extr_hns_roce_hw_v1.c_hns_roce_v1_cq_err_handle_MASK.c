
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_dev {TYPE_1__* pdev; } ;
struct TYPE_5__ {int cq; } ;
struct TYPE_6__ {TYPE_2__ cq_event; } ;
struct hns_roce_aeqe {TYPE_3__ event; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct hns_roce_dev*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_dev *VAR_2,
          struct hns_roce_aeqe *VAR_3,
          int VAR_4)
{
 struct device *VAR_5 = &VAR_2->pdev->dev;
 u32 VAR_6;

 VAR_6 = FUNC_2(VAR_3->event.cq_event.cq,
     VAR_0,
     VAR_1);

 switch (VAR_4) {
 case 130:
  FUNC_0(VAR_5, "CQ 0x%x access err.\n", VAR_6);
  break;
 case 128:
  FUNC_0(VAR_5, "CQ 0x%x overflow\n", VAR_6);
  break;
 case 129:
  FUNC_0(VAR_5, "CQ 0x%x ID invalid.\n", VAR_6);
  break;
 default:
  break;
 }

 FUNC_1(VAR_2, VAR_6, VAR_4);
}
