
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (char*,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,unsigned long,unsigned long,...) ;

void FUNC_3(unsigned long VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{



 FUNC_2("Function entered at [<%08lx>] from [<%08lx>]\n", VAR_0, VAR_1);


 if (FUNC_1(VAR_1))
  FUNC_0("", "Exception stack", VAR_2 + 4, VAR_2 + 4 + sizeof(struct pt_regs));
}
