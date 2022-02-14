
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long ret; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct pt_regs*) ;
 int VAR_0 ;
 int FUNC_2 (char**,unsigned long*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pt_regs*) ;

int FUNC_5(int VAR_1, int VAR_2, int VAR_3,
          char *VAR_4, char *VAR_5,
          struct pt_regs *VAR_6)
{
 unsigned long VAR_7;
 char *VAR_8;

 FUNC_4(VAR_6);

 switch (VAR_4[0]) {
 case 's':
 case 'c':
  VAR_8 = &VAR_4[1];
  if (FUNC_2(&VAR_8, &VAR_7))
   VAR_6->ret = VAR_7;

 case 'D':
 case 'k':
  FUNC_0(&VAR_0, -1);

  if (VAR_4[0] == 's') {
   FUNC_1(VAR_6);
   FUNC_0(&VAR_0,
       FUNC_3());
  }

  return 0;
 }
 return -1;
}
