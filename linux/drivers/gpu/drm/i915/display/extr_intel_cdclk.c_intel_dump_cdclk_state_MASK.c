
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_cdclk_state {int voltage_level; int bypass; int ref; int vco; int cdclk; } ;


 int FUNC_0 (char*,char const*,int ,int ,int ,int ,int ) ;

void FUNC_1(const struct intel_cdclk_state *VAR_0,
       const char *VAR_1)
{
 FUNC_0("%s %d kHz, VCO %d kHz, ref %d kHz, bypass %d kHz, voltage level %d\n",
    VAR_1, VAR_0->cdclk, VAR_0->vco,
    VAR_0->ref, VAR_0->bypass,
    VAR_0->voltage_level);
}
