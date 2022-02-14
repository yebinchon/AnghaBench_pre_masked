
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (struct pt_regs*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 () ;

int FUNC_6(int VAR_2, int VAR_3,
          int VAR_4, char *VAR_5,
          char *VAR_6,
          struct pt_regs *VAR_7)
{
 int VAR_8;

 switch (VAR_5[0]) {
 case 'D':
 case 'k':




 case 'c':
  FUNC_4(VAR_7, VAR_5);
  FUNC_0(&VAR_0, -1);
  VAR_1 = 0;




  if (FUNC_1())
   FUNC_2();

  VAR_8 = 0;
  break;
 case 's':
  FUNC_4(VAR_7, VAR_5);
  FUNC_0(&VAR_0, FUNC_5());
  VAR_1 = 1;




  if (!FUNC_1())
   FUNC_3(VAR_7);
  VAR_8 = 0;
  break;
 default:
  VAR_8 = -1;
 }
 return VAR_8;
}
