
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct pt_regs*,int,int) ;

__attribute__((used)) static int FUNC_1(struct pt_regs *VAR_6, unsigned int VAR_7)
{
 if ((VAR_7 & VAR_1) == VAR_5 && (VAR_7 & VAR_0) == VAR_3) {
  int VAR_8 = (VAR_7 & VAR_2) >> 11;
  int VAR_9 = (VAR_7 & VAR_4) >> 16;

  FUNC_0(VAR_6, VAR_8, VAR_9);
  return 0;
 }


 return -1;
}
