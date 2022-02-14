
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int msr; } ;




 int VAR_0 ;



 int FUNC_0 () ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_1)
{
 switch (VAR_1->msr & VAR_0) {
 case 132:
  FUNC_3(1);
 case 131:





  break;
 case 130:
  return FUNC_0();
 default:

  return 0;
 }

 return 1;
}
