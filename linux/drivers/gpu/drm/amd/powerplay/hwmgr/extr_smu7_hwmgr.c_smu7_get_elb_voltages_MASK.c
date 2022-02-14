
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {size_t count; scalar_t__* leakage_id; scalar_t__* actual_voltage; } ;
struct TYPE_3__ {size_t count; scalar_t__* leakage_id; scalar_t__* actual_voltage; } ;
struct smu7_hwmgr {TYPE_2__ vddci_leakage; TYPE_1__ vddc_leakage; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pp_hwmgr*,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*,scalar_t__*,scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2)
{
 uint16_t VAR_3, VAR_4, VAR_5, VAR_6;
 struct smu7_hwmgr *VAR_7 = (struct smu7_hwmgr *)(VAR_2->backend);
 int VAR_8;

 if (FUNC_0(VAR_2, &VAR_6) == 0) {
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   VAR_3 = VAR_0 + VAR_8;
   if (FUNC_1(VAR_2, &VAR_4, &VAR_5,
        VAR_3,
        VAR_6) == 0) {
    if (VAR_4 != 0 && VAR_4 != VAR_3) {
     VAR_7->vddc_leakage.actual_voltage[VAR_7->vddc_leakage.count] = VAR_4;
     VAR_7->vddc_leakage.leakage_id[VAR_7->vddc_leakage.count] = VAR_3;
     VAR_7->vddc_leakage.count++;
    }
    if (VAR_5 != 0 && VAR_5 != VAR_3) {
     VAR_7->vddci_leakage.actual_voltage[VAR_7->vddci_leakage.count] = VAR_5;
     VAR_7->vddci_leakage.leakage_id[VAR_7->vddci_leakage.count] = VAR_3;
     VAR_7->vddci_leakage.count++;
    }
   }
  }
 }
 return 0;
}
