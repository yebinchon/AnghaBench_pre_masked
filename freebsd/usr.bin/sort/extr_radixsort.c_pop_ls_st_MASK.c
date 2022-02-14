
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_level {int dummy; } ;
struct level_stack {struct level_stack* next; struct sort_level* sl; } ;


 struct level_stack* VAR_0 ;
 int FUNC_0 (struct level_stack*) ;

__attribute__((used)) static inline struct sort_level*
FUNC_1(void)
{
 struct sort_level *VAR_1;

 if (VAR_0) {
  struct level_stack *VAR_2;

  VAR_1 = VAR_0->sl;
  VAR_2 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_2);
 } else
  VAR_1 = ((void*)0);

 return (VAR_1);
}
