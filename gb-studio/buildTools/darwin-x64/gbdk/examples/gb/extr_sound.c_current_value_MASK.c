
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
struct TYPE_11__ {int global_On_Off; int Vin_SO1; int Vin_SO2; int SO1_OutputLevel; int SO2_OutputLevel; int Sound1_To_SO1; int Sound1_To_SO2; int Sound1_On_Off; int Sound2_To_SO1; int Sound2_To_SO2; int Sound2_On_Off; int Sound3_To_SO1; int Sound3_To_SO2; int Sound3_On_Off; int Sound4_To_SO1; int Sound4_To_SO2; int Sound4_On_Off; } ;
struct TYPE_10__ {int soundLength; int envInitialValue; int envMode; int envNbStep; int polyCounterFreq; int polyCounterStep; int polyCounterDiv; int counter_ConsSel; } ;
struct TYPE_9__ {int on_Off; int soundLength; int selOutputLevel; int counter_ConsSel; int frequencyLow; int frequencyHigh; } ;
struct TYPE_8__ {int patternDuty; int soundLength; int envInitialValue; int envMode; int envNbStep; int counter_ConsSel; int frequencyLow; int frequencyHigh; } ;
struct TYPE_7__ {int sweepTime; int sweepMode; int sweepShifts; int patternDuty; int soundLength; int envInitialValue; int envMode; int envNbSweep; int counter_ConsSel; int frequencyLow; int frequencyHigh; } ;
struct TYPE_12__ {TYPE_5__ control; TYPE_4__ mode4; TYPE_3__ mode3; TYPE_2__ mode2; TYPE_1__ mode1; } ;



 TYPE_6__* VAR_0 ;

UWORD FUNC_0(UBYTE VAR_1, UBYTE VAR_2)
{
  if(VAR_1 == 0) {
    switch(VAR_2)
      {
      case 0:
 return VAR_0->control.global_On_Off;
      case 1:
 return VAR_0->control.Vin_SO1;
      case 2:
 return VAR_0->control.Vin_SO2;
      case 3:
 return VAR_0->control.SO1_OutputLevel;
      case 4:
 return VAR_0->control.SO2_OutputLevel;
      }
  } else if(VAR_1 == 1) {
    switch(VAR_2)
      {
      case 0:
 return VAR_0->mode1.sweepTime;
      case 1:
 return VAR_0->mode1.sweepMode;
      case 2:
 return VAR_0->mode1.sweepShifts;
      case 3:
 return VAR_0->mode1.patternDuty;
      case 4:
 return VAR_0->mode1.soundLength;
      case 5:
 return VAR_0->mode1.envInitialValue;
      case 6:
 return VAR_0->mode1.envMode;
      case 7:
 return VAR_0->mode1.envNbSweep;
      case 8:
      case 128:
 return ((UWORD)VAR_0->mode1.frequencyHigh << 8) +
   (UWORD)VAR_0->mode1.frequencyLow;
      case 9:
 return VAR_0->mode1.counter_ConsSel;
      case 10:
 return VAR_0->control.Sound1_To_SO1;
      case 11:
 return VAR_0->control.Sound1_To_SO2;
      case 12:
 return VAR_0->control.Sound1_On_Off;
      }
  } else if(VAR_1 == 2) {
    switch(VAR_2)
      {
      case 0:
 return VAR_0->mode2.patternDuty;
      case 1:
 return VAR_0->mode2.soundLength;
      case 2:
 return VAR_0->mode2.envInitialValue;
      case 3:
 return VAR_0->mode2.envMode;
      case 4:
 return VAR_0->mode2.envNbStep;
      case 5:
      case 128:
 return ((UWORD)VAR_0->mode2.frequencyHigh << 8) +
   (UWORD)VAR_0->mode2.frequencyLow;
      case 6:
 return VAR_0->mode2.counter_ConsSel;
      case 7:
 return VAR_0->control.Sound2_To_SO1;
      case 8:
 return VAR_0->control.Sound2_To_SO2;
      case 9:
 return VAR_0->control.Sound2_On_Off;
      }
  } else if(VAR_1 == 3) {
    switch(VAR_2)
      {
      case 0:
 return VAR_0->mode3.on_Off;
      case 1:
 return VAR_0->mode3.soundLength;
      case 2:
 return VAR_0->mode3.selOutputLevel;
      case 3:
      case 128:
 return ((UWORD)VAR_0->mode3.frequencyHigh << 8) +
   (UWORD)VAR_0->mode3.frequencyLow;
      case 4:
 return VAR_0->mode3.counter_ConsSel;
      case 5:
 return VAR_0->control.Sound3_To_SO1;
      case 6:
 return VAR_0->control.Sound3_To_SO2;
      case 7:
 return VAR_0->control.Sound3_On_Off;
      }
  } else if(VAR_1 == 4) {
    switch(VAR_2)
      {
      case 0:
 return VAR_0->mode4.soundLength;
      case 1:
 return VAR_0->mode4.envInitialValue;
      case 2:
 return VAR_0->mode4.envMode;
      case 3:
 return VAR_0->mode4.envNbStep;
      case 4:
 return VAR_0->mode4.polyCounterFreq;
      case 5:
 return VAR_0->mode4.polyCounterStep;
      case 6:
 return VAR_0->mode4.polyCounterDiv;
      case 7:
 return VAR_0->mode4.counter_ConsSel;
      case 8:
 return VAR_0->control.Sound4_To_SO1;
      case 9:
 return VAR_0->control.Sound4_To_SO2;
      case 10:
 return VAR_0->control.Sound4_On_Off;
      }
  }
  return 0;
}
