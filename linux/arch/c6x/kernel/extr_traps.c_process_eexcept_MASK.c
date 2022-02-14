
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct pt_regs*) ;
 int * VAR_1 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct pt_regs *VAR_2)
{
 int VAR_3;

 FUNC_2("EEXCEPT: PC[0x%lx]\n", VAR_2->pc);

 while ((VAR_3 = FUNC_3()) >= 0)
  FUNC_1(&VAR_1[VAR_3], VAR_2);

 FUNC_0(VAR_0);
}
