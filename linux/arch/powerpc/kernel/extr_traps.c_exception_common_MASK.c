
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_3__ {int trap_nr; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int FUNC_0 (struct pt_regs*) ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (char*,struct pt_regs*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,struct pt_regs*,int,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct pt_regs*) ;

__attribute__((used)) static bool FUNC_7(int VAR_1, struct pt_regs *VAR_2, int VAR_3,
         unsigned long VAR_4)
{
 if (!FUNC_6(VAR_2)) {
  FUNC_2("Exception in kernel mode", VAR_2, VAR_1);
  return 0;
 }

 FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);

 if (FUNC_1() && !FUNC_0(VAR_2))
  FUNC_3();

 VAR_0->thread.trap_nr = VAR_3;





 FUNC_5(&VAR_0->thread);

 return 1;
}
