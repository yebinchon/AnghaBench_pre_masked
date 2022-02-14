
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int,struct pt_regs*,int ) ;
 int FUNC_1 (struct pt_regs*,unsigned int) ;
 int FUNC_2 (struct pt_regs*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct pt_regs *VAR_4, unsigned int VAR_5)
{
 if ((VAR_5 & VAR_1) == VAR_0) {
  FUNC_0(VAR_2,
    1, VAR_4, 0);
  return FUNC_1(VAR_4, VAR_5);
 }
 if ((VAR_5 & VAR_1) == VAR_3) {
  FUNC_0(VAR_2,
    1, VAR_4, 0);
  return FUNC_2(VAR_4, VAR_5);
 }

 return -1;
}
