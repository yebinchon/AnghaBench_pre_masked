
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce_bw_output {int dispclk_khz; int sclk_khz; } ;
struct bw_calcs_vbios {int high_sclk; int high_voltage_max_dispclk; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(
 const struct bw_calcs_vbios *VAR_0,
 const struct dce_bw_output *VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_0(VAR_0->high_voltage_max_dispclk);
 VAR_2 *= 1000;
 if (VAR_1->dispclk_khz > VAR_2)
  return 0;

 VAR_2 = FUNC_0(VAR_0->high_sclk);
 VAR_2 *= 1000;
 if (VAR_1->sclk_khz > VAR_2)
  return 0;

 return 1;
}
