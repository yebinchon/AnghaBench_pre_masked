
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
struct vega20_od8_settings {TYPE_1__* od8_settings_array; } ;
struct smu_table_context {scalar_t__ overdrive_table; } ;
struct smu_context {scalar_t__ od_settings; struct smu_table_context smu_table; } ;
typedef int int16_t ;
struct TYPE_4__ {void* MaxOpTemp; void* FanTargetTemperature; void* FanMinimumPwm; void* FanMaximumRpm; int OverDrivePct; void* UclkFmax; void* GfxclkVolt3; void* GfxclkFreq3; void* GfxclkVolt2; void* GfxclkFreq2; void* GfxclkVolt1; void* GfxclkFreq1; void* GfxclkFmax; void* GfxclkFmin; } ;
struct TYPE_3__ {int min_value; int max_value; } ;
typedef TYPE_2__ OverDriveTable_t ;


 int VAR_0 ;
__attribute__((used)) static int FUNC_0(struct smu_context *VAR_1,
          uint32_t VAR_2,
          uint32_t VAR_3)
{
 struct smu_table_context *VAR_4 = &VAR_1->smu_table;
 OverDriveTable_t *VAR_5 =
  (OverDriveTable_t *)(VAR_4->overdrive_table);
 struct vega20_od8_settings *VAR_6 =
  (struct vega20_od8_settings *)VAR_1->od_settings;

 switch (VAR_2) {
 case 137:
  VAR_5->GfxclkFmin = (uint16_t)VAR_3;
  break;

 case 138:
  if (VAR_3 < VAR_6->od8_settings_array[138].min_value ||
      VAR_3 > VAR_6->od8_settings_array[138].max_value)
   return -VAR_0;
  VAR_5->GfxclkFmax = (uint16_t)VAR_3;
  break;

 case 136:
  VAR_5->GfxclkFreq1 = (uint16_t)VAR_3;
  break;

 case 133:
  VAR_5->GfxclkVolt1 = (uint16_t)VAR_3;
  break;

 case 135:
  VAR_5->GfxclkFreq2 = (uint16_t)VAR_3;
  break;

 case 132:
  VAR_5->GfxclkVolt2 = (uint16_t)VAR_3;
  break;

 case 134:
  VAR_5->GfxclkFreq3 = (uint16_t)VAR_3;
  break;

 case 131:
  VAR_5->GfxclkVolt3 = (uint16_t)VAR_3;
  break;

 case 128:
  if (VAR_3 < VAR_6->od8_settings_array[128].min_value ||
      VAR_3 > VAR_6->od8_settings_array[128].max_value)
   return -VAR_0;
  VAR_5->UclkFmax = (uint16_t)VAR_3;
  break;

 case 129:
  VAR_5->OverDrivePct = (int16_t)VAR_3;
  break;

 case 141:
  VAR_5->FanMaximumRpm = (uint16_t)VAR_3;
  break;

 case 140:
  VAR_5->FanMinimumPwm = (uint16_t)VAR_3;
  break;

 case 139:
  VAR_5->FanTargetTemperature = (uint16_t)VAR_3;
  break;

 case 130:
  VAR_5->MaxOpTemp = (uint16_t)VAR_3;
  break;
 }

 return 0;
}
