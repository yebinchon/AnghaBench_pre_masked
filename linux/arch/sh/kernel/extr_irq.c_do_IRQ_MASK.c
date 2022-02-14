
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 struct pt_regs* FUNC_6 (struct pt_regs*) ;

int FUNC_7(unsigned int VAR_2, struct pt_regs *VAR_3)
{
 struct pt_regs *VAR_4 = FUNC_6(VAR_3);

 FUNC_2();

 VAR_2 = FUNC_1(FUNC_5(VAR_2));

 if (VAR_2 != VAR_1) {
  FUNC_0(VAR_2);
  FUNC_4(VAR_2);
 }

 FUNC_3();

 FUNC_6(VAR_4);

 return VAR_0;
}
