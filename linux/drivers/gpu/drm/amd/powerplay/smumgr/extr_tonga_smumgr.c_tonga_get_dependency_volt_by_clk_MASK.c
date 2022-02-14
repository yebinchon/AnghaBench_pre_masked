
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct smu7_hwmgr {int vddci_voltage_table; } ;
struct pp_hwmgr {scalar_t__ pptable; scalar_t__ backend; } ;
struct phm_ppt_v1_information {int vddc_lookup_table; int vddgfx_lookup_table; } ;
struct TYPE_7__ {scalar_t__ count; TYPE_1__* entries; } ;
typedef TYPE_2__ phm_ppt_v1_clock_voltage_dependency_table ;
struct TYPE_8__ {int Phases; void* Vddci; void* Vddc; void* VddGfx; } ;
struct TYPE_6__ {size_t clk; scalar_t__ mvdd; scalar_t__ vddci; scalar_t__ vddc; scalar_t__ vddgfx; } ;
typedef TYPE_3__ SMU_VoltageLevel ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int *,scalar_t__) ;
 void* FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
 phm_ppt_v1_clock_voltage_dependency_table *VAR_3,
 uint32_t VAR_4, SMU_VoltageLevel *VAR_5, uint32_t *VAR_6)
{
 uint32_t VAR_7 = 0;
 struct smu7_hwmgr *VAR_8 = (struct smu7_hwmgr *)(VAR_2->backend);
 struct phm_ppt_v1_information *VAR_9 =
      (struct phm_ppt_v1_information *)(VAR_2->pptable);


 if (VAR_3->count == 0)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_3->count; VAR_7++) {

  if (VAR_3->entries[VAR_7].clk >= VAR_4) {
   VAR_5->VddGfx = FUNC_1(
     VAR_9->vddgfx_lookup_table,
    VAR_3->entries[VAR_7].vddgfx);
   VAR_5->Vddc = FUNC_1(
      VAR_9->vddc_lookup_table,
      VAR_3->entries[VAR_7].vddc);

   if (VAR_3->entries[VAR_7].vddci)
    VAR_5->Vddci =
     FUNC_0(&VAR_8->vddci_voltage_table, VAR_3->entries[VAR_7].vddci);
   else
    VAR_5->Vddci =
     FUNC_0(&VAR_8->vddci_voltage_table,
      VAR_3->entries[VAR_7].vddc - VAR_1);


   if (VAR_3->entries[VAR_7].mvdd)
    *VAR_6 = (uint32_t) VAR_3->entries[VAR_7].mvdd;

   VAR_5->Phases = 1;
   return 0;
  }
 }


 VAR_5->VddGfx = FUNC_1(VAR_9->vddgfx_lookup_table,
  VAR_3->entries[VAR_7-1].vddgfx);
 VAR_5->Vddc = FUNC_1(VAR_9->vddc_lookup_table,
  VAR_3->entries[VAR_7-1].vddc);

 if (VAR_3->entries[VAR_7-1].vddci)
  VAR_5->Vddci = FUNC_0(&VAR_8->vddci_voltage_table,
   VAR_3->entries[VAR_7-1].vddci);

 if (VAR_3->entries[VAR_7-1].mvdd)
  *VAR_6 = (uint32_t) VAR_3->entries[VAR_7-1].mvdd;

 return 0;
}
