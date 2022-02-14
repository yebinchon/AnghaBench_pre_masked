
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_formatting_stack {int output; struct ref_formatting_stack* prev; } ;


 int FUNC_0 (struct ref_formatting_stack*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ref_formatting_stack **VAR_0)
{
 struct ref_formatting_stack *VAR_1 = *VAR_0;
 struct ref_formatting_stack *VAR_2 = VAR_1->prev;

 if (VAR_2)
  FUNC_1(&VAR_2->output, &VAR_1->output);
 FUNC_2(&VAR_1->output);
 FUNC_0(VAR_1);
 *VAR_0 = VAR_2;
}
