
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
struct vega20_single_dpm_table {int count; TYPE_1__* dpm_levels; } ;
struct vega20_od8_settings {TYPE_3__* od8_settings_array; } ;
struct vega20_dpm_table {struct vega20_single_dpm_table mem_table; struct vega20_single_dpm_table dcef_table; struct vega20_single_dpm_table fclk_table; struct vega20_single_dpm_table soc_table; struct vega20_single_dpm_table gfx_table; } ;
struct smu_table_context {scalar_t__ driver_pptable; scalar_t__ overdrive_table; } ;
struct smu_dpm_context {struct vega20_dpm_table* dpm_context; } ;
struct smu_context {scalar_t__ od_settings; struct smu_dpm_context smu_dpm; struct smu_table_context smu_table; struct amdgpu_device* adev; } ;
struct pp_clock_levels_with_latency {int num_levels; TYPE_2__* data; } ;
struct amdgpu_device {int dummy; } ;
typedef enum smu_clk_type { ____Placeholder_smu_clk_type } smu_clk_type ;
struct TYPE_10__ {int GfxclkFmin; int GfxclkFmax; int UclkFmax; int GfxclkFreq1; int GfxclkVolt1; int GfxclkFreq2; int GfxclkVolt2; int GfxclkFreq3; int GfxclkVolt3; } ;
struct TYPE_9__ {int* PcieGenSpeed; int* PcieLaneCount; int* LclkFreq; } ;
struct TYPE_8__ {int min_value; int max_value; int feature_id; } ;
struct TYPE_7__ {int clocks_in_khz; } ;
struct TYPE_6__ {int value; } ;
typedef TYPE_4__ PPTable_t ;
typedef TYPE_5__ OverDriveTable_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;


 int const VAR_14 ;
 int const VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct smu_context*,int const,int*) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (struct smu_context*,struct pp_clock_levels_with_latency*,struct vega20_single_dpm_table*) ;

__attribute__((used)) static int FUNC_5(struct smu_context *VAR_19,
   enum smu_clk_type VAR_20, char *VAR_21)
{
 int VAR_22, VAR_23, VAR_24 = 0;
 int VAR_25 = 0;
 uint32_t VAR_26, VAR_27;
 struct amdgpu_device *VAR_28 = VAR_19->adev;
 struct pp_clock_levels_with_latency VAR_29;
 struct vega20_single_dpm_table *VAR_30;
 struct smu_table_context *VAR_31 = &VAR_19->smu_table;
 struct smu_dpm_context *VAR_32 = &VAR_19->smu_dpm;
 struct vega20_dpm_table *VAR_33 = ((void*)0);
 struct vega20_od8_settings *VAR_34 =
  (struct vega20_od8_settings *)VAR_19->od_settings;
 OverDriveTable_t *VAR_35 =
  (OverDriveTable_t *)(VAR_31->overdrive_table);
 PPTable_t *VAR_36 = (PPTable_t *)VAR_31->driver_pptable;

 VAR_33 = VAR_32->dpm_context;

 switch (VAR_20) {
 case 129:
  VAR_25 = FUNC_2(VAR_19, VAR_14, &VAR_23);
  if (VAR_25) {
   FUNC_1("Attempt to get current gfx clk Failed!");
   return VAR_25;
  }

  VAR_30 = &(VAR_33->gfx_table);
  VAR_25 = FUNC_4(VAR_19, &VAR_29, VAR_30);
  if (VAR_25) {
   FUNC_1("Attempt to get gfx clk levels Failed!");
   return VAR_25;
  }

  for (VAR_22 = 0; VAR_22 < VAR_29.num_levels; VAR_22++)
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "%d: %uMhz %s\n", VAR_22,
     VAR_29.data[VAR_22].clocks_in_khz / 1000,
     (VAR_29.data[VAR_22].clocks_in_khz == VAR_23 * 10)
     ? "*" : "");
  break;

 case 135:
  VAR_25 = FUNC_2(VAR_19, VAR_15, &VAR_23);
  if (VAR_25) {
   FUNC_1("Attempt to get current mclk Failed!");
   return VAR_25;
  }

  VAR_30 = &(VAR_33->mem_table);
  VAR_25 = FUNC_4(VAR_19, &VAR_29, VAR_30);
  if (VAR_25) {
   FUNC_1("Attempt to get memory clk levels Failed!");
   return VAR_25;
  }

  for (VAR_22 = 0; VAR_22 < VAR_29.num_levels; VAR_22++)
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "%d: %uMhz %s\n",
    VAR_22, VAR_29.data[VAR_22].clocks_in_khz / 1000,
    (VAR_29.data[VAR_22].clocks_in_khz == VAR_23 * 10)
    ? "*" : "");
  break;

 case 128:
  VAR_25 = FUNC_2(VAR_19, 128, &VAR_23);
  if (VAR_25) {
   FUNC_1("Attempt to get current socclk Failed!");
   return VAR_25;
  }

  VAR_30 = &(VAR_33->soc_table);
  VAR_25 = FUNC_4(VAR_19, &VAR_29, VAR_30);
  if (VAR_25) {
   FUNC_1("Attempt to get socclk levels Failed!");
   return VAR_25;
  }

  for (VAR_22 = 0; VAR_22 < VAR_29.num_levels; VAR_22++)
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "%d: %uMhz %s\n",
    VAR_22, VAR_29.data[VAR_22].clocks_in_khz / 1000,
    (VAR_29.data[VAR_22].clocks_in_khz == VAR_23 * 10)
    ? "*" : "");
  break;

 case 136:
  VAR_25 = FUNC_2(VAR_19, 136, &VAR_23);
  if (VAR_25) {
   FUNC_1("Attempt to get current fclk Failed!");
   return VAR_25;
  }

  VAR_30 = &(VAR_33->fclk_table);
  for (VAR_22 = 0; VAR_22 < VAR_30->count; VAR_22++)
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "%d: %uMhz %s\n",
    VAR_22, VAR_30->dpm_levels[VAR_22].value,
    (VAR_30->dpm_levels[VAR_22].value == VAR_23 / 100)
    ? "*" : "");
  break;

 case 137:
  VAR_25 = FUNC_2(VAR_19, 137, &VAR_23);
  if (VAR_25) {
   FUNC_1("Attempt to get current dcefclk Failed!");
   return VAR_25;
  }

  VAR_30 = &(VAR_33->dcef_table);
  VAR_25 = FUNC_4(VAR_19, &VAR_29, VAR_30);
  if (VAR_25) {
   FUNC_1("Attempt to get dcefclk levels Failed!");
   return VAR_25;
  }

  for (VAR_22 = 0; VAR_22 < VAR_29.num_levels; VAR_22++)
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "%d: %uMhz %s\n",
    VAR_22, VAR_29.data[VAR_22].clocks_in_khz / 1000,
    (VAR_29.data[VAR_22].clocks_in_khz == VAR_23 * 10) ? "*" : "");
  break;

 case 130:
  VAR_26 = (FUNC_0(VAR_18) &
        VAR_12)
   >> VAR_13;
  VAR_27 = (FUNC_0(VAR_17) &
         VAR_10)
   >> VAR_11;
  for (VAR_22 = 0; VAR_22 < VAR_0; VAR_22++)
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "%d: %s %s %dMhz %s\n", VAR_22,
     (VAR_36->PcieGenSpeed[VAR_22] == 0) ? "2.5GT/s," :
     (VAR_36->PcieGenSpeed[VAR_22] == 1) ? "5.0GT/s," :
     (VAR_36->PcieGenSpeed[VAR_22] == 2) ? "8.0GT/s," :
     (VAR_36->PcieGenSpeed[VAR_22] == 3) ? "16.0GT/s," : "",
     (VAR_36->PcieLaneCount[VAR_22] == 1) ? "x1" :
     (VAR_36->PcieLaneCount[VAR_22] == 2) ? "x2" :
     (VAR_36->PcieLaneCount[VAR_22] == 3) ? "x4" :
     (VAR_36->PcieLaneCount[VAR_22] == 4) ? "x8" :
     (VAR_36->PcieLaneCount[VAR_22] == 5) ? "x12" :
     (VAR_36->PcieLaneCount[VAR_22] == 6) ? "x16" : "",
     VAR_36->LclkFreq[VAR_22],
     (VAR_26 == VAR_36->PcieGenSpeed[VAR_22]) &&
     (VAR_27 == VAR_36->PcieLaneCount[VAR_22]) ?
     "*" : "");
  break;

 case 132:
  if (VAR_34->od8_settings_array[VAR_2].feature_id &&
      VAR_34->od8_settings_array[VAR_1].feature_id) {
   VAR_24 = FUNC_3(VAR_21, "%s:\n", "OD_SCLK");
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "0: %10uMhz\n",
     VAR_35->GfxclkFmin);
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "1: %10uMhz\n",
     VAR_35->GfxclkFmax);
  }

  break;

 case 134:
  if (VAR_34->od8_settings_array[VAR_9].feature_id) {
   VAR_24 = FUNC_3(VAR_21, "%s:\n", "OD_MCLK");
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "1: %10uMhz\n",
      VAR_35->UclkFmax);
  }

  break;

 case 131:
  if (VAR_34->od8_settings_array[VAR_3].feature_id &&
      VAR_34->od8_settings_array[VAR_4].feature_id &&
      VAR_34->od8_settings_array[VAR_5].feature_id &&
      VAR_34->od8_settings_array[VAR_6].feature_id &&
      VAR_34->od8_settings_array[VAR_7].feature_id &&
      VAR_34->od8_settings_array[VAR_8].feature_id) {
   VAR_24 = FUNC_3(VAR_21, "%s:\n", "OD_VDDC_CURVE");
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "0: %10uMhz %10dmV\n",
     VAR_35->GfxclkFreq1,
     VAR_35->GfxclkVolt1 / VAR_16);
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "1: %10uMhz %10dmV\n",
     VAR_35->GfxclkFreq2,
     VAR_35->GfxclkVolt2 / VAR_16);
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "2: %10uMhz %10dmV\n",
     VAR_35->GfxclkFreq3,
     VAR_35->GfxclkVolt3 / VAR_16);
  }

  break;

 case 133:
  VAR_24 = FUNC_3(VAR_21, "%s:\n", "OD_RANGE");

  if (VAR_34->od8_settings_array[VAR_2].feature_id &&
      VAR_34->od8_settings_array[VAR_1].feature_id) {
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "SCLK: %7uMhz %10uMhz\n",
     VAR_34->od8_settings_array[VAR_2].min_value,
     VAR_34->od8_settings_array[VAR_1].max_value);
  }

  if (VAR_34->od8_settings_array[VAR_9].feature_id) {
   VAR_30 = &(VAR_33->mem_table);
   VAR_25 = FUNC_4(VAR_19, &VAR_29, VAR_30);
   if (VAR_25) {
    FUNC_1("Attempt to get memory clk levels Failed!");
    return VAR_25;
   }

   VAR_24 += FUNC_3(VAR_21 + VAR_24, "MCLK: %7uMhz %10uMhz\n",
     VAR_29.data[0].clocks_in_khz / 1000,
     VAR_34->od8_settings_array[VAR_9].max_value);
  }

  if (VAR_34->od8_settings_array[VAR_3].feature_id &&
      VAR_34->od8_settings_array[VAR_4].feature_id &&
      VAR_34->od8_settings_array[VAR_5].feature_id &&
      VAR_34->od8_settings_array[VAR_6].feature_id &&
      VAR_34->od8_settings_array[VAR_7].feature_id &&
      VAR_34->od8_settings_array[VAR_8].feature_id) {
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "VDDC_CURVE_SCLK[0]: %7uMhz %10uMhz\n",
     VAR_34->od8_settings_array[VAR_3].min_value,
     VAR_34->od8_settings_array[VAR_3].max_value);
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "VDDC_CURVE_VOLT[0]: %7dmV %11dmV\n",
     VAR_34->od8_settings_array[VAR_6].min_value,
     VAR_34->od8_settings_array[VAR_6].max_value);
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "VDDC_CURVE_SCLK[1]: %7uMhz %10uMhz\n",
     VAR_34->od8_settings_array[VAR_4].min_value,
     VAR_34->od8_settings_array[VAR_4].max_value);
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "VDDC_CURVE_VOLT[1]: %7dmV %11dmV\n",
     VAR_34->od8_settings_array[VAR_7].min_value,
     VAR_34->od8_settings_array[VAR_7].max_value);
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "VDDC_CURVE_SCLK[2]: %7uMhz %10uMhz\n",
     VAR_34->od8_settings_array[VAR_5].min_value,
     VAR_34->od8_settings_array[VAR_5].max_value);
   VAR_24 += FUNC_3(VAR_21 + VAR_24, "VDDC_CURVE_VOLT[2]: %7dmV %11dmV\n",
     VAR_34->od8_settings_array[VAR_8].min_value,
     VAR_34->od8_settings_array[VAR_8].max_value);
  }

  break;

 default:
  break;
 }
 return VAR_24;
}
