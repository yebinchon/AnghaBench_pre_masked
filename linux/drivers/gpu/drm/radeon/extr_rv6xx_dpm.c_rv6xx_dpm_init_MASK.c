
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rv6xx_power_info {int fb_div_scale; int gfx_clock_gating; int sclk_ss; int dynamic_ss; int dynamic_pcie_gen2; int thermal_protection; int display_gap; void* mclk_ss; int voltage_control; void* mpll_ref_div; void* spll_ref_div; } ;
struct TYPE_3__ {scalar_t__ voltage_response_time; scalar_t__ backbias_response_time; struct rv6xx_power_info* priv; } ;
struct TYPE_4__ {scalar_t__ int_thermal_type; TYPE_1__ dpm; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ pm; } ;
struct radeon_atom_ss {int dummy; } ;
struct atom_clock_dividers {void* ref_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 struct rv6xx_power_info* FUNC_0 (int,int ) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (struct radeon_device*,int ,int ,int,struct atom_clock_dividers*) ;
 int FUNC_3 (struct radeon_device*,int ,int ) ;
 void* FUNC_4 (struct radeon_device*,struct radeon_atom_ss*,int ,int ) ;
 int FUNC_5 (struct radeon_device*) ;

int FUNC_6(struct radeon_device *VAR_12)
{
 struct radeon_atom_ss VAR_13;
 struct atom_clock_dividers VAR_14;
 struct rv6xx_power_info *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_0(sizeof(struct rv6xx_power_info), VAR_6);
 if (VAR_15 == ((void*)0))
  return -VAR_5;
 VAR_12->pm.dpm.priv = VAR_15;

 VAR_16 = FUNC_1(VAR_12);
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_5(VAR_12);
 if (VAR_16)
  return VAR_16;

 if (VAR_12->pm.dpm.voltage_response_time == 0)
  VAR_12->pm.dpm.voltage_response_time = VAR_9;
 if (VAR_12->pm.dpm.backbias_response_time == 0)
  VAR_12->pm.dpm.backbias_response_time = VAR_7;

 VAR_16 = FUNC_2(VAR_12, VAR_3,
          0, 0, &VAR_14);
 if (VAR_16)
  VAR_15->spll_ref_div = VAR_14.ref_div + 1;
 else
  VAR_15->spll_ref_div = VAR_8;

 VAR_16 = FUNC_2(VAR_12, VAR_4,
          0, 0, &VAR_14);
 if (VAR_16)
  VAR_15->mpll_ref_div = VAR_14.ref_div + 1;
 else
  VAR_15->mpll_ref_div = VAR_8;

 if (VAR_12->family >= VAR_2)
  VAR_15->fb_div_scale = 1;
 else
  VAR_15->fb_div_scale = 0;

 VAR_15->voltage_control =
  FUNC_3(VAR_12, VAR_10, 0);

 VAR_15->gfx_clock_gating = 1;

 VAR_15->sclk_ss = FUNC_4(VAR_12, &VAR_13,
             VAR_0, 0);
 VAR_15->mclk_ss = FUNC_4(VAR_12, &VAR_13,
             VAR_1, 0);


 VAR_15->sclk_ss = 0;

 if (VAR_15->sclk_ss || VAR_15->mclk_ss)
  VAR_15->dynamic_ss = 1;
 else
  VAR_15->dynamic_ss = 0;

 VAR_15->dynamic_pcie_gen2 = 1;

 if (VAR_15->gfx_clock_gating &&
     (VAR_12->pm.int_thermal_type != VAR_11))
  VAR_15->thermal_protection = 1;
 else
  VAR_15->thermal_protection = 0;

 VAR_15->display_gap = 1;

 return 0;
}
