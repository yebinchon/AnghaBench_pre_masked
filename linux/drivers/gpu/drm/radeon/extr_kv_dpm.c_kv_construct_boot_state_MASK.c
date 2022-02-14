
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_device {int dummy; } ;
struct TYPE_4__ {int allow_gnb_slow; scalar_t__ vce_wm; scalar_t__ display_wm; scalar_t__ force_nbp_state; scalar_t__ ss_divider_index; scalar_t__ ds_divider_index; int vddc_index; int sclk; } ;
struct TYPE_3__ {int bootup_nb_voltage_index; int bootup_sclk; } ;
struct kv_power_info {TYPE_2__ boot_pl; TYPE_1__ sys_info; } ;


 struct kv_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static void FUNC_1(struct radeon_device *VAR_0)
{
 struct kv_power_info *VAR_1 = FUNC_0(VAR_0);

 VAR_1->boot_pl.sclk = VAR_1->sys_info.bootup_sclk;
 VAR_1->boot_pl.vddc_index = VAR_1->sys_info.bootup_nb_voltage_index;
 VAR_1->boot_pl.ds_divider_index = 0;
 VAR_1->boot_pl.ss_divider_index = 0;
 VAR_1->boot_pl.allow_gnb_slow = 1;
 VAR_1->boot_pl.force_nbp_state = 0;
 VAR_1->boot_pl.display_wm = 0;
 VAR_1->boot_pl.vce_wm = 0;
}
