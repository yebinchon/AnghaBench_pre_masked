
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_zip_ctrl {struct hisi_zip* hisi_zip; } ;
struct hisi_qm {int ver; int ctrl_qp_num; TYPE_1__* pdev; } ;
struct hisi_zip {struct hisi_zip_ctrl* ctrl; struct hisi_qm qm; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 struct hisi_zip_ctrl* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct hisi_zip*) ;
 int FUNC_2 (struct hisi_zip*) ;
 int FUNC_3 (struct hisi_zip*) ;

__attribute__((used)) static int FUNC_4(struct hisi_zip *VAR_5)
{
 struct hisi_qm *VAR_6 = &VAR_5->qm;
 struct hisi_zip_ctrl *VAR_7;

 VAR_7 = FUNC_0(&VAR_6->pdev->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_5->ctrl = VAR_7;
 VAR_7->hisi_zip = VAR_5;

 switch (VAR_6->ver) {
 case 129:
  VAR_6->ctrl_qp_num = VAR_3;
  break;

 case 128:
  VAR_6->ctrl_qp_num = VAR_4;
  break;

 default:
  return -VAR_0;
 }

 FUNC_3(VAR_5);
 FUNC_2(VAR_5);
 FUNC_1(VAR_5);

 return 0;
}
