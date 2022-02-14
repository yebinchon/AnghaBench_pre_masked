
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu_table_context {int TDPODLimit; int thermal_controller_type; int driver_pptable; TYPE_2__* power_play_table; } ;
struct smu_context {struct smu_table_context smu_table; } ;
struct TYPE_3__ {int * ODSettingsMax; } ;
struct TYPE_4__ {TYPE_1__ OverDrive8Table; int ucThermalControllerType; int smcPPTable; } ;
typedef int PPTable_t ;
typedef TYPE_2__ ATOM_Vega20_POWERPLAYTABLE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_2)
{
 ATOM_Vega20_POWERPLAYTABLE *VAR_3 = ((void*)0);
 struct smu_table_context *VAR_4 = &VAR_2->smu_table;

 if (!VAR_4->power_play_table)
  return -VAR_1;

 VAR_3 = VAR_4->power_play_table;

 FUNC_1(VAR_4->driver_pptable, &VAR_3->smcPPTable,
        sizeof(PPTable_t));

 VAR_4->thermal_controller_type = VAR_3->ucThermalControllerType;
 VAR_4->TDPODLimit = FUNC_0(VAR_3->OverDrive8Table.ODSettingsMax[VAR_0]);

 return 0;
}
