
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int fpu_dp; int fpu_sp; int timer1; int timer0; } ;
struct TYPE_7__ {int dsp; } ;
struct TYPE_6__ {scalar_t__ sz; } ;
struct TYPE_5__ {unsigned int base_addr; scalar_t__ sz; } ;
struct cpuinfo_arc {TYPE_4__ extn; TYPE_3__ extn_mpy; TYPE_2__ iccm; TYPE_1__ dccm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 struct cpuinfo_arc* VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 struct cpuinfo_arc *VAR_6 = &VAR_5[FUNC_4()];
 int VAR_7 = 0, VAR_8 = 0;
 char *VAR_9 = ((void*)0);

 if (!VAR_6->extn.timer0)
  FUNC_2("Timer0 is not present!\n");

 if (!VAR_6->extn.timer1)
  FUNC_2("Timer1 is not present!\n");
 if (FUNC_1()) {
  VAR_9 = "CONFIG_ARC_FPU_SAVE_RESTORE";
  VAR_7 = FUNC_0(VAR_1);


  VAR_8 = VAR_6->extn.fpu_dp;
 } else {
  VAR_9 = "CONFIG_ARC_HAS_ACCL_REGS";
  VAR_7 = FUNC_0(VAR_2);


  VAR_8 = VAR_6->extn_mpy.dsp | VAR_6->extn.fpu_sp | VAR_6->extn.fpu_dp;
 }

 if (VAR_8 && !VAR_7)
  FUNC_3("Enable %s for working apps\n", VAR_9);
 else if (!VAR_8 && VAR_7)
  FUNC_2("Disable %s, hardware NOT present\n", VAR_9);
}
