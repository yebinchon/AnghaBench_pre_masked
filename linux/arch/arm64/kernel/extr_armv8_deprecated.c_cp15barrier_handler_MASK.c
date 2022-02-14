
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pt_regs {int pc; int pstate; } ;
struct TYPE_2__ {scalar_t__ pid; int comm; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pt_regs*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,struct pt_regs*,int ) ;
 int FUNC_7 (char*,int ,unsigned long,int ) ;
 int VAR_4 ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static int FUNC_9(struct pt_regs *VAR_5, u32 VAR_6)
{
 FUNC_6(VAR_2, 1, VAR_5, VAR_5->pc);

 switch (FUNC_0(VAR_6, VAR_5->pstate)) {
 case 129:
  break;
 case 130:

  goto ret;
 case 128:

  return -VAR_0;
 default:
  return -VAR_1;
 }

 switch (FUNC_1(VAR_6)) {
 case 10:




  if (FUNC_2(VAR_6) == 5) {
   FUNC_4(VAR_4);
   FUNC_8(
    "mcr p15, 0, Rt, c7, c10, 5 ; dmb", VAR_5->pc);
  } else {
   FUNC_5(VAR_4);
   FUNC_8(
    "mcr p15, 0, Rt, c7, c10, 4 ; dsb", VAR_5->pc);
  }
  break;
 case 5:






  FUNC_8(
   "mcr p15, 0, Rt, c7, c5, 4 ; isb", VAR_5->pc);
  break;
 }

ret:
 FUNC_7("\"%s\" (%ld) uses deprecated CP15 Barrier instruction at 0x%llx\n",
   VAR_3->comm, (unsigned long)VAR_3->pid, VAR_5->pc);

 FUNC_3(VAR_5, 4);
 return 0;
}
