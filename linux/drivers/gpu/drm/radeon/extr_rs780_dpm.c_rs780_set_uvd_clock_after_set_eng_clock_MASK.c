
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {scalar_t__ vclk; scalar_t__ dclk; } ;
struct radeon_device {int dummy; } ;
struct igp_ps {scalar_t__ sclk_high; } ;


 int FUNC_0 (struct radeon_device*,scalar_t__,scalar_t__) ;
 struct igp_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_0,
          struct radeon_ps *VAR_1,
          struct radeon_ps *VAR_2)
{
 struct igp_ps *VAR_3 = FUNC_1(VAR_1);
 struct igp_ps *VAR_4 = FUNC_1(VAR_2);

 if ((VAR_1->vclk == VAR_2->vclk) &&
     (VAR_1->dclk == VAR_2->dclk))
  return;

 if (VAR_3->sclk_high < VAR_4->sclk_high)
  return;

 FUNC_0(VAR_0, VAR_1->vclk, VAR_1->dclk);
}
