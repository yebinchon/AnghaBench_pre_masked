
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int pc; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*,int) ;
 scalar_t__ FUNC_1 (char**,unsigned long*) ;

__attribute__((used)) static void FUNC_2(struct pt_regs *VAR_1,
    char *VAR_2)
{
 unsigned long VAR_3;
 char *VAR_4;

 VAR_4 = &VAR_2[1];
 if (FUNC_1(&VAR_4, &VAR_3))
  FUNC_0(VAR_1, VAR_3);
 else if (VAR_0 == 1)
  FUNC_0(VAR_1, VAR_1->pc + 4);

 VAR_0 = 0;
}
