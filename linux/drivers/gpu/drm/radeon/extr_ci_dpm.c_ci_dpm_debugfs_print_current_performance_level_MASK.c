
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;
struct radeon_ps {scalar_t__ vce_active; } ;
struct radeon_device {int dummy; } ;
struct ci_power_info {scalar_t__ uvd_enabled; struct radeon_ps current_rps; } ;


 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (struct radeon_device*) ;
 struct ci_power_info* FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct seq_file*,char*,char*,...) ;

void FUNC_4(struct radeon_device *VAR_0,
          struct seq_file *VAR_1)
{
 struct ci_power_info *VAR_2 = FUNC_2(VAR_0);
 struct radeon_ps *VAR_3 = &VAR_2->current_rps;
 u32 VAR_4 = FUNC_1(VAR_0);
 u32 VAR_5 = FUNC_0(VAR_0);

 FUNC_3(VAR_1, "uvd    %sabled\n", VAR_2->uvd_enabled ? "en" : "dis");
 FUNC_3(VAR_1, "vce    %sabled\n", VAR_3->vce_active ? "en" : "dis");
 FUNC_3(VAR_1, "power level avg    sclk: %u mclk: %u\n",
     VAR_4, VAR_5);
}
