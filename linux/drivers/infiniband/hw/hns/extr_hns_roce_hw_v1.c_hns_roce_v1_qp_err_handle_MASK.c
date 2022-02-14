
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hns_roce_dev {TYPE_1__* pdev; } ;
struct TYPE_6__ {int qp; } ;
struct TYPE_5__ {TYPE_3__ qp_event; } ;
struct hns_roce_aeqe {TYPE_2__ event; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct hns_roce_dev*,int,int) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_aeqe*,int) ;
 int FUNC_3 (struct hns_roce_dev*,struct hns_roce_aeqe*,int) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hns_roce_dev *VAR_5,
          struct hns_roce_aeqe *VAR_6,
          int VAR_7)
{
 struct device *VAR_8 = &VAR_5->pdev->dev;
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_6->event.qp_event.qp,
        VAR_2,
        VAR_3);
 VAR_9 = FUNC_4(VAR_6->event.qp_event.qp,
      VAR_0,
      VAR_1);
 if (VAR_10 <= 1)
  VAR_10 = VAR_4 * VAR_10 + VAR_9;

 switch (VAR_7) {
 case 130:
  FUNC_0(VAR_8, "Invalid Req Local Work Queue Error.\n"
    "QP %d, phy_port %d.\n", VAR_10, VAR_9);
  break;
 case 128:
  FUNC_3(VAR_5, VAR_6, VAR_10);
  break;
 case 129:
  FUNC_2(VAR_5, VAR_6, VAR_10);
  break;
 default:
  break;
 }

 FUNC_1(VAR_5, VAR_10, VAR_7);
}
