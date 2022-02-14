
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_qp {int dummy; } ;
struct hisi_qm {int qp_num; scalar_t__ fun_type; struct hisi_qp** qp_array; scalar_t__ io_base; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct hisi_qm*,int ,int ,int ) ;
 int FUNC_3 (struct hisi_qp*) ;
 int FUNC_4 (int,scalar_t__) ;

int FUNC_5(struct hisi_qm *VAR_5)
{
 struct device *VAR_6;
 struct hisi_qp *VAR_7;
 int VAR_8 = 0, VAR_9;

 if (!VAR_5 || !VAR_5->pdev) {
  FUNC_0(1);
  return -VAR_1;
 }

 VAR_6 = &VAR_5->pdev->dev;


 FUNC_4(0x1, VAR_5->io_base + VAR_4);
 FUNC_4(0x1, VAR_5->io_base + VAR_3);


 for (VAR_9 = 0; VAR_9 < VAR_5->qp_num; VAR_9++) {
  VAR_7 = VAR_5->qp_array[VAR_9];
  if (VAR_7) {
   VAR_8 = FUNC_3(VAR_7);
   if (VAR_8 < 0) {
    FUNC_1(VAR_6, "Failed to stop qp%d!\n", VAR_9);
    return -VAR_0;
   }
  }
 }

 if (VAR_5->fun_type == VAR_2) {
  VAR_8 = FUNC_2(VAR_5, 0, 0, 0);
  if (VAR_8 < 0)
   FUNC_1(VAR_6, "Failed to set vft!\n");
 }

 return VAR_8;
}
