
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vega20_od8_settings {int * od_settings_max; int * od_feature_capabilities; void* od_settings_min; } ;
struct smu_table_context {TYPE_2__* power_play_table; } ;
struct smu_context {scalar_t__ od_settings; struct smu_table_context smu_table; } ;
struct TYPE_3__ {int ucODTableRevision; int ODSettingsMin; int ODSettingsMax; int ODSettingCount; int ODFeatureCapabilities; int ODFeatureCount; } ;
struct TYPE_4__ {TYPE_1__ OverDrive8Table; } ;
typedef TYPE_2__ ATOM_Vega20_POWERPLAYTABLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_5)
{
 ATOM_Vega20_POWERPLAYTABLE *VAR_6 = ((void*)0);
 struct smu_table_context *VAR_7 = &VAR_5->smu_table;
 struct vega20_od8_settings *VAR_8 = (struct vega20_od8_settings *)VAR_5->od_settings;

 uint32_t VAR_9, VAR_10,
   VAR_11, VAR_12;

 if (!VAR_7->power_play_table)
  return -VAR_2;

 VAR_6 = VAR_7->power_play_table;

 if (VAR_6->OverDrive8Table.ucODTableRevision == 1) {


  VAR_9 =
   (FUNC_2(VAR_6->OverDrive8Table.ODFeatureCount) >
    VAR_0) ?
   VAR_0 :
   FUNC_2(VAR_6->OverDrive8Table.ODFeatureCount);

  VAR_10 = sizeof(uint8_t) * VAR_9;

  if (VAR_8->od_feature_capabilities)
   return -VAR_2;

  VAR_8->od_feature_capabilities = FUNC_1(&VAR_6->OverDrive8Table.ODFeatureCapabilities,
         VAR_10,
         VAR_4);
  if (!VAR_8->od_feature_capabilities)
   return -VAR_3;



  VAR_11 =
   (FUNC_2(VAR_6->OverDrive8Table.ODSettingCount) >
    VAR_1) ?
   VAR_1 :
   FUNC_2(VAR_6->OverDrive8Table.ODSettingCount);

  VAR_12 = sizeof(uint32_t) * VAR_11;

  if (VAR_8->od_settings_max)
   return -VAR_2;

  VAR_8->od_settings_max = FUNC_1(&VAR_6->OverDrive8Table.ODSettingsMax,
        VAR_12,
        VAR_4);

  if (!VAR_8->od_settings_max) {
   FUNC_0(VAR_8->od_feature_capabilities);
   VAR_8->od_feature_capabilities = ((void*)0);
   return -VAR_3;
  }

  if (VAR_8->od_settings_min)
   return -VAR_2;

  VAR_8->od_settings_min = FUNC_1(&VAR_6->OverDrive8Table.ODSettingsMin,
        VAR_12,
        VAR_4);

  if (!VAR_8->od_settings_min) {
   FUNC_0(VAR_8->od_feature_capabilities);
   VAR_8->od_feature_capabilities = ((void*)0);
   FUNC_0(VAR_8->od_settings_max);
   VAR_8->od_settings_max = ((void*)0);
   return -VAR_3;
  }
 }

 return 0;
}
