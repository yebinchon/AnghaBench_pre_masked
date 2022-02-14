
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int usDspBaseIO; int bInterruptClaimed; int usDspIrq; } ;
struct TYPE_4__ {TYPE_2__ rDspSettings; } ;
typedef TYPE_1__ THINKPAD_BD_DATA ;
typedef TYPE_2__ DSP_3780I_CONFIG_SETTINGS ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int) ;

int FUNC_3(THINKPAD_BD_DATA * VAR_1)
{
 int VAR_2 = 0;
 DSP_3780I_CONFIG_SETTINGS *VAR_3 = &VAR_1->rDspSettings;

 FUNC_0(VAR_0,
  "tp3780i::tp3780I_ReleaseResources entry pBDData %p\n", VAR_1);

 FUNC_2(VAR_3->usDspBaseIO & (~3), 16);

 if (VAR_3->bInterruptClaimed) {
  FUNC_1(VAR_3->usDspIrq, ((void*)0));
  VAR_3->bInterruptClaimed = 0;
 }

 FUNC_0(VAR_0,
  "tp3780i::tp3780I_ReleaseResources exit retval %x\n", VAR_2);

 return VAR_2;
}
