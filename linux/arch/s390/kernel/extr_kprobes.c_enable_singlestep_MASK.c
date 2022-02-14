
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; unsigned long addr; } ;
struct pt_regs {TYPE_1__ psw; } ;
struct per_regs {unsigned long start; unsigned long end; int control; } ;
struct kprobe_ctlblk {int kprobe_saved_imask; int kprobe_saved_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct per_regs,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct kprobe_ctlblk *VAR_4,
         struct pt_regs *VAR_5,
         unsigned long VAR_6)
{
 struct per_regs VAR_7;


 VAR_7.control = VAR_0;
 VAR_7.start = VAR_6;
 VAR_7.end = VAR_6;


 FUNC_1(VAR_4->kprobe_saved_ctl, 9, 11);
 VAR_4->kprobe_saved_imask = VAR_5->psw.mask &
  (VAR_3 | VAR_2 | VAR_1);


 FUNC_0(VAR_7, 9, 11);
 VAR_5->psw.mask |= VAR_3;
 VAR_5->psw.mask &= ~(VAR_2 | VAR_1);
 VAR_5->psw.addr = VAR_6;
}
