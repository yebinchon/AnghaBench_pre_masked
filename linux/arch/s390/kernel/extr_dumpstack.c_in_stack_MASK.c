
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_info {int type; unsigned long begin; unsigned long end; } ;
typedef enum stack_type { ____Placeholder_stack_type } stack_type ;



__attribute__((used)) static inline bool FUNC_0(unsigned long VAR_0, struct stack_info *VAR_1,
       enum stack_type VAR_2, unsigned long VAR_3,
       unsigned long VAR_4)
{
 if (VAR_0 < VAR_3 || VAR_0 >= VAR_4)
  return 0;
 VAR_1->type = VAR_2;
 VAR_1->begin = VAR_3;
 VAR_1->end = VAR_4;
 return 1;
}
