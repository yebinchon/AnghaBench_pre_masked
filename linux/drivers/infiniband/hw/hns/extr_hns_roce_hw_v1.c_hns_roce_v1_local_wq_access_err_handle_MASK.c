
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







 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_dev *VAR_2,
         struct hns_roce_aeqe *VAR_3,
         int VAR_4)
{
 struct device *VAR_5 = &VAR_2->pdev->dev;

 FUNC_1(VAR_5, "Local Access Violation Work Queue Error.\n");
 switch (FUNC_2(VAR_3->asyn, VAR_0,
          VAR_1)) {
 case 129:
  FUNC_1(VAR_5, "QP %d, R_key violation.\n", VAR_4);
  break;
 case 133:
  FUNC_1(VAR_5, "QP %d, length error.\n", VAR_4);
  break;
 case 128:
  FUNC_1(VAR_5, "QP %d, VA error.\n", VAR_4);
  break;
 case 131:
  FUNC_0(VAR_5, "QP %d, PD error.\n", VAR_4);
  break;
 case 130:
  FUNC_1(VAR_5, "QP %d, rw acc error.\n", VAR_4);
  break;
 case 134:
  FUNC_1(VAR_5, "QP %d, key state error.\n", VAR_4);
  break;
 case 132:
  FUNC_1(VAR_5, "QP %d, MR operation error.\n", VAR_4);
  break;
 default:
  break;
 }
}
