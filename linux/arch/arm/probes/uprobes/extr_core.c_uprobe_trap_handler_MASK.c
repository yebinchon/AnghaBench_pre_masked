
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(VAR_4);
 VAR_3 &= 0x0fffffff;
 if (VAR_3 == (VAR_1 & 0x0fffffff))
  FUNC_3(VAR_2);
 else if (VAR_3 == (VAR_0 & 0x0fffffff))
  FUNC_2(VAR_2);
 FUNC_0(VAR_4);

 return 0;
}
