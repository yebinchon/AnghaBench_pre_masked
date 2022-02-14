
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_info {int * next_sp; void* end; void* begin; int type; } ;
struct entry_stack {int dummy; } ;


 int VAR_0 ;
 struct entry_stack* FUNC_0 (int ) ;
 int FUNC_1 () ;

bool FUNC_2(unsigned long *VAR_1, struct stack_info *VAR_2)
{
 struct entry_stack *VAR_3 = FUNC_0(FUNC_1());

 void *VAR_4 = VAR_3;
 void *VAR_5 = VAR_3 + 1;

 if ((void *)VAR_1 < VAR_4 || (void *)VAR_1 >= VAR_5)
  return 0;

 VAR_2->type = VAR_0;
 VAR_2->begin = VAR_4;
 VAR_2->end = VAR_5;
 VAR_2->next_sp = ((void*)0);

 return 1;
}
