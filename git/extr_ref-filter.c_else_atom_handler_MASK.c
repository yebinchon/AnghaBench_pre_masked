
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ref_formatting_state {struct ref_formatting_stack* stack; } ;
struct ref_formatting_stack {scalar_t__ at_end; scalar_t__ at_end_data; } ;
struct if_then_else {int else_atom_seen; int then_atom_seen; } ;
struct atom_value {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ref_formatting_stack**) ;
 int FUNC_2 (struct strbuf*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct atom_value *VAR_1, struct ref_formatting_state *VAR_2,
        struct strbuf *VAR_3)
{
 struct ref_formatting_stack *VAR_4 = VAR_2->stack;
 struct if_then_else *VAR_5 = ((void*)0);

 if (VAR_4->at_end == VAR_0)
  VAR_5 = (struct if_then_else *)VAR_4->at_end_data;
 if (!VAR_5)
  return FUNC_2(VAR_3, -1, FUNC_0("format: %%(else) atom used without an %%(if) atom"));
 if (!VAR_5->then_atom_seen)
  return FUNC_2(VAR_3, -1, FUNC_0("format: %%(else) atom used without a %%(then) atom"));
 if (VAR_5->else_atom_seen)
  return FUNC_2(VAR_3, -1, FUNC_0("format: %%(else) atom used more than once"));
 VAR_5->else_atom_seen = 1;
 FUNC_1(&VAR_2->stack);
 VAR_2->stack->at_end_data = VAR_4->at_end_data;
 VAR_2->stack->at_end = VAR_4->at_end;
 return 0;
}
