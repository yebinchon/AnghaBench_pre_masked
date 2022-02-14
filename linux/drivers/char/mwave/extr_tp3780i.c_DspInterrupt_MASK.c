
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* pMWAVE_DEVICE_DATA ;
typedef int irqreturn_t ;
struct TYPE_9__ {unsigned short usDspBaseIO; } ;
struct TYPE_6__ {TYPE_4__ rDspSettings; } ;
struct TYPE_8__ {TYPE_2__* IPCs; TYPE_1__ rBDData; } ;
struct TYPE_7__ {int usIntCount; int bIsEnabled; int ipc_wait_queue; } ;
typedef TYPE_4__ DSP_3780I_CONFIG_SETTINGS ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,unsigned short) ;
 int FUNC_2 (int ,char*,unsigned short,unsigned short) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (unsigned short,unsigned short*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 pMWAVE_DEVICE_DATA VAR_5 = &VAR_2;
 DSP_3780I_CONFIG_SETTINGS *VAR_6 = &VAR_5->rBDData.rDspSettings;
 unsigned short VAR_7 = VAR_6->usDspBaseIO;
 unsigned short VAR_8 = 0, VAR_9, VAR_10;

 FUNC_2(VAR_1,
  "tp3780i::DspInterrupt entry irq %x dev_id %p\n", VAR_3, VAR_4);

 if (FUNC_3(VAR_7, &VAR_8) == 0) {
  FUNC_1(VAR_1,
   "tp3780i::DspInterrupt, return from dsp3780i_GetIPCSource, usIPCSource %x\n",
   VAR_8);
  VAR_9 = 1;
  for (VAR_10 = 1; VAR_10 <= 16; VAR_10++) {
   if (VAR_8 & VAR_9) {
    VAR_8 &= ~VAR_9;
    FUNC_2(VAR_1,
     "tp3780i::DspInterrupt usPCNum %x usIPCSource %x\n",
     VAR_10, VAR_8);
    if (VAR_5->IPCs[VAR_10 - 1].usIntCount == 0) {
     VAR_5->IPCs[VAR_10 - 1].usIntCount = 1;
    }
    FUNC_1(VAR_1,
     "tp3780i::DspInterrupt usIntCount %x\n",
     VAR_5->IPCs[VAR_10 - 1].usIntCount);
    if (VAR_5->IPCs[VAR_10 - 1].bIsEnabled == 1) {
     FUNC_1(VAR_1,
      "tp3780i::DspInterrupt, waking up usPCNum %x\n",
      VAR_10 - 1);
     FUNC_4(&VAR_5->IPCs[VAR_10 - 1].ipc_wait_queue);
    } else {
     FUNC_1(VAR_1,
      "tp3780i::DspInterrupt, no one waiting for IPC %x\n",
      VAR_10 - 1);
    }
   }
   if (VAR_8 == 0)
    break;

   VAR_9 = VAR_9 << 1;
  }
 } else {
  FUNC_0(VAR_1,
   "tp3780i::DspInterrupt, return false from dsp3780i_GetIPCSource\n");
 }
 FUNC_0(VAR_1, "tp3780i::DspInterrupt exit\n");
 return VAR_0;
}
