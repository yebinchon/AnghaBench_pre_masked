
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_info {unsigned long type; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (unsigned long,struct stack_info*) ;
 int FUNC_1 (unsigned long,struct stack_info*) ;
 int FUNC_2 (unsigned long,struct stack_info*) ;
 scalar_t__ FUNC_3 (unsigned long,struct task_struct*,struct stack_info*) ;

int FUNC_4(unsigned long VAR_3, struct task_struct *VAR_4,
     struct stack_info *VAR_5, unsigned long *VAR_6)
{
 if (!VAR_3)
  goto unknown;

 VAR_4 = VAR_4 ? : VAR_2;


 if (FUNC_3(VAR_3, VAR_4, VAR_5))
  goto recursion_check;

 if (VAR_4 != VAR_2)
  goto unknown;


 if (!FUNC_0(VAR_3, VAR_5) &&
     !FUNC_1(VAR_3, VAR_5) &&
     !FUNC_2(VAR_3, VAR_5))
  goto unknown;

recursion_check:





 if (*VAR_6 & (1UL << VAR_5->type))
  goto unknown;
 *VAR_6 |= 1UL << VAR_5->type;
 return 0;
unknown:
 VAR_5->type = VAR_1;
 return -VAR_0;
}
