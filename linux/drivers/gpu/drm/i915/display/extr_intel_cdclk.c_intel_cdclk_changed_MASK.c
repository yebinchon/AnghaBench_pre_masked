
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_cdclk_state {scalar_t__ voltage_level; } ;


 scalar_t__ FUNC_0 (struct intel_cdclk_state const*,struct intel_cdclk_state const*) ;

bool FUNC_1(const struct intel_cdclk_state *VAR_0,
    const struct intel_cdclk_state *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) ||
  VAR_0->voltage_level != VAR_1->voltage_level;
}
