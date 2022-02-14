
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_formatting_stack {int output; scalar_t__ at_end_data; struct ref_formatting_stack* prev; } ;
struct if_then_else {scalar_t__ condition_satisfied; scalar_t__ else_atom_seen; int then_atom_seen; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct if_then_else*) ;
 int FUNC_3 (struct ref_formatting_stack**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(struct ref_formatting_stack **VAR_0)
{
 struct ref_formatting_stack *VAR_1 = *VAR_0;
 struct ref_formatting_stack *VAR_2 = VAR_1->prev;
 struct if_then_else *VAR_3 = (struct if_then_else *)VAR_1->at_end_data;

 if (!VAR_3->then_atom_seen)
  FUNC_1(FUNC_0("format: %%(if) atom used without a %%(then) atom"));

 if (VAR_3->else_atom_seen) {





  if (VAR_3->condition_satisfied) {
   FUNC_4(&VAR_1->output);
   FUNC_3(&VAR_1);
  } else {
   FUNC_5(&VAR_1->output, &VAR_2->output);
   FUNC_4(&VAR_1->output);
   FUNC_3(&VAR_1);
  }
 } else if (!VAR_3->condition_satisfied) {




  FUNC_4(&VAR_1->output);
 }

 *VAR_0 = VAR_1;
 FUNC_2(VAR_3);
}
