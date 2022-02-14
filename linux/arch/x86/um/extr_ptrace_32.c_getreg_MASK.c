
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long* gp; } ;
struct TYPE_5__ {TYPE_1__ regs; } ;
struct TYPE_6__ {TYPE_2__ regs; } ;
struct task_struct {TYPE_3__ thread; } ;
 int FUNC_0 (char*,int) ;
 size_t* VAR_0 ;

unsigned long FUNC_1(struct task_struct *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = ~0UL;

 VAR_2 >>= 2;
 switch (VAR_2) {
 case 132:
 case 131:
 case 143:
 case 134:
 case 129:
 case 144:
  VAR_3 = 0xffff;
  break;
 case 135:
 case 128:
 case 142:
 case 140:
 case 139:
 case 137:
 case 133:
 case 138:
 case 141:
 case 136:
 case 130:
  break;
 default:
  FUNC_0("Bad register in getreg() : %d\n", VAR_2);
 }
 return VAR_3 & VAR_1->thread.regs.regs.gp[VAR_0[VAR_2]];
}
