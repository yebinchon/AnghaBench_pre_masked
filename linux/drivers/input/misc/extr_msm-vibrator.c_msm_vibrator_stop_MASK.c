
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_vibrator {int enabled; int mutex; int clk; int vcc; int enable_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct msm_vibrator *VAR_0)
{
 FUNC_2(&VAR_0->mutex);

 if (VAR_0->enabled) {
  FUNC_1(VAR_0->enable_gpio, 0);
  FUNC_4(VAR_0->vcc);
  FUNC_0(VAR_0->clk);
  VAR_0->enabled = 0;
 }

 FUNC_3(&VAR_0->mutex);
}
