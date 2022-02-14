
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int nip; unsigned long* gpr; int xer; unsigned long link; int ctr; int ccr; int msr; } ;
struct instruction_op {int type; size_t reg; unsigned long val; int xerval; int spr; int ccval; } ;






 int VAR_0 ;



 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int) ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (int ,int) ;

void FUNC_6(struct pt_regs *VAR_7, struct instruction_op *VAR_8)
{
 unsigned long VAR_9;

 VAR_9 = FUNC_5(VAR_7->msr, VAR_7->nip + 4);
 switch (FUNC_0(VAR_8->type)) {
 case 133:
  if (VAR_8->type & VAR_5)
   VAR_7->gpr[VAR_8->reg] = VAR_8->val;
  if (VAR_8->type & VAR_3)
   VAR_7->ccr = VAR_8->ccval;
  if (VAR_8->type & VAR_6)
   VAR_7->xer = VAR_8->xerval;
  break;

 case 134:
  if (VAR_8->type & VAR_4)
   VAR_7->link = VAR_9;
  if (VAR_8->type & VAR_1)
   VAR_9 = VAR_8->val;
  if (VAR_8->type & VAR_2)
   --VAR_7->ctr;
  break;

 case 140:
  switch (VAR_8->type & VAR_0) {
  case 135:
   FUNC_4();
   break;
  case 138:
   FUNC_3();
   break;
  case 139:
   FUNC_2();
   break;
  case 137:
   asm volatile("lwsync" : : : "memory");
   break;
  case 136:
   asm volatile("ptesync" : : : "memory");
   break;
  }
  break;

 case 132:
  switch (VAR_8->spr) {
  case 128:
   VAR_7->gpr[VAR_8->reg] = VAR_7->xer & 0xffffffffUL;
   break;
  case 129:
   VAR_7->gpr[VAR_8->reg] = VAR_7->link;
   break;
  case 130:
   VAR_7->gpr[VAR_8->reg] = VAR_7->ctr;
   break;
  default:
   FUNC_1(1);
  }
  break;

 case 131:
  switch (VAR_8->spr) {
  case 128:
   VAR_7->xer = VAR_8->val & 0xffffffffUL;
   break;
  case 129:
   VAR_7->link = VAR_8->val;
   break;
  case 130:
   VAR_7->ctr = VAR_8->val;
   break;
  default:
   FUNC_1(1);
  }
  break;

 default:
  FUNC_1(1);
 }
 VAR_7->nip = VAR_9;
}
