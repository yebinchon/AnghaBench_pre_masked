
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {int mode_flags; scalar_t__ enabled; scalar_t__ power_on; } ;


 int VAR_0 ;
 int FUNC_0 (struct msm_dsi_host*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct msm_dsi_host *VAR_1)
{
 if (!(VAR_1->mode_flags & VAR_0))
  return;

 if (VAR_1->power_on && VAR_1->enabled) {
  FUNC_0(VAR_1);

  FUNC_1(2000, 4000);
 }
}
