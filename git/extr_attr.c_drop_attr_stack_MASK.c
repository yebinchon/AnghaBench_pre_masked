
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_stack {struct attr_stack* prev; } ;


 int FUNC_0 (struct attr_stack*) ;

__attribute__((used)) static void FUNC_1(struct attr_stack **VAR_0)
{
 while (*VAR_0) {
  struct attr_stack *VAR_1 = *VAR_0;
  *VAR_0 = VAR_1->prev;
  FUNC_0(VAR_1);
 }
}
