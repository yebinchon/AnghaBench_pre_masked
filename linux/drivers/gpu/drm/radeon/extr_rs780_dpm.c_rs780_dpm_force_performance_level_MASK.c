
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_ps {int dummy; } ;
struct TYPE_3__ {int forced_level; struct radeon_ps* current_ps; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct igp_ps {scalar_t__ sclk_high; scalar_t__ sclk_low; } ;
struct igp_power_info {scalar_t__ voltage_control; int max_voltage; int min_voltage; } ;
struct atom_clock_dividers {int fb_div; } ;
typedef enum radeon_dpm_forced_level { ____Placeholder_radeon_dpm_forced_level } radeon_dpm_forced_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct radeon_device*,int ,scalar_t__,int,struct atom_clock_dividers*) ;
 int FUNC_2 (struct radeon_device*,int) ;
 int FUNC_3 (struct radeon_device*,struct radeon_ps*) ;
 int FUNC_4 (struct radeon_device*,int ) ;
 int FUNC_5 (struct radeon_device*,int ) ;
 struct igp_power_info* FUNC_6 (struct radeon_device*) ;
 struct igp_ps* FUNC_7 (struct radeon_ps*) ;
 int FUNC_8 (struct radeon_device*,int) ;

int FUNC_9(struct radeon_device *VAR_5,
          enum radeon_dpm_forced_level VAR_6)
{
 struct igp_power_info *VAR_7 = FUNC_6(VAR_5);
 struct radeon_ps *VAR_8 = VAR_5->pm.dpm.current_ps;
 struct igp_ps *VAR_9 = FUNC_7(VAR_8);
 struct atom_clock_dividers VAR_10;
 int VAR_11;

 FUNC_2(VAR_5, 0);
 FUNC_8(VAR_5, 0);

 if (VAR_6 == VAR_3) {
  if (VAR_7->voltage_control)
   FUNC_5(VAR_5, VAR_7->max_voltage);

  VAR_11 = FUNC_1(VAR_5, VAR_0,
           VAR_9->sclk_high, 0, &VAR_10);
  if (VAR_11)
   return VAR_11;

  FUNC_4(VAR_5, VAR_10.fb_div);
 } else if (VAR_6 == VAR_4) {
  VAR_11 = FUNC_1(VAR_5, VAR_0,
           VAR_9->sclk_low, 0, &VAR_10);
  if (VAR_11)
   return VAR_11;

  FUNC_4(VAR_5, VAR_10.fb_div);

  if (VAR_7->voltage_control)
   FUNC_5(VAR_5, VAR_7->min_voltage);
 } else {
  if (VAR_7->voltage_control)
   FUNC_5(VAR_5, VAR_7->max_voltage);

  if (VAR_9->sclk_high != VAR_9->sclk_low) {
   FUNC_0(VAR_2, 0, ~VAR_1);
   FUNC_2(VAR_5, 1);
  }

  if (VAR_7->voltage_control) {
   FUNC_8(VAR_5, 1);
   FUNC_3(VAR_5, VAR_8);
  }
 }

 VAR_5->pm.dpm.forced_level = VAR_6;

 return 0;
}
