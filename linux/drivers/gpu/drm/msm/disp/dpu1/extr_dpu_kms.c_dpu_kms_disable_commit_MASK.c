
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_kms {int dummy; } ;
struct dpu_kms {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 struct dpu_kms* FUNC_1 (struct msm_kms*) ;

__attribute__((used)) static void FUNC_2(struct msm_kms *VAR_0)
{
 struct dpu_kms *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(&VAR_1->pdev->dev);
}
