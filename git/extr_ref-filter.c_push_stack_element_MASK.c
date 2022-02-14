
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_formatting_stack {struct ref_formatting_stack* prev; int output; } ;


 int FUNC_0 (int *,int ) ;
 struct ref_formatting_stack* FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct ref_formatting_stack **VAR_0)
{
 struct ref_formatting_stack *VAR_1 = FUNC_1(1, sizeof(struct ref_formatting_stack));

 FUNC_0(&VAR_1->output, 0);
 VAR_1->prev = *VAR_0;
 *VAR_0 = VAR_1;
}
