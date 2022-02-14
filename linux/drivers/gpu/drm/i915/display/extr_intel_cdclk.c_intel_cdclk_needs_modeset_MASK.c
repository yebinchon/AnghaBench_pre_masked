
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_cdclk_state {scalar_t__ cdclk; scalar_t__ vco; scalar_t__ ref; } ;



bool FUNC_0(const struct intel_cdclk_state *VAR_0,
          const struct intel_cdclk_state *VAR_1)
{
 return VAR_0->cdclk != VAR_1->cdclk ||
  VAR_0->vco != VAR_1->vco ||
  VAR_0->ref != VAR_1->ref;
}
