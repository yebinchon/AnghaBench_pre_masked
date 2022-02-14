
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pt_regs*,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pt_regs*) ;
 scalar_t__ FUNC_5 (struct pt_regs*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(unsigned long VAR_3, unsigned int VAR_4,
          struct pt_regs *VAR_5)
{
 bool VAR_6 = 0;





 if (!FUNC_2(VAR_5))
  return 0;

 if (!VAR_6 && FUNC_0(VAR_5, VAR_4) == VAR_0)
  VAR_6 = 1;

 if (!VAR_6 && FUNC_5(VAR_5)) {
  FUNC_3(VAR_1);







  FUNC_6(VAR_2);
 } else if (!VAR_6) {
  FUNC_1("Unexpected kernel single-step exception at EL1\n");




  FUNC_4(VAR_5);
 }

 return 0;
}
