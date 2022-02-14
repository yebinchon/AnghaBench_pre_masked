
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_5__ {int platform_caps; } ;
struct TYPE_6__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;
struct TYPE_8__ {size_t count; scalar_t__* leakage_id; scalar_t__* actual_voltage; } ;
struct TYPE_7__ {size_t count; scalar_t__* leakage_id; scalar_t__* actual_voltage; } ;
struct ci_power_info {TYPE_4__ vddci_leakage; TYPE_3__ vddc_leakage; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct radeon_device*,scalar_t__*,scalar_t__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct radeon_device*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_3)
{
 struct ci_power_info *VAR_4 = FUNC_0(VAR_3);
 u16 VAR_5, VAR_6;
 u16 VAR_7, VAR_8;
 int VAR_9;

 VAR_4->vddc_leakage.count = 0;
 VAR_4->vddci_leakage.count = 0;

 if (VAR_3->pm.dpm.platform_caps & VAR_0) {
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
   VAR_6 = VAR_1 + VAR_9;
   if (FUNC_3(VAR_3, VAR_6, &VAR_7) != 0)
    continue;
   if (VAR_7 != 0 && VAR_7 != VAR_6) {
    VAR_4->vddc_leakage.actual_voltage[VAR_4->vddc_leakage.count] = VAR_7;
    VAR_4->vddc_leakage.leakage_id[VAR_4->vddc_leakage.count] = VAR_6;
    VAR_4->vddc_leakage.count++;
   }
  }
 } else if (FUNC_1(VAR_3, &VAR_5) == 0) {
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
   VAR_6 = VAR_1 + VAR_9;
   if (FUNC_2(VAR_3, &VAR_7, &VAR_8,
           VAR_6,
           VAR_5) == 0) {
    if (VAR_7 != 0 && VAR_7 != VAR_6) {
     VAR_4->vddc_leakage.actual_voltage[VAR_4->vddc_leakage.count] = VAR_7;
     VAR_4->vddc_leakage.leakage_id[VAR_4->vddc_leakage.count] = VAR_6;
     VAR_4->vddc_leakage.count++;
    }
    if (VAR_8 != 0 && VAR_8 != VAR_6) {
     VAR_4->vddci_leakage.actual_voltage[VAR_4->vddci_leakage.count] = VAR_8;
     VAR_4->vddci_leakage.leakage_id[VAR_4->vddci_leakage.count] = VAR_6;
     VAR_4->vddci_leakage.count++;
    }
   }
  }
 }
}
