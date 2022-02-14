
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct level_stack {struct level_stack* next; } ;


 struct level_stack* VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct level_stack *VAR_1)
{

 VAR_1->next = VAR_0;
 VAR_0 = VAR_1;
}
