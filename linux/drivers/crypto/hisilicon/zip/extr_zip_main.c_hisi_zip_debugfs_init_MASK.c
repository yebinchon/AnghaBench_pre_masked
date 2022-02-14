
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct dentry* debug_root; } ;
struct hisi_qm {scalar_t__ fun_type; TYPE_1__ debug; TYPE_2__* pdev; } ;
struct hisi_zip {TYPE_3__* ctrl; struct hisi_qm qm; } ;
struct device {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_6__ {struct dentry* debug_root; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dentry* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct hisi_qm*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct hisi_zip *VAR_3)
{
 struct hisi_qm *VAR_4 = &VAR_3->qm;
 struct device *VAR_5 = &VAR_4->pdev->dev;
 struct dentry *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(FUNC_2(VAR_5), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->debug.debug_root = VAR_6;
 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7)
  goto failed_to_create;

 if (VAR_4->fun_type == VAR_1) {
  VAR_3->ctrl->debug_root = VAR_6;
  VAR_7 = FUNC_4(VAR_3->ctrl);
  if (VAR_7)
   goto failed_to_create;
 }

 return 0;

failed_to_create:
 FUNC_1(VAR_2);
 return VAR_7;
}
