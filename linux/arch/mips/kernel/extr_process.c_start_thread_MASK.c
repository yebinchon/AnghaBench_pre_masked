
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {unsigned long cp0_status; unsigned long cp0_epc; unsigned long* regs; } ;
struct TYPE_3__ {int bd_emu_frame; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 TYPE_2__* VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

void FUNC_5(struct pt_regs * VAR_8, unsigned long VAR_9, unsigned long VAR_10)
{
 unsigned long VAR_11;


 VAR_11 = VAR_8->cp0_status & ~(VAR_3|VAR_4|VAR_5|VAR_1);
 VAR_11 |= VAR_2;
 VAR_8->cp0_status = VAR_11;
 FUNC_4(0);
 FUNC_1(VAR_6);
 FUNC_2();
 FUNC_0(&VAR_7->thread.bd_emu_frame, VAR_0);
 FUNC_3();
 VAR_8->cp0_epc = VAR_9;
 VAR_8->regs[29] = VAR_10;
}
