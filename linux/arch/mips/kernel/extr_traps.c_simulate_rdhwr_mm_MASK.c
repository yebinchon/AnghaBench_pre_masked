
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct pt_regs*,int,int) ;

__attribute__((used)) static int FUNC_1(struct pt_regs *VAR_4, unsigned int VAR_5)
{
 if ((VAR_5 & VAR_0) == VAR_1) {
  int VAR_6 = (VAR_5 & VAR_2) >> 16;
  int VAR_7 = (VAR_5 & VAR_3) >> 21;
  FUNC_0(VAR_4, VAR_6, VAR_7);
  return 0;
 }


 return -1;
}
