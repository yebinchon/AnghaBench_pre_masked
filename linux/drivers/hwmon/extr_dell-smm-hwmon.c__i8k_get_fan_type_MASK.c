
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm_regs {int eax; int ebx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct smm_regs*) ;

__attribute__((used)) static int FUNC_1(int VAR_4)
{
 struct smm_regs VAR_5 = { .eax = VAR_1, };

 if (VAR_2 || VAR_3)
  return -VAR_0;

 VAR_5.ebx = VAR_4 & 0xff;
 return FUNC_0(&VAR_5) ? : VAR_5.eax & 0xff;
}
