
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {int icc_path; } ;
struct TYPE_2__ {struct msm_gpu base; } ;
struct a6xx_gmu {int dev; int clocks; int nr_clocks; int gxpd; scalar_t__ hung; } ;
struct a6xx_gpu {TYPE_1__ base; struct a6xx_gmu gmu; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct a6xx_gmu*) ;
 int FUNC_2 (struct a6xx_gmu*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct a6xx_gpu *VAR_0)
{
 struct a6xx_gmu *VAR_1 = &VAR_0->gmu;
 struct msm_gpu *VAR_2 = &VAR_0->base.base;

 if (!FUNC_5(VAR_1->dev))
  return 0;





 if (VAR_1->hung)
  FUNC_1(VAR_1);
 else
  FUNC_2(VAR_1);


 FUNC_4(VAR_2->icc_path, 0, 0);






 if (!FUNC_0(VAR_1->gxpd))
  FUNC_6(VAR_1->gxpd);

 FUNC_3(VAR_1->nr_clocks, VAR_1->clocks);

 FUNC_6(VAR_1->dev);

 return 0;
}
