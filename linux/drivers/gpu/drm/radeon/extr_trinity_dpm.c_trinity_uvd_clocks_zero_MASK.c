
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ps {scalar_t__ vclk; scalar_t__ dclk; } ;



__attribute__((used)) static bool FUNC_0(struct radeon_ps *VAR_0)
{
 if ((VAR_0->vclk == 0) && (VAR_0->dclk == 0))
  return 1;
 else
  return 0;
}
