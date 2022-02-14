
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct stack_info {unsigned long* begin; unsigned long* end; int * next_sp; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long* FUNC_0 (struct task_struct*) ;

bool FUNC_1(unsigned long *VAR_2, struct task_struct *VAR_3,
     struct stack_info *VAR_4)
{
 unsigned long *VAR_5 = FUNC_0(VAR_3);
 unsigned long *VAR_6 = FUNC_0(VAR_3) + VAR_1;

 if (VAR_2 < VAR_5 || VAR_2 >= VAR_6)
  return 0;

 VAR_4->type = VAR_0;
 VAR_4->begin = VAR_5;
 VAR_4->end = VAR_6;
 VAR_4->next_sp = ((void*)0);

 return 1;
}
