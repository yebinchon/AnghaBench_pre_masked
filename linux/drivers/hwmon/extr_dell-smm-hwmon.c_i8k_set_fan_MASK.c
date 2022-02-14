
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm_regs {int ebx; int eax; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct smm_regs*) ;

__attribute__((used)) static int FUNC_2(int VAR_4, int VAR_5)
{
 struct smm_regs VAR_6 = { .eax = VAR_1, };

 if (VAR_2)
  return -VAR_0;

 VAR_5 = (VAR_5 < 0) ? 0 : ((VAR_5 > VAR_3) ? VAR_3 : VAR_5);
 VAR_6.ebx = (VAR_4 & 0xff) | (VAR_5 << 8);

 return FUNC_1(&VAR_6) ? : FUNC_0(VAR_4);
}
