
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct smu_table_context {TYPE_3__* driver_pptable; } ;
struct smu_context {struct smu_table_context smu_table; } ;
struct atom_smc_dpm_info_v4_4 {TYPE_2__* i2ccontrollers; int fllgfxclkspreadfreq; int fllgfxclkspreadpercent; int fllgfxclkspreadenabled; int fclkspreadfreq; int fclkspreadpercent; int fclkspreadenabled; int uclkspreadfreq; int uclkspreadpercent; int pllgfxclkspreadfreq; int pllgfxclkspreadpercent; int pllgfxclkspreadenabled; int ledpin2; int ledpin1; int ledpin0; int padding2; int padding1; int vr1hotpolarity; int vr1hotgpio; int vr0hotpolarity; int vr0hotgpio; int acdcpolarity; int acdcgpio; int padding_telemetrymem1; int mem1offset; int mem1maxcurrent; int padding_telemetrymem0; int mem0offset; int mem0maxcurrent; int padding_telemetrysoc; int socoffset; int socmaxcurrent; int padding_telemetrygfx; int gfxoffset; int gfxmaxcurrent; int externalsensorpresent; int soculvphasesheddingmask; int gfxulvphasesheddingmask; int vddmem1vrmapping; int vddmem0vrmapping; int vddsocvrmapping; int vddgfxvrmapping; int maxvoltagestepsoc; int maxvoltagestepgfx; } ;
struct TYPE_6__ {TYPE_1__* I2cControllers; int FllGfxclkSpreadFreq; int FllGfxclkSpreadPercent; int FllGfxclkSpreadEnabled; int FclkSpreadFreq; int FclkSpreadPercent; int FclkSpreadEnabled; int UclkSpreadFreq; int UclkSpreadPercent; scalar_t__ UclkSpreadEnabled; int PllGfxclkSpreadFreq; int PllGfxclkSpreadPercent; int PllGfxclkSpreadEnabled; int LedPin2; int LedPin1; int LedPin0; int Padding2; int Padding1; int VR1HotPolarity; int VR1HotGpio; int VR0HotPolarity; int VR0HotGpio; int AcDcPolarity; int AcDcGpio; int Padding_TelemetryMem1; int Mem1Offset; int Mem1MaxCurrent; int Padding_TelemetryMem0; int Mem0Offset; int Mem0MaxCurrent; int Padding_TelemetrySoc; int SocOffset; int SocMaxCurrent; int Padding_TelemetryGfx; int GfxOffset; int GfxMaxCurrent; int ExternalSensorPresent; int SocUlvPhaseSheddingMask; int GfxUlvPhaseSheddingMask; int VddMem1VrMapping; int VddMem0VrMapping; int VddSocVrMapping; int VddGfxVrMapping; int MaxVoltageStepSoc; int MaxVoltageStepGfx; } ;
struct TYPE_5__ {int i2cspeed; int i2cprotocol; int thermalthrottler; int controllerport; int slaveaddress; int enabled; } ;
struct TYPE_4__ {int I2cSpeed; int I2cProtocol; int ThermalThrottler; int ControllerPort; int SlaveAddress; int Enabled; } ;
typedef TYPE_3__ PPTable_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct smu_context*,int,int *,int *,int *,int **) ;

__attribute__((used)) static int FUNC_2(struct smu_context *VAR_3)
{
 struct smu_table_context *VAR_4 = &VAR_3->smu_table;
 PPTable_t *VAR_5 = VAR_4->driver_pptable;
 struct atom_smc_dpm_info_v4_4 *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_1,
        VAR_2);

 VAR_9 = FUNC_1(VAR_3, VAR_7, ((void*)0), ((void*)0), ((void*)0),
          (uint8_t **)&VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_5->MaxVoltageStepGfx = VAR_6->maxvoltagestepgfx;
 VAR_5->MaxVoltageStepSoc = VAR_6->maxvoltagestepsoc;

 VAR_5->VddGfxVrMapping = VAR_6->vddgfxvrmapping;
 VAR_5->VddSocVrMapping = VAR_6->vddsocvrmapping;
 VAR_5->VddMem0VrMapping = VAR_6->vddmem0vrmapping;
 VAR_5->VddMem1VrMapping = VAR_6->vddmem1vrmapping;

 VAR_5->GfxUlvPhaseSheddingMask = VAR_6->gfxulvphasesheddingmask;
 VAR_5->SocUlvPhaseSheddingMask = VAR_6->soculvphasesheddingmask;
 VAR_5->ExternalSensorPresent = VAR_6->externalsensorpresent;

 VAR_5->GfxMaxCurrent = VAR_6->gfxmaxcurrent;
 VAR_5->GfxOffset = VAR_6->gfxoffset;
 VAR_5->Padding_TelemetryGfx = VAR_6->padding_telemetrygfx;

 VAR_5->SocMaxCurrent = VAR_6->socmaxcurrent;
 VAR_5->SocOffset = VAR_6->socoffset;
 VAR_5->Padding_TelemetrySoc = VAR_6->padding_telemetrysoc;

 VAR_5->Mem0MaxCurrent = VAR_6->mem0maxcurrent;
 VAR_5->Mem0Offset = VAR_6->mem0offset;
 VAR_5->Padding_TelemetryMem0 = VAR_6->padding_telemetrymem0;

 VAR_5->Mem1MaxCurrent = VAR_6->mem1maxcurrent;
 VAR_5->Mem1Offset = VAR_6->mem1offset;
 VAR_5->Padding_TelemetryMem1 = VAR_6->padding_telemetrymem1;

 VAR_5->AcDcGpio = VAR_6->acdcgpio;
 VAR_5->AcDcPolarity = VAR_6->acdcpolarity;
 VAR_5->VR0HotGpio = VAR_6->vr0hotgpio;
 VAR_5->VR0HotPolarity = VAR_6->vr0hotpolarity;

 VAR_5->VR1HotGpio = VAR_6->vr1hotgpio;
 VAR_5->VR1HotPolarity = VAR_6->vr1hotpolarity;
 VAR_5->Padding1 = VAR_6->padding1;
 VAR_5->Padding2 = VAR_6->padding2;

 VAR_5->LedPin0 = VAR_6->ledpin0;
 VAR_5->LedPin1 = VAR_6->ledpin1;
 VAR_5->LedPin2 = VAR_6->ledpin2;

 VAR_5->PllGfxclkSpreadEnabled = VAR_6->pllgfxclkspreadenabled;
 VAR_5->PllGfxclkSpreadPercent = VAR_6->pllgfxclkspreadpercent;
 VAR_5->PllGfxclkSpreadFreq = VAR_6->pllgfxclkspreadfreq;

 VAR_5->UclkSpreadEnabled = 0;
 VAR_5->UclkSpreadPercent = VAR_6->uclkspreadpercent;
 VAR_5->UclkSpreadFreq = VAR_6->uclkspreadfreq;

 VAR_5->FclkSpreadEnabled = VAR_6->fclkspreadenabled;
 VAR_5->FclkSpreadPercent = VAR_6->fclkspreadpercent;
 VAR_5->FclkSpreadFreq = VAR_6->fclkspreadfreq;

 VAR_5->FllGfxclkSpreadEnabled = VAR_6->fllgfxclkspreadenabled;
 VAR_5->FllGfxclkSpreadPercent = VAR_6->fllgfxclkspreadpercent;
 VAR_5->FllGfxclkSpreadFreq = VAR_6->fllgfxclkspreadfreq;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_5->I2cControllers[VAR_8].Enabled =
   VAR_6->i2ccontrollers[VAR_8].enabled;
  VAR_5->I2cControllers[VAR_8].SlaveAddress =
   VAR_6->i2ccontrollers[VAR_8].slaveaddress;
  VAR_5->I2cControllers[VAR_8].ControllerPort =
   VAR_6->i2ccontrollers[VAR_8].controllerport;
  VAR_5->I2cControllers[VAR_8].ThermalThrottler =
   VAR_6->i2ccontrollers[VAR_8].thermalthrottler;
  VAR_5->I2cControllers[VAR_8].I2cProtocol =
   VAR_6->i2ccontrollers[VAR_8].i2cprotocol;
  VAR_5->I2cControllers[VAR_8].I2cSpeed =
   VAR_6->i2ccontrollers[VAR_8].i2cspeed;
 }

 return 0;
}
