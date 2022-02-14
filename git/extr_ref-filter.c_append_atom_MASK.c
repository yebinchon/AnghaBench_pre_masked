
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_formatting_state {TYPE_1__* stack; int quote_style; } ;
struct atom_value {int s; } ;
struct TYPE_2__ {int output; int prev; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct atom_value *VAR_0, struct ref_formatting_state *VAR_1,
         struct strbuf *VAR_2)
{






 if (!VAR_1->stack->prev)
  FUNC_0(&VAR_1->stack->output, VAR_0->s, VAR_1->quote_style);
 else
  FUNC_1(&VAR_1->stack->output, VAR_0->s);
 return 0;
}
