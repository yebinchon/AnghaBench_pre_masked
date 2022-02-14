
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pt_regs {int pc; int pstate; } ;
struct TYPE_2__ {scalar_t__ pid; int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,int,struct pt_regs*,int ) ;
 int FUNC_1 (char*,int ,unsigned long,int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct pt_regs *VAR_3, u32 VAR_4)
{
 char *VAR_5;

 FUNC_0(VAR_0, 1, VAR_3, VAR_3->pc);

 if (VAR_4) {
  VAR_5 = "setend be";
  VAR_3->pstate |= VAR_1;
 } else {
  VAR_5 = "setend le";
  VAR_3->pstate &= ~VAR_1;
 }

 FUNC_2(VAR_5, VAR_3->pc);
 FUNC_1("\"%s\" (%ld) uses deprecated setend instruction at 0x%llx\n",
   VAR_2->comm, (unsigned long)VAR_2->pid, VAR_3->pc);

 return 0;
}
