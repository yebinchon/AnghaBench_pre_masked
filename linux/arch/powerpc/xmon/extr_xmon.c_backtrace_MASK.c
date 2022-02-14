
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* gpr; int nip; int link; } ;


 scalar_t__ FUNC_0 (unsigned long*) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pt_regs *VAR_0)
{
 unsigned long VAR_1;

 if (FUNC_0(&VAR_1))
  FUNC_2(VAR_1, 0, 0);
 else
  FUNC_2(VAR_0->gpr[1], VAR_0->link, VAR_0->nip);
 FUNC_1();
}
