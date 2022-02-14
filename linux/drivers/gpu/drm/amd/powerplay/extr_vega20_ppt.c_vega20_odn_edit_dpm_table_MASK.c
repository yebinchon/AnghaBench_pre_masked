
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct vega20_single_dpm_table {int count; TYPE_2__* dpm_levels; } ;
struct vega20_od8_settings {int od_gfxclk_update; TYPE_4__* od8_settings_array; } ;
struct vega20_dpm_table {struct vega20_single_dpm_table gfx_table; struct vega20_single_dpm_table mem_table; } ;
struct TYPE_8__ {int gfxclk; } ;
struct smu_table_context {TYPE_3__ boot_values; scalar_t__ overdrive_table; } ;
struct smu_dpm_context {int dpm_level; struct vega20_dpm_table* dpm_context; } ;
struct smu_context {int mutex; struct smu_table_context smu_table; scalar_t__ od_settings; struct smu_dpm_context smu_dpm; } ;
struct pp_clock_levels_with_latency {TYPE_1__* data; } ;
typedef int int32_t ;
typedef enum PP_OD_DPM_TABLE_COMMAND { ____Placeholder_PP_OD_DPM_TABLE_COMMAND } PP_OD_DPM_TABLE_COMMAND ;
struct TYPE_10__ {int GfxclkFmin; int GfxclkFmax; int UclkFmax; int GfxclkFreq1; int GfxclkVolt1; int GfxclkFreq2; int GfxclkVolt2; int GfxclkFreq3; int GfxclkVolt3; } ;
struct TYPE_9__ {int min_value; int max_value; int feature_id; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int clocks_in_khz; } ;
typedef TYPE_5__ OverDriveTable_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;





 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct smu_context*,int ) ;
 int FUNC_6 (struct smu_context*,int ,int ) ;
 int FUNC_7 (struct smu_context*,int ,int ,scalar_t__,int) ;
 int FUNC_8 (struct smu_context*,struct pp_clock_levels_with_latency*,struct vega20_single_dpm_table*) ;
 int FUNC_9 (struct smu_context*,struct vega20_single_dpm_table*,int ) ;

__attribute__((used)) static int FUNC_10(struct smu_context *VAR_16,
         enum PP_OD_DPM_TABLE_COMMAND VAR_17,
         long *VAR_18, uint32_t VAR_19)
{
 struct smu_table_context *VAR_20 = &VAR_16->smu_table;
 OverDriveTable_t *VAR_21 =
  (OverDriveTable_t *)(VAR_20->overdrive_table);
 struct smu_dpm_context *VAR_22 = &VAR_16->smu_dpm;
 struct vega20_dpm_table *VAR_23 = ((void*)0);
 struct vega20_single_dpm_table *VAR_24;
 struct vega20_od8_settings *VAR_25 =
  (struct vega20_od8_settings *)VAR_16->od_settings;
 struct pp_clock_levels_with_latency VAR_26;
 int32_t VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31;
 int VAR_32 = 0;

 VAR_23 = VAR_22->dpm_context;

 if (!VAR_18) {
  FUNC_4("NULL user input for clock and voltage\n");
  return -VAR_1;
 }

 switch (VAR_17) {
 case 130:
  if (!(VAR_25->od8_settings_array[VAR_4].feature_id &&
        VAR_25->od8_settings_array[VAR_3].feature_id)) {
   FUNC_3("Sclk min/max frequency overdrive not supported\n");
   return -VAR_2;
  }

  for (VAR_30 = 0; VAR_30 < VAR_19; VAR_30 += 2) {
   if (VAR_30 + 2 > VAR_19) {
    FUNC_3("invalid number of input parameters %d\n", VAR_19);
    return -VAR_1;
   }

   VAR_27 = VAR_18[VAR_30];
   VAR_28 = VAR_18[VAR_30 + 1];

   if (VAR_27 != 0 && VAR_27 != 1) {
    FUNC_3("Invalid index %d\n", VAR_27);
    FUNC_3("Support min/max sclk frequency settingonly which index by 0/1\n");
    return -VAR_1;
   }

   if (VAR_28 < VAR_25->od8_settings_array[VAR_4].min_value ||
       VAR_28 > VAR_25->od8_settings_array[VAR_3].max_value) {
    FUNC_3("clock freq %d is not within allowed range [%d - %d]\n",
     VAR_28,
     VAR_25->od8_settings_array[VAR_4].min_value,
     VAR_25->od8_settings_array[VAR_3].max_value);
    return -VAR_1;
   }

   if (VAR_27 == 0 && VAR_21->GfxclkFmin != VAR_28) {
    VAR_21->GfxclkFmin = VAR_28;
    VAR_25->od_gfxclk_update = 1;
   } else if (VAR_27 == 1 && VAR_21->GfxclkFmax != VAR_28) {
    VAR_21->GfxclkFmax = VAR_28;
    VAR_25->od_gfxclk_update = 1;
   }
  }

  break;

 case 131:
  if (!VAR_25->od8_settings_array[VAR_11].feature_id) {
   FUNC_3("Mclk max frequency overdrive not supported\n");
   return -VAR_2;
  }

  VAR_24 = &(VAR_23->mem_table);
  VAR_32 = FUNC_8(VAR_16, &VAR_26, VAR_24);
  if (VAR_32) {
   FUNC_2("Attempt to get memory clk levels Failed!");
   return VAR_32;
  }

  for (VAR_30 = 0; VAR_30 < VAR_19; VAR_30 += 2) {
   if (VAR_30 + 2 > VAR_19) {
    FUNC_3("invalid number of input parameters %d\n",
      VAR_19);
    return -VAR_1;
   }

   VAR_27 = VAR_18[VAR_30];
   VAR_28 = VAR_18[VAR_30 + 1];

   if (VAR_27 != 1) {
    FUNC_3("Invalid index %d\n", VAR_27);
    FUNC_3("Support max Mclk frequency setting only which index by 1\n");
    return -VAR_1;
   }

   if (VAR_28 < VAR_26.data[0].clocks_in_khz / 1000 ||
       VAR_28 > VAR_25->od8_settings_array[VAR_11].max_value) {
    FUNC_3("clock freq %d is not within allowed range [%d - %d]\n",
     VAR_28,
     VAR_26.data[0].clocks_in_khz / 1000,
     VAR_25->od8_settings_array[VAR_11].max_value);
    return -VAR_1;
   }

   if (VAR_27 == 1 && VAR_21->UclkFmax != VAR_28) {
    VAR_25->od_gfxclk_update = 1;
    VAR_21->UclkFmax = VAR_28;
   }
  }

  break;

 case 129:
  if (!(VAR_25->od8_settings_array[VAR_5].feature_id &&
        VAR_25->od8_settings_array[VAR_6].feature_id &&
        VAR_25->od8_settings_array[VAR_7].feature_id &&
        VAR_25->od8_settings_array[VAR_8].feature_id &&
        VAR_25->od8_settings_array[VAR_9].feature_id &&
        VAR_25->od8_settings_array[VAR_10].feature_id)) {
   FUNC_3("Voltage curve calibrate not supported\n");
   return -VAR_2;
  }

  for (VAR_30 = 0; VAR_30 < VAR_19; VAR_30 += 3) {
   if (VAR_30 + 3 > VAR_19) {
    FUNC_3("invalid number of input parameters %d\n",
     VAR_19);
    return -VAR_1;
   }

   VAR_27 = VAR_18[VAR_30];
   VAR_28 = VAR_18[VAR_30 + 1];
   VAR_29 = VAR_18[VAR_30 + 2];

   if (VAR_27 > 2) {
    FUNC_3("Setting for point %d is not supported\n",
     VAR_27 + 1);
    FUNC_3("Three supported points index by 0, 1, 2\n");
    return -VAR_1;
   }

   VAR_31 = VAR_5 + 2 * VAR_27;
   if (VAR_28 < VAR_25->od8_settings_array[VAR_31].min_value ||
       VAR_28 > VAR_25->od8_settings_array[VAR_31].max_value) {
    FUNC_3("clock freq %d is not within allowed range [%d - %d]\n",
     VAR_28,
     VAR_25->od8_settings_array[VAR_31].min_value,
     VAR_25->od8_settings_array[VAR_31].max_value);
    return -VAR_1;
   }

   VAR_31 = VAR_8 + 2 * VAR_27;
   if (VAR_29 < VAR_25->od8_settings_array[VAR_31].min_value ||
       VAR_29 > VAR_25->od8_settings_array[VAR_31].max_value) {
    FUNC_3("clock voltage %d is not within allowed range [%d- %d]\n",
     VAR_29,
     VAR_25->od8_settings_array[VAR_31].min_value,
     VAR_25->od8_settings_array[VAR_31].max_value);
    return -VAR_1;
   }

   switch (VAR_27) {
   case 0:
    VAR_21->GfxclkFreq1 = VAR_28;
    VAR_21->GfxclkVolt1 = VAR_29 * VAR_15;
    break;
   case 1:
    VAR_21->GfxclkFreq2 = VAR_28;
    VAR_21->GfxclkVolt2 = VAR_29 * VAR_15;
    break;
   case 2:
    VAR_21->GfxclkFreq3 = VAR_28;
    VAR_21->GfxclkVolt3 = VAR_29 * VAR_15;
    break;
   }
  }

  break;

 case 128:
  VAR_32 = FUNC_7(VAR_16, VAR_14, 0, VAR_20->overdrive_table, 0);
  if (VAR_32) {
   FUNC_2("Failed to export over drive table!\n");
   return VAR_32;
  }

  break;

 case 132:
  VAR_32 = FUNC_7(VAR_16, VAR_14, 0, VAR_20->overdrive_table, 1);
  if (VAR_32) {
   FUNC_2("Failed to import over drive table!\n");
   return VAR_32;
  }


  if (VAR_25->od_gfxclk_update) {
   VAR_25->od_gfxclk_update = 0;
   VAR_24 = &(VAR_23->gfx_table);

   if (FUNC_5(VAR_16, VAR_13)) {
    VAR_32 = FUNC_9(VAR_16, VAR_24,
          VAR_12);
    if (VAR_32) {
     FUNC_2("[Setoverdrive] failed to refresh dpm table!\n");
     return VAR_32;
    }
   } else {
    VAR_24->count = 1;
    VAR_24->dpm_levels[0].value = VAR_16->smu_table.boot_values.gfxclk / 100;
   }
  }

  break;

 default:
  return -VAR_1;
 }

 if (VAR_17 == 132) {
  FUNC_0(&(VAR_16->mutex));
  VAR_32 = FUNC_6(VAR_16, VAR_22->dpm_level,
          VAR_0);
  FUNC_1(&(VAR_16->mutex));
 }

 return VAR_32;
}
