
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_fpu_soft_struct {int dummy; } ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct sh_fpu_soft_struct *VAR_4, struct pt_regs *VAR_5, int VAR_6,
      int VAR_7)
{
 if (VAR_0) {
  FUNC_0(VAR_7);
  FUNC_1(VAR_1, VAR_3 + VAR_2 + 4);
  VAR_7++;
  FUNC_1(VAR_1, VAR_3 + VAR_2);
 } else {
  FUNC_1(VAR_1, VAR_3 + VAR_2);
 }

 return 0;
}
