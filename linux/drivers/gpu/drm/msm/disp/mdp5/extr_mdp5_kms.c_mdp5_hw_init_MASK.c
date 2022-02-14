
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_kms {int dummy; } ;
struct mdp5_kms {int ctlm; int resource_lock; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mdp5_kms*,int ,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct mdp5_kms* FUNC_6 (int ) ;
 int FUNC_7 (struct msm_kms*) ;

__attribute__((used)) static int FUNC_8(struct msm_kms *VAR_1)
{
 struct mdp5_kms *VAR_2 = FUNC_6(FUNC_7(VAR_1));
 struct device *VAR_3 = &VAR_2->pdev->dev;
 unsigned long VAR_4;

 FUNC_2(VAR_3);
 FUNC_4(&VAR_2->resource_lock, VAR_4);
 FUNC_1(VAR_2, VAR_0, 0);
 FUNC_5(&VAR_2->resource_lock, VAR_4);

 FUNC_0(VAR_2->ctlm);

 FUNC_3(VAR_3);

 return 0;
}
