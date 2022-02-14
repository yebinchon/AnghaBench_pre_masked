
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_formatting_state {struct ref_formatting_stack* stack; } ;
struct ref_formatting_stack {struct if_then_else* at_end_data; int at_end; } ;
struct if_then_else {int cmp_status; int str; } ;
struct atom_value {TYPE_2__* atom; } ;
struct TYPE_4__ {int cmp_status; int str; } ;
struct TYPE_6__ {TYPE_1__ if_then_else; } ;
struct TYPE_5__ {TYPE_3__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct ref_formatting_stack**) ;
 struct if_then_else* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct atom_value *VAR_1, struct ref_formatting_state *VAR_2,
      struct strbuf *VAR_3)
{
 struct ref_formatting_stack *VAR_4;
 struct if_then_else *VAR_5 = FUNC_1(sizeof(struct if_then_else), 1);

 VAR_5->str = VAR_1->atom->u.if_then_else.str;
 VAR_5->cmp_status = VAR_1->atom->u.if_then_else.cmp_status;

 FUNC_0(&VAR_2->stack);
 VAR_4 = VAR_2->stack;
 VAR_4->at_end = VAR_0;
 VAR_4->at_end_data = VAR_5;
 return 0;
}
