
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_formatting_state {struct ref_formatting_stack* stack; } ;
struct TYPE_2__ {int buf; scalar_t__ len; } ;
struct ref_formatting_stack {scalar_t__ at_end; TYPE_1__ output; scalar_t__ at_end_data; } ;
struct if_then_else {int then_atom_seen; scalar_t__ cmp_status; int condition_satisfied; int str; scalar_t__ else_atom_seen; } ;
struct atom_value {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct strbuf*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct atom_value *VAR_3, struct ref_formatting_state *VAR_4,
        struct strbuf *VAR_5)
{
 struct ref_formatting_stack *VAR_6 = VAR_4->stack;
 struct if_then_else *VAR_7 = ((void*)0);

 if (VAR_6->at_end == VAR_2)
  VAR_7 = (struct if_then_else *)VAR_6->at_end_data;
 if (!VAR_7)
  return FUNC_2(VAR_5, -1, FUNC_0("format: %%(then) atom used without an %%(if) atom"));
 if (VAR_7->then_atom_seen)
  return FUNC_2(VAR_5, -1, FUNC_0("format: %%(then) atom used more than once"));
 if (VAR_7->else_atom_seen)
  return FUNC_2(VAR_5, -1, FUNC_0("format: %%(then) atom used after %%(else)"));
 VAR_7->then_atom_seen = 1;





 if (VAR_7->cmp_status == VAR_0) {
  if (!FUNC_4(VAR_7->str, VAR_6->output.buf))
   VAR_7->condition_satisfied = 1;
 } else if (VAR_7->cmp_status == VAR_1) {
  if (FUNC_4(VAR_7->str, VAR_6->output.buf))
   VAR_7->condition_satisfied = 1;
 } else if (VAR_6->output.len && !FUNC_1(VAR_6->output.buf))
  VAR_7->condition_satisfied = 1;
 FUNC_3(&VAR_6->output);
 return 0;
}
