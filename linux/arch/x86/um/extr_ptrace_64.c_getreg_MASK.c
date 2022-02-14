
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
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 size_t* VAR_1 ;
 scalar_t__ FUNC_1 (struct task_struct*,int ) ;

unsigned long FUNC_2(struct task_struct *VAR_2, int VAR_3)
{
 unsigned long VAR_4 = ~0UL;




 switch (VAR_3) {
 case 139:
 case 138:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 140:
 case 131:
 case 129:
 case 137:
 case 135:
 case 134:
 case 132:
 case 130:
 case 133:
 case 136:
 case 146:
 case 152:
 case 149:
 case 147:
  break;
 case 150:
 case 148:
 case 153:
 case 151:
 case 128:
 case 154:
  VAR_4 = 0xffff;
  break;
 default:
  FUNC_0("Bad register in getreg: %d\n", VAR_3);
 }
 return VAR_4 & VAR_2->thread.regs.regs.gp[VAR_1[VAR_3 >> 3]];
}
