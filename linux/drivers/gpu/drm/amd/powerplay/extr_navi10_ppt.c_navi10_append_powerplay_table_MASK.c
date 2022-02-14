
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct smu_table_context {TYPE_2__* driver_pptable; } ;
struct smu_context {struct smu_table_context smu_table; struct amdgpu_device* adev; } ;
struct atom_smc_dpm_info_v4_5 {int MvddRatio; int BoardPadding; int TotalBoardPower; int SocclkSpreadFreq; int SocclkSpreadPercent; int SoclkSpreadEnabled; int UclkSpreadFreq; int UclkSpreadPercent; int UclkSpreadEnabled; int DfllGfxclkSpreadFreq; int DfllGfxclkSpreadPercent; int DfllGfxclkSpreadEnabled; int PllGfxclkSpreadFreq; int PllGfxclkSpreadPercent; int PllGfxclkSpreadEnabled; int padding8_4; int LedPin2; int LedPin1; int LedPin0; int GthrPolarity; int GthrGpio; int VR1HotPolarity; int VR1HotGpio; int VR0HotPolarity; int VR0HotGpio; int AcDcPolarity; int AcDcGpio; int Padding_TelemetryMem1; int Mem1Offset; int Mem1MaxCurrent; int Padding_TelemetryMem0; int Mem0Offset; int Mem0MaxCurrent; int Padding_TelemetrySoc; int SocOffset; int SocMaxCurrent; int Padding_TelemetryGfx; int GfxOffset; int GfxMaxCurrent; int Padding8_V; int ExternalSensorPresent; int SocUlvPhaseSheddingMask; int GfxUlvPhaseSheddingMask; int VddMem1VrMapping; int VddMem0VrMapping; int VddSocVrMapping; int VddGfxVrMapping; int MaxVoltageStepSoc; int MaxVoltageStepGfx; int I2cControllers; } ;
struct TYPE_3__ {int pp_feature; } ;
struct amdgpu_device {TYPE_1__ pm; } ;
struct TYPE_4__ {int DebugOverrides; int MvddRatio; int BoardPadding; int TotalBoardPower; int SocclkSpreadFreq; int SocclkSpreadPercent; int SoclkSpreadEnabled; int UclkSpreadFreq; int UclkSpreadPercent; int UclkSpreadEnabled; int DfllGfxclkSpreadFreq; int DfllGfxclkSpreadPercent; int DfllGfxclkSpreadEnabled; int PllGfxclkSpreadFreq; int PllGfxclkSpreadPercent; int PllGfxclkSpreadEnabled; int padding8_4; int LedPin2; int LedPin1; int LedPin0; int GthrPolarity; int GthrGpio; int VR1HotPolarity; int VR1HotGpio; int VR0HotPolarity; int VR0HotGpio; int AcDcPolarity; int AcDcGpio; int Padding_TelemetryMem1; int Mem1Offset; int Mem1MaxCurrent; int Padding_TelemetryMem0; int Mem0Offset; int Mem0MaxCurrent; int Padding_TelemetrySoc; int SocOffset; int SocMaxCurrent; int Padding_TelemetryGfx; int GfxOffset; int GfxMaxCurrent; int Padding8_V; int ExternalSensorPresent; int SocUlvPhaseSheddingMask; int GfxUlvPhaseSheddingMask; int VddMem1VrMapping; int VddMem0VrMapping; int VddSocVrMapping; int VddGfxVrMapping; int MaxVoltageStepSoc; int MaxVoltageStepGfx; int I2cControllers; } ;
typedef TYPE_2__ PPTable_t ;
typedef int I2cControllerConfig_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (struct smu_context*,int,int *,int *,int *,int **) ;

__attribute__((used)) static int FUNC_3(struct smu_context *VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_5->adev;
 struct smu_table_context *VAR_7 = &VAR_5->smu_table;
 PPTable_t *VAR_8 = VAR_7->driver_pptable;
 struct atom_smc_dpm_info_v4_5 *VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_3,
        VAR_4);

 VAR_11 = FUNC_2(VAR_5, VAR_10, ((void*)0), ((void*)0), ((void*)0),
          (uint8_t **)&VAR_9);
 if (VAR_11)
  return VAR_11;

 FUNC_1(VAR_8->I2cControllers, VAR_9->I2cControllers,
        sizeof(I2cControllerConfig_t) * VAR_1);


 VAR_8->MaxVoltageStepGfx = VAR_9->MaxVoltageStepGfx;
 VAR_8->MaxVoltageStepSoc = VAR_9->MaxVoltageStepSoc;
 VAR_8->VddGfxVrMapping = VAR_9->VddGfxVrMapping;
 VAR_8->VddSocVrMapping = VAR_9->VddSocVrMapping;
 VAR_8->VddMem0VrMapping = VAR_9->VddMem0VrMapping;
 VAR_8->VddMem1VrMapping = VAR_9->VddMem1VrMapping;
 VAR_8->GfxUlvPhaseSheddingMask = VAR_9->GfxUlvPhaseSheddingMask;
 VAR_8->SocUlvPhaseSheddingMask = VAR_9->SocUlvPhaseSheddingMask;
 VAR_8->ExternalSensorPresent = VAR_9->ExternalSensorPresent;
 VAR_8->Padding8_V = VAR_9->Padding8_V;


 VAR_8->GfxMaxCurrent = VAR_9->GfxMaxCurrent;
 VAR_8->GfxOffset = VAR_9->GfxOffset;
 VAR_8->Padding_TelemetryGfx = VAR_9->Padding_TelemetryGfx;
 VAR_8->SocMaxCurrent = VAR_9->SocMaxCurrent;
 VAR_8->SocOffset = VAR_9->SocOffset;
 VAR_8->Padding_TelemetrySoc = VAR_9->Padding_TelemetrySoc;
 VAR_8->Mem0MaxCurrent = VAR_9->Mem0MaxCurrent;
 VAR_8->Mem0Offset = VAR_9->Mem0Offset;
 VAR_8->Padding_TelemetryMem0 = VAR_9->Padding_TelemetryMem0;
 VAR_8->Mem1MaxCurrent = VAR_9->Mem1MaxCurrent;
 VAR_8->Mem1Offset = VAR_9->Mem1Offset;
 VAR_8->Padding_TelemetryMem1 = VAR_9->Padding_TelemetryMem1;


 VAR_8->AcDcGpio = VAR_9->AcDcGpio;
 VAR_8->AcDcPolarity = VAR_9->AcDcPolarity;
 VAR_8->VR0HotGpio = VAR_9->VR0HotGpio;
 VAR_8->VR0HotPolarity = VAR_9->VR0HotPolarity;
 VAR_8->VR1HotGpio = VAR_9->VR1HotGpio;
 VAR_8->VR1HotPolarity = VAR_9->VR1HotPolarity;
 VAR_8->GthrGpio = VAR_9->GthrGpio;
 VAR_8->GthrPolarity = VAR_9->GthrPolarity;


 VAR_8->LedPin0 = VAR_9->LedPin0;
 VAR_8->LedPin1 = VAR_9->LedPin1;
 VAR_8->LedPin2 = VAR_9->LedPin2;
 VAR_8->padding8_4 = VAR_9->padding8_4;


 VAR_8->PllGfxclkSpreadEnabled = VAR_9->PllGfxclkSpreadEnabled;
 VAR_8->PllGfxclkSpreadPercent = VAR_9->PllGfxclkSpreadPercent;
 VAR_8->PllGfxclkSpreadFreq = VAR_9->PllGfxclkSpreadFreq;


 VAR_8->DfllGfxclkSpreadEnabled = VAR_9->DfllGfxclkSpreadEnabled;
 VAR_8->DfllGfxclkSpreadPercent = VAR_9->DfllGfxclkSpreadPercent;
 VAR_8->DfllGfxclkSpreadFreq = VAR_9->DfllGfxclkSpreadFreq;


 VAR_8->UclkSpreadEnabled = VAR_9->UclkSpreadEnabled;
 VAR_8->UclkSpreadPercent = VAR_9->UclkSpreadPercent;
 VAR_8->UclkSpreadFreq = VAR_9->UclkSpreadFreq;


 VAR_8->SoclkSpreadEnabled = VAR_9->SoclkSpreadEnabled;
 VAR_8->SocclkSpreadPercent = VAR_9->SocclkSpreadPercent;
 VAR_8->SocclkSpreadFreq = VAR_9->SocclkSpreadFreq;


 VAR_8->TotalBoardPower = VAR_9->TotalBoardPower;
 VAR_8->BoardPadding = VAR_9->BoardPadding;


 VAR_8->MvddRatio = VAR_9->MvddRatio;

 if (VAR_6->pm.pp_feature & VAR_2) {

  VAR_8->DebugOverrides |= VAR_0;
 }

 return 0;
}
