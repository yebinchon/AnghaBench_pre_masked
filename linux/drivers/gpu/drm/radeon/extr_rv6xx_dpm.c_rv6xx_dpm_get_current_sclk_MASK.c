
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rv6xx_pl {int sclk; } ;
struct rv6xx_ps {struct rv6xx_pl high; struct rv6xx_pl medium; struct rv6xx_pl low; } ;
struct radeon_ps {int dummy; } ;
struct TYPE_3__ {struct radeon_ps* current_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 struct rv6xx_ps* FUNC_1 (struct radeon_ps*) ;

u32 FUNC_2(struct radeon_device *VAR_3)
{
 struct radeon_ps *VAR_4 = VAR_3->pm.dpm.current_ps;
 struct rv6xx_ps *VAR_5 = FUNC_1(VAR_4);
 struct rv6xx_pl *VAR_6;
 u32 VAR_7 =
  (FUNC_0(VAR_2) & VAR_0) >>
  VAR_1;

 if (VAR_7 > 2) {
  return 0;
 } else {
  if (VAR_7 == 0)
   VAR_6 = &VAR_5->low;
  else if (VAR_7 == 1)
   VAR_6 = &VAR_5->medium;
  else
   VAR_6 = &VAR_5->high;
  return VAR_6->sclk;
 }
}
