
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_dev {TYPE_1__* pdev; } ;
struct hns_roce_aeqe {int asyn; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hns_roce_dev *VAR_2,
        struct hns_roce_aeqe *VAR_3)
{
 struct device *VAR_4 = &VAR_2->pdev->dev;

 switch (FUNC_1(VAR_3->asyn, VAR_0,
          VAR_1)) {
 case 128:
  FUNC_0(VAR_4, "SDB overflow.\n");
  break;
 case 129:
  FUNC_0(VAR_4, "SDB almost overflow.\n");
  break;
 case 130:
  FUNC_0(VAR_4, "SDB almost empty.\n");
  break;
 case 131:
  FUNC_0(VAR_4, "ODB overflow.\n");
  break;
 case 132:
  FUNC_0(VAR_4, "ODB almost overflow.\n");
  break;
 case 133:
  FUNC_0(VAR_4, "SDB almost empty.\n");
  break;
 default:
  break;
 }
}
