
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long ip; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int VAR_1 ;
 int FUNC_1 (char**,unsigned long*) ;
 int FUNC_2 () ;

int FUNC_3(int VAR_2, int VAR_3, int VAR_4,
          char *VAR_5, char *VAR_6,
          struct pt_regs *VAR_7)
{
 unsigned long VAR_8;
 char *VAR_9;

 switch (VAR_5[0]) {
 case 'c':
 case 's':

  VAR_9 = &VAR_5[1];
  if (FUNC_1(&VAR_9, &VAR_8))
   VAR_7->ip = VAR_8;

 case 'D':
 case 'k':

  VAR_7->flags &= ~VAR_0;
  FUNC_0(&VAR_1, -1);


  if (VAR_5[0] == 's') {
   VAR_7->flags |= VAR_0;
   FUNC_0(&VAR_1,
       FUNC_2());
  }

  return 0;
 }


 return -1;
}
