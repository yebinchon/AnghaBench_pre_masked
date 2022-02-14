
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long addr; int mask; } ;
struct pt_regs {TYPE_1__ psw; } ;
struct kprobe_ctlblk {int kprobe_saved_imask; int kprobe_saved_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct kprobe_ctlblk *VAR_1,
          struct pt_regs *VAR_2,
          unsigned long VAR_3)
{

 FUNC_0(VAR_1->kprobe_saved_ctl, 9, 11);
 VAR_2->psw.mask &= ~VAR_0;
 VAR_2->psw.mask |= VAR_1->kprobe_saved_imask;
 VAR_2->psw.addr = VAR_3;
}
