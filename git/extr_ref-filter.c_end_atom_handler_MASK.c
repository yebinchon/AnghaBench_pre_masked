
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_formatting_state {struct ref_formatting_stack* stack; int quote_style; } ;
struct TYPE_4__ {int buf; } ;
struct ref_formatting_stack {TYPE_2__ output; TYPE_1__* prev; int (* at_end ) (struct ref_formatting_stack**) ;} ;
struct atom_value {int dummy; } ;
struct TYPE_3__ {int prev; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ref_formatting_stack**) ;
 int FUNC_2 (struct strbuf*,int ,int ) ;
 int FUNC_3 (struct strbuf*,int,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (TYPE_2__*,struct strbuf*) ;
 int FUNC_6 (struct ref_formatting_stack**) ;

__attribute__((used)) static int FUNC_7(struct atom_value *VAR_1, struct ref_formatting_state *VAR_2,
       struct strbuf *VAR_3)
{
 struct ref_formatting_stack *VAR_4 = VAR_2->stack;
 struct strbuf VAR_5 = VAR_0;

 if (!VAR_4->at_end)
  return FUNC_3(VAR_3, -1, FUNC_0("format: %%(end) atom used without corresponding atom"));
 VAR_4->at_end(&VAR_2->stack);


 VAR_4 = VAR_2->stack;






 if (!VAR_4->prev->prev) {
  FUNC_2(&VAR_5, VAR_4->output.buf, VAR_2->quote_style);
  FUNC_5(&VAR_4->output, &VAR_5);
 }
 FUNC_4(&VAR_5);
 FUNC_1(&VAR_2->stack);
 return 0;
}
