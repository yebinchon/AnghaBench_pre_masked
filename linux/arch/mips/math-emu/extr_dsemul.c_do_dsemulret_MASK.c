
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int cp0_epc; } ;
struct TYPE_4__ {int bd_emu_cont_pc; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;

bool FUNC_3(struct pt_regs *VAR_3)
{

 if (!FUNC_1(VAR_0)) {
  FUNC_0(VAR_2);
  return 0;
 }


 VAR_3->cp0_epc = VAR_0->thread.bd_emu_cont_pc;
 FUNC_2("dsemulret to 0x%08lx\n", VAR_3->cp0_epc);
 FUNC_0(VAR_1);
 return 1;
}
