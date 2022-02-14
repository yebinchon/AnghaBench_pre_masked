
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int,struct pt_regs*,int ) ;

__attribute__((used)) static int FUNC_1(struct pt_regs *VAR_5, unsigned int VAR_6)
{
 if ((VAR_6 & VAR_1) == VAR_3 && (VAR_6 & VAR_0) == VAR_4) {
  FUNC_0(VAR_2,
    1, VAR_5, 0);
  return 0;
 }

 return -1;
}
