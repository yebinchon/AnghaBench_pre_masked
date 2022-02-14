
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_info {unsigned long* begin; unsigned long* end; unsigned long* next_sp; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(unsigned long *VAR_3, struct stack_info *VAR_4)
{
 unsigned long *VAR_5 = (unsigned long *)FUNC_0(VAR_2);
 unsigned long *VAR_6 = VAR_5 + (VAR_1 / sizeof(long));





 if (VAR_3 < VAR_5 || VAR_3 > VAR_6)
  return 0;

 VAR_4->type = VAR_0;
 VAR_4->begin = VAR_5;
 VAR_4->end = VAR_6;





 VAR_4->next_sp = (unsigned long *)*VAR_5;

 return 1;
}
