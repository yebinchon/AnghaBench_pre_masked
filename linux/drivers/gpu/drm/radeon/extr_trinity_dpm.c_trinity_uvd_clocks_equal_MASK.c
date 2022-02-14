
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trinity_ps {scalar_t__ vclk_low_divider; scalar_t__ vclk_high_divider; scalar_t__ dclk_low_divider; scalar_t__ dclk_high_divider; } ;
struct radeon_ps {scalar_t__ vclk; scalar_t__ dclk; } ;


 struct trinity_ps* FUNC_0 (struct radeon_ps*) ;

__attribute__((used)) static bool FUNC_1(struct radeon_ps *VAR_0,
         struct radeon_ps *VAR_1)
{
 struct trinity_ps *VAR_2 = FUNC_0(VAR_0);
 struct trinity_ps *VAR_3 = FUNC_0(VAR_1);

 if ((VAR_0->vclk == VAR_1->vclk) &&
     (VAR_0->dclk == VAR_1->dclk) &&
     (VAR_2->vclk_low_divider == VAR_3->vclk_low_divider) &&
     (VAR_2->vclk_high_divider == VAR_3->vclk_high_divider) &&
     (VAR_2->dclk_low_divider == VAR_3->dclk_low_divider) &&
     (VAR_2->dclk_high_divider == VAR_3->dclk_high_divider))
  return 1;
 else
  return 0;
}
