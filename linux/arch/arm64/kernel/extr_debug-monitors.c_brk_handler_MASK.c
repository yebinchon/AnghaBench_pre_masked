
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pt_regs*,unsigned int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_3, unsigned int VAR_4,
         struct pt_regs *VAR_5)
{
 if (FUNC_0(VAR_5, VAR_4) == VAR_0)
  return 0;

 if (FUNC_3(VAR_5)) {
  FUNC_2(VAR_2);
 } else {
  FUNC_1("Unexpected kernel BRK exception at EL1\n");
  return -VAR_1;
 }

 return 0;
}
