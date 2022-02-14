
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hisi_qm {TYPE_2__* ops; int ver; TYPE_1__* pdev; } ;
struct TYPE_4__ {int (* hw_error_handle ) (struct hisi_qm*) ;} ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct hisi_qm*) ;

int FUNC_2(struct hisi_qm *VAR_1)
{
 if (!VAR_1->ops->hw_error_handle) {
  FUNC_0(&VAR_1->pdev->dev, "QM version %d doesn't support hw error report!\n",
   VAR_1->ver);
  return VAR_0;
 }

 return VAR_1->ops->hw_error_handle(VAR_1);
}
