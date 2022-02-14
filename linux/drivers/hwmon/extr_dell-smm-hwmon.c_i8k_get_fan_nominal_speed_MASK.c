
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm_regs {int eax; int ebx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct smm_regs*) ;

__attribute__((used)) static int FUNC_1(int VAR_4, int VAR_5)
{
 struct smm_regs VAR_6 = { .eax = VAR_1, };

 if (VAR_2)
  return -VAR_0;

 VAR_6.ebx = (VAR_4 & 0xff) | (VAR_5 << 8);
 return FUNC_0(&VAR_6) ? : (VAR_6.eax & 0xffff) * VAR_3;
}
