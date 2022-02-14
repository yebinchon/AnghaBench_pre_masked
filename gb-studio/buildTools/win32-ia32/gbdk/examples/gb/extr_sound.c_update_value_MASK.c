
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UWORD ;
typedef int UBYTE ;
struct TYPE_11__ {int restart; int soundLength; int envInitialValue; int envMode; int envNbStep; int polyCounterFreq; int polyCounterStep; int polyCounterDiv; int counter_ConsSel; } ;
struct TYPE_10__ {int global_On_Off; int Vin_SO1; int Vin_SO2; int SO1_OutputLevel; int SO2_OutputLevel; int Sound1_To_SO1; int Sound1_To_SO2; int Sound1_On_Off; int Sound2_To_SO1; int Sound2_To_SO2; int Sound2_On_Off; int Sound3_To_SO1; int Sound3_To_SO2; int Sound3_On_Off; int Sound4_To_SO1; int Sound4_To_SO2; int Sound4_On_Off; } ;
struct TYPE_9__ {int restart; int on_Off; int soundLength; int selOutputLevel; int frequencyHigh; int frequencyLow; int counter_ConsSel; } ;
struct TYPE_8__ {int restart; int patternDuty; int soundLength; int envInitialValue; int envMode; int envNbStep; int frequencyHigh; int frequencyLow; int counter_ConsSel; } ;
struct TYPE_7__ {int restart; int sweepTime; int sweepMode; int sweepShifts; int patternDuty; int soundLength; int envInitialValue; int envMode; int envNbSweep; int frequencyHigh; int frequencyLow; int counter_ConsSel; } ;
struct TYPE_12__ {TYPE_5__ mode4; TYPE_4__ control; TYPE_3__ mode3; TYPE_2__ mode2; TYPE_1__ mode1; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

 int FUNC_0 (int,int const) ;
 TYPE_6__* VAR_21 ;

void FUNC_1(UBYTE VAR_22, UBYTE VAR_23, UWORD VAR_24)
{
  if(VAR_22 == 0) {
    switch(VAR_23)
      {
      case 0:
 VAR_21->control.global_On_Off = VAR_24;
 VAR_20 = ((UBYTE *)VAR_21)[0x16];
 break;
      case 1:
 VAR_21->control.Vin_SO1 = VAR_24;
 VAR_18 = ((UBYTE *)VAR_21)[0x14];
 break;
      case 2:
 VAR_21->control.Vin_SO2 = VAR_24;
 VAR_18 = ((UBYTE *)VAR_21)[0x14];
 break;
      case 3:
 VAR_21->control.SO1_OutputLevel = VAR_24;
 VAR_18 = ((UBYTE *)VAR_21)[0x14];
 break;
      case 4:
 VAR_21->control.SO2_OutputLevel = VAR_24;
 VAR_18 = ((UBYTE *)VAR_21)[0x14];
 break;
      case 129:
 FUNC_1(1, 129, VAR_24);
 FUNC_1(2, 129, VAR_24);
 FUNC_1(3, 129, VAR_24);
 break;
      case 128:
 FUNC_1(1, 129, FUNC_0(1, 129));
 FUNC_1(2, 129, FUNC_0(2, 129));
 FUNC_1(3, 129, FUNC_0(3, 129));
 VAR_21->mode1.restart = VAR_24;
 VAR_21->mode2.restart = VAR_24;
 VAR_21->mode3.restart = VAR_24;
 VAR_21->mode4.restart = VAR_24;
 VAR_4 = ((UBYTE *)VAR_21)[0x04];
 VAR_8 = ((UBYTE *)VAR_21)[0x09];
 VAR_13 = ((UBYTE *)VAR_21)[0x0E];
 VAR_17 = ((UBYTE *)VAR_21)[0x13];
 VAR_21->mode1.restart = 0;
 VAR_21->mode2.restart = 0;
 VAR_21->mode3.restart = 0;
 VAR_21->mode4.restart = 0;
 break;
      }
  } else if(VAR_22 == 1) {
    switch(VAR_23)
      {
      case 0:
 VAR_21->mode1.sweepTime = VAR_24;
 VAR_0 = ((UBYTE *)VAR_21)[0x00];
 break;
      case 1:
 VAR_21->mode1.sweepMode = VAR_24;
 VAR_0 = ((UBYTE *)VAR_21)[0x00];
 break;
      case 2:
 VAR_21->mode1.sweepShifts = VAR_24;
 VAR_0 = ((UBYTE *)VAR_21)[0x00];
 break;
      case 3:
 VAR_21->mode1.patternDuty = VAR_24;
 VAR_1 = ((UBYTE *)VAR_21)[0x01];
 break;
      case 4:
 VAR_21->mode1.soundLength = VAR_24;
 VAR_1 = ((UBYTE *)VAR_21)[0x01];
 break;
      case 5:
 VAR_21->mode1.envInitialValue = VAR_24;
 VAR_2 = ((UBYTE *)VAR_21)[0x02];
 break;
      case 6:
 VAR_21->mode1.envMode = VAR_24;
 VAR_2 = ((UBYTE *)VAR_21)[0x02];
 break;
      case 7:
 VAR_21->mode1.envNbSweep = VAR_24;
 VAR_2 = ((UBYTE *)VAR_21)[0x02];
 break;
      case 8:
      case 129:
 VAR_21->mode1.frequencyHigh = VAR_24 >> 8;
 VAR_21->mode1.frequencyLow = VAR_24;
 VAR_3 = ((UBYTE *)VAR_21)[0x03];
 VAR_4 = ((UBYTE *)VAR_21)[0x04];
 break;
      case 9:
 VAR_21->mode1.counter_ConsSel = VAR_24;
 VAR_4 = ((UBYTE *)VAR_21)[0x04];
 break;
      case 10:
 VAR_21->control.Sound1_To_SO1 = VAR_24;
 VAR_19 = ((UBYTE *)VAR_21)[0x15];
 break;
      case 11:
 VAR_21->control.Sound1_To_SO2 = VAR_24;
 VAR_19 = ((UBYTE *)VAR_21)[0x15];
 break;
      case 12:
 VAR_21->control.Sound1_On_Off = VAR_24;
 VAR_20 = ((UBYTE *)VAR_21)[0x16];
 break;
      case 128:
 FUNC_1(VAR_22, 129, FUNC_0(VAR_22, 129));
 VAR_21->mode1.restart = VAR_24;
 VAR_4 = ((UBYTE *)VAR_21)[0x04];
 VAR_21->mode1.restart = 0;
 break;
      }
  } else if(VAR_22 == 2) {
    switch(VAR_23)
      {
      case 0:
 VAR_21->mode2.patternDuty = VAR_24;
 VAR_5 = ((UBYTE *)VAR_21)[0x06];
 break;
      case 1:
 VAR_21->mode2.soundLength = VAR_24;
 VAR_5 = ((UBYTE *)VAR_21)[0x06];
 break;
      case 2:
 VAR_21->mode2.envInitialValue = VAR_24;
 VAR_6 = ((UBYTE *)VAR_21)[0x07];
 break;
      case 3:
 VAR_21->mode2.envMode = VAR_24;
 VAR_6 = ((UBYTE *)VAR_21)[0x07];
 break;
      case 4:
 VAR_21->mode2.envNbStep = VAR_24;
 VAR_6 = ((UBYTE *)VAR_21)[0x07];
 break;
      case 5:
      case 129:
 VAR_21->mode2.frequencyHigh = VAR_24 >> 8;
 VAR_21->mode2.frequencyLow = VAR_24;
 VAR_7 = ((UBYTE *)VAR_21)[0x08];
 VAR_8 = ((UBYTE *)VAR_21)[0x09];
 break;
      case 6:
 VAR_21->mode2.counter_ConsSel = VAR_24;
 VAR_8 = ((UBYTE *)VAR_21)[0x09];
 break;
      case 7:
 VAR_21->control.Sound2_To_SO1 = VAR_24;
 VAR_19 = ((UBYTE *)VAR_21)[0x15];
 break;
      case 8:
 VAR_21->control.Sound2_To_SO2 = VAR_24;
 VAR_19 = ((UBYTE *)VAR_21)[0x15];
 break;
      case 9:
 VAR_21->control.Sound2_On_Off = VAR_24;
 VAR_20 = ((UBYTE *)VAR_21)[0x16];
 break;
      case 128:
 FUNC_1(VAR_22, 129, FUNC_0(VAR_22, 129));
 VAR_21->mode2.restart = VAR_24;
 VAR_8 = ((UBYTE *)VAR_21)[0x09];
 VAR_21->mode2.restart = 0;
 break;
      }
  } else if(VAR_22 == 3) {
    switch(VAR_23)
      {
      case 0:
 VAR_21->mode3.on_Off = VAR_24;
 VAR_9 = ((UBYTE *)VAR_21)[0x0A];
 break;
      case 1:
 VAR_21->mode3.soundLength = VAR_24;
 VAR_10 = ((UBYTE *)VAR_21)[0x0B];
 break;
      case 2:
 VAR_21->mode3.selOutputLevel = VAR_24;
 VAR_11 = ((UBYTE *)VAR_21)[0x0C];
 break;
      case 3:
      case 129:
 VAR_21->mode3.frequencyHigh = VAR_24 >> 8;
 VAR_21->mode3.frequencyLow = VAR_24;
 VAR_12 = ((UBYTE *)VAR_21)[0x0D];
 VAR_13 = ((UBYTE *)VAR_21)[0x0E];
 break;
      case 4:
 VAR_21->mode3.counter_ConsSel = VAR_24;
 VAR_13 = ((UBYTE *)VAR_21)[0x0E];
 break;
      case 5:
 VAR_21->control.Sound3_To_SO1 = VAR_24;
 VAR_19 = ((UBYTE *)VAR_21)[0x15];
 break;
      case 6:
 VAR_21->control.Sound3_To_SO2 = VAR_24;
 VAR_19 = ((UBYTE *)VAR_21)[0x15];
 break;
      case 7:
 VAR_21->control.Sound3_On_Off = VAR_24;
 VAR_20 = ((UBYTE *)VAR_21)[0x16];
 break;
      case 128:
 FUNC_1(VAR_22, 129, FUNC_0(VAR_22, 129));
 VAR_21->mode3.restart = VAR_24;
 VAR_13 = ((UBYTE *)VAR_21)[0x0E];
 VAR_21->mode3.restart = 0;
 break;
      }
  } else if(VAR_22 == 4) {
    switch(VAR_23)
      {
      case 0:
 VAR_21->mode4.soundLength = VAR_24;
 VAR_14 = ((UBYTE *)VAR_21)[0x10];
 break;
      case 1:
 VAR_21->mode4.envInitialValue = VAR_24;
 VAR_15 = ((UBYTE *)VAR_21)[0x11];
 break;
      case 2:
 VAR_21->mode4.envMode = VAR_24;
 VAR_15 = ((UBYTE *)VAR_21)[0x11];
 break;
      case 3:
 VAR_21->mode4.envNbStep = VAR_24;
 VAR_15 = ((UBYTE *)VAR_21)[0x11];
 break;
      case 4:
 VAR_21->mode4.polyCounterFreq = VAR_24;
 VAR_16 = ((UBYTE *)VAR_21)[0x12];
 break;
      case 5:
 VAR_21->mode4.polyCounterStep = VAR_24;
 VAR_16 = ((UBYTE *)VAR_21)[0x12];
 break;
      case 6:
 VAR_21->mode4.polyCounterDiv = VAR_24;
 VAR_16 = ((UBYTE *)VAR_21)[0x12];
 break;
      case 7:
 VAR_21->mode4.counter_ConsSel = VAR_24;
 VAR_17 = ((UBYTE *)VAR_21)[0x13];
 break;
      case 8:
 VAR_21->control.Sound4_To_SO1 = VAR_24;
 VAR_19 = ((UBYTE *)VAR_21)[0x15];
 break;
      case 9:
 VAR_21->control.Sound4_To_SO2 = VAR_24;
 VAR_19 = ((UBYTE *)VAR_21)[0x15];
 break;
      case 10:
 VAR_21->control.Sound4_On_Off = VAR_24;
 VAR_20 = ((UBYTE *)VAR_21)[0x16];
 break;
      case 128:
 VAR_21->mode4.restart = VAR_24;
 VAR_17 = ((UBYTE *)VAR_21)[0x13];
 VAR_21->mode4.restart = 0;
 break;
      }
  }
}
