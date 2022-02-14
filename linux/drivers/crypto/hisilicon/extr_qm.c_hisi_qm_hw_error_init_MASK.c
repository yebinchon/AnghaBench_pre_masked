
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hisi_qm {TYPE_2__* ops; int ver; TYPE_1__* pdev; } ;
struct TYPE_4__ {int (* hw_error_init ) (struct hisi_qm*,int ,int ,int ,int ) ;} ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct hisi_qm*,int ,int ,int ,int ) ;

void FUNC_2(struct hisi_qm *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3,
      u32 VAR_4)
{
 if (!VAR_0->ops->hw_error_init) {
  FUNC_0(&VAR_0->pdev->dev, "QM version %d doesn't support hw error handling!\n",
   VAR_0->ver);
  return;
 }

 VAR_0->ops->hw_error_init(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
