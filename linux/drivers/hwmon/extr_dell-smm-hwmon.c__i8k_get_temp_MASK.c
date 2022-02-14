
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smm_regs {int eax; int ebx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct smm_regs*) ;

__attribute__((used)) static int FUNC_1(int VAR_1)
{
 struct smm_regs VAR_2 = {
  .eax = VAR_0,
  .ebx = VAR_1 & 0xff,
 };

 return FUNC_0(&VAR_2) ? : VAR_2.eax & 0xff;
}
