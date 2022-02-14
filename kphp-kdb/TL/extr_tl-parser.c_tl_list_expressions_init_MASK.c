
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {struct tl_expression* next; struct tl_expression* prev; } ;


 int FUNC_0 (int,char*,struct tl_expression*) ;

void FUNC_1 (struct tl_expression *VAR_0) {
  FUNC_0 (4, "tl_list_expressions_init (%p)\n", VAR_0);
  VAR_0->prev = VAR_0->next = VAR_0;
}
