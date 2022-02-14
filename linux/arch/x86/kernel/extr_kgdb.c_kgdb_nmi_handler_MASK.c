
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int,struct pt_regs*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_4, struct pt_regs *VAR_5)
{
 int VAR_6;

 switch (VAR_4) {
 case 129:
  if (FUNC_1(&VAR_2) != -1) {

   VAR_6 = FUNC_3();
   FUNC_2(VAR_6, VAR_5);
   FUNC_4(VAR_6, VAR_3);
   FUNC_5();

   return VAR_1;
  }
  break;

 case 128:
  VAR_6 = FUNC_3();

  if (FUNC_0(VAR_6, VAR_3))
   return VAR_1;

  break;
 default:

  break;
 }
 return VAR_0;
}
