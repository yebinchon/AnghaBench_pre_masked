
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_kms {int dummy; } ;
struct mdp5_kms {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mdp5_kms*,int ,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 struct mdp5_kms* FUNC_3 (int ) ;
 int FUNC_4 (struct msm_kms*) ;

void FUNC_5(struct msm_kms *VAR_2)
{
 struct mdp5_kms *VAR_3 = FUNC_3(FUNC_4(VAR_2));
 struct device *VAR_4 = &VAR_3->pdev->dev;

 FUNC_1(VAR_4);
 FUNC_0(VAR_3, VAR_0, 0xffffffff);
 FUNC_0(VAR_3, VAR_1, 0x00000000);
 FUNC_2(VAR_4);
}
