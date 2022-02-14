
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct insn {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct pt_regs*,int) ;
 unsigned long FUNC_1 (struct pt_regs*,int) ;
 int FUNC_2 (struct insn*,struct pt_regs*,int) ;

__attribute__((used)) static int FUNC_3(struct insn *VAR_1, struct pt_regs *VAR_2,
         int VAR_3, unsigned long *VAR_4,
         unsigned long *VAR_5)
{
 int VAR_6;

 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_4 = FUNC_1(VAR_2, VAR_6);
 if (*VAR_4 == -1L)
  return -VAR_0;

 if (!VAR_5)
  return 0;

 *VAR_5 = FUNC_0(VAR_2, VAR_6);
 if (!(*VAR_5))
  return -VAR_0;

 return 0;
}
