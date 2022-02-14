
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long ea; } ;


 int FUNC_0 (char**,unsigned long*) ;

int FUNC_1(int VAR_0, int VAR_1, int VAR_2,
    char *VAR_3, char *VAR_4,
    struct pt_regs *VAR_5)
{
 char *VAR_6;
 unsigned long VAR_7;

 switch (VAR_3[0]) {
 case 's':
 case 'c':

  VAR_6 = &VAR_3[1];
  if (FUNC_0(&VAR_6, &VAR_7))
   VAR_5->ea = VAR_7;

  return 0;
 }

 return -1;
}
