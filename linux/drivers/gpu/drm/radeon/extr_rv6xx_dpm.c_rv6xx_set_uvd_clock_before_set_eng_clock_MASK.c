
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sclk; } ;
struct rv6xx_ps {TYPE_1__ high; } ;
struct radeon_ps {scalar_t__ vclk; scalar_t__ dclk; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (struct radeon_device*,scalar_t__,scalar_t__) ;
 struct rv6xx_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
           struct radeon_ps *VAR_1,
           struct radeon_ps *VAR_2)
{
 struct rv6xx_ps *VAR_3 = FUNC_1(VAR_1);
 struct rv6xx_ps *VAR_4 = FUNC_1(VAR_2);

 if ((VAR_1->vclk == VAR_2->vclk) &&
     (VAR_1->dclk == VAR_2->dclk))
  return;

 if (VAR_3->high.sclk >= VAR_4->high.sclk)
  return;

 FUNC_0(VAR_0, VAR_1->vclk, VAR_1->dclk);
}
