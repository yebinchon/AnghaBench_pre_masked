
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
struct pp_hwmgr {scalar_t__ chip_id; struct amdgpu_device* adev; scalar_t__ pptable; } ;
struct phm_ppt_v1_voltage_lookup_table {int count; TYPE_2__* entries; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_voltage_lookup_table* vddc_lookup_table; struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_mclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {int count; TYPE_3__* entries; } ;
struct amdgpu_device {TYPE_1__* pdev; } ;
struct TYPE_6__ {size_t vddInd; } ;
struct TYPE_5__ {int us_vdd; } ;
struct TYPE_4__ {int revision; int subsystem_device; int subsystem_vendor; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pp_hwmgr *VAR_1)
{
 struct phm_ppt_v1_information *VAR_2 =
         (struct phm_ppt_v1_information *)(VAR_1->pptable);
 struct phm_ppt_v1_clock_voltage_dependency_table *VAR_3;
 struct phm_ppt_v1_voltage_lookup_table *VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6, VAR_7, VAR_8;
 struct amdgpu_device *VAR_9 = VAR_1->adev;

 if (VAR_2 != ((void*)0)) {
  VAR_3 = VAR_2->vdd_dep_on_mclk;
  VAR_4 = VAR_2->vddc_lookup_table;
 } else
  return 0;

 VAR_6 = VAR_9->pdev->revision;
 VAR_8 = VAR_9->pdev->subsystem_device;
 VAR_7 = VAR_9->pdev->subsystem_vendor;

 if (VAR_1->chip_id == VAR_0 && VAR_6 == 0xC7 &&
   ((VAR_8 == 0xb37 && VAR_7 == 0x1002) ||
      (VAR_8 == 0x4a8 && VAR_7 == 0x1043) ||
      (VAR_8 == 0x9480 && VAR_7 == 0x1682))) {
  if (VAR_4->entries[VAR_3->entries[VAR_3->count-1].vddInd].us_vdd >= 1000)
   return 0;

  for (VAR_5 = 0; VAR_5 < VAR_4->count; VAR_5++) {
   if (VAR_4->entries[VAR_5].us_vdd < 0xff01 && VAR_4->entries[VAR_5].us_vdd >= 1000) {
    VAR_3->entries[VAR_3->count-1].vddInd = (uint8_t) VAR_5;
    return 0;
   }
  }
 }
 return 0;
}
