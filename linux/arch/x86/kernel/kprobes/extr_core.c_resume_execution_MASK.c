
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long flags; unsigned long ip; } ;
struct kprobe_ctlblk {unsigned long kprobe_old_flags; } ;
struct TYPE_2__ {int* insn; int boostable; } ;
struct kprobe {TYPE_1__ ainsn; scalar_t__ addr; } ;
typedef int kprobe_opcode_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 () ;
 int* FUNC_1 (int*) ;
 unsigned long* FUNC_2 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_3(struct kprobe *VAR_2, struct pt_regs *VAR_3,
        struct kprobe_ctlblk *VAR_4)
{
 unsigned long *VAR_5 = FUNC_2(VAR_3);
 unsigned long VAR_6 = (unsigned long)VAR_2->ainsn.insn;
 unsigned long VAR_7 = (unsigned long)VAR_2->addr;
 kprobe_opcode_t *VAR_8 = VAR_2->ainsn.insn;


 VAR_8 = FUNC_1(VAR_8);

 VAR_3->flags &= ~VAR_1;
 switch (*VAR_8) {
 case 0x9c:
  *VAR_5 &= ~(VAR_1 | VAR_0);
  *VAR_5 |= VAR_4->kprobe_old_flags;
  break;
 case 0xc2:
 case 0xc3:
 case 0xca:
 case 0xcb:
 case 0xcf:
 case 0xea:

  VAR_2->ainsn.boostable = 1;
  goto no_change;
 case 0xe8:
  *VAR_5 = VAR_7 + (*VAR_5 - VAR_6);
  break;





 case 0xff:
  if ((VAR_8[1] & 0x30) == 0x10) {





   *VAR_5 = VAR_7 + (*VAR_5 - VAR_6);
   goto no_change;
  } else if (((VAR_8[1] & 0x31) == 0x20) ||
      ((VAR_8[1] & 0x31) == 0x21)) {




   VAR_2->ainsn.boostable = 1;
   goto no_change;
  }
 default:
  break;
 }

 VAR_3->ip += VAR_7 - VAR_6;

no_change:
 FUNC_0();
}
