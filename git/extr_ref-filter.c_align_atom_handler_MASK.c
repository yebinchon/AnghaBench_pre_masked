
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_formatting_state {struct ref_formatting_stack* stack; } ;
struct ref_formatting_stack {int * at_end_data; int at_end; } ;
struct atom_value {TYPE_2__* atom; } ;
struct TYPE_3__ {int align; } ;
struct TYPE_4__ {TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct ref_formatting_stack**) ;

__attribute__((used)) static int FUNC_1(struct atom_value *VAR_1, struct ref_formatting_state *VAR_2,
         struct strbuf *VAR_3)
{
 struct ref_formatting_stack *VAR_4;

 FUNC_0(&VAR_2->stack);
 VAR_4 = VAR_2->stack;
 VAR_4->at_end = VAR_0;
 VAR_4->at_end_data = &VAR_1->atom->u.align;
 return 0;
}
