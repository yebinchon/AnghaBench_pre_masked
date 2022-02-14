
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_2__ {int buf; } ;
struct ref_formatting_stack {TYPE_1__ output; scalar_t__ at_end_data; } ;
struct align {int width; int position; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*) ;
 int FUNC_1 (TYPE_1__*,struct strbuf*) ;
 int FUNC_2 (struct strbuf*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ref_formatting_stack **VAR_1)
{
 struct ref_formatting_stack *VAR_2 = *VAR_1;
 struct align *VAR_3 = (struct align *)VAR_2->at_end_data;
 struct strbuf VAR_4 = VAR_0;

 FUNC_2(&VAR_4, VAR_3->position, VAR_3->width, VAR_2->output.buf);
 FUNC_1(&VAR_2->output, &VAR_4);
 FUNC_0(&VAR_4);
}
