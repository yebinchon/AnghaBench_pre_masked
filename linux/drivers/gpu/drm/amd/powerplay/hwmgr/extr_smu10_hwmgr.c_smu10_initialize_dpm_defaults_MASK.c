
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smu10_hwmgr {int dce_slow_sclk_threshold; int is_nb_dpm_enabled; int dpm_flags; int need_min_deep_sleep_dcefclk; scalar_t__ deep_sleep_dcefclk; scalar_t__ num_active_display; scalar_t__ thermal_auto_throttling_treshold; } ;
struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_3)
{
 struct smu10_hwmgr *VAR_4 = (struct smu10_hwmgr *)(VAR_3->backend);

 VAR_4->dce_slow_sclk_threshold = 30000;
 VAR_4->thermal_auto_throttling_treshold = 0;
 VAR_4->is_nb_dpm_enabled = 1;
 VAR_4->dpm_flags = 1;
 VAR_4->need_min_deep_sleep_dcefclk = 1;
 VAR_4->num_active_display = 0;
 VAR_4->deep_sleep_dcefclk = 0;

 FUNC_1(VAR_3->platform_descriptor.platformCaps,
     VAR_1);

 FUNC_1(VAR_3->platform_descriptor.platformCaps,
    VAR_2);

 FUNC_0(VAR_3->platform_descriptor.platformCaps,
    VAR_0);
 return 0;
}
