
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_info {unsigned long low; unsigned long high; int type; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(unsigned long VAR_3, struct stack_info *VAR_4)
{
 unsigned long VAR_5 = (unsigned long)FUNC_0(VAR_2);
 unsigned long VAR_6 = VAR_5 + VAR_0;

 if (!VAR_5)
  return 0;

 if (VAR_3 < VAR_5 || VAR_3 >= VAR_6)
  return 0;

 if (VAR_4) {
  VAR_4->low = VAR_5;
  VAR_4->high = VAR_6;
  VAR_4->type = VAR_1;
 }

 return 1;
}
