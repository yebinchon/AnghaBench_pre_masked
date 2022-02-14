
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {int section; struct tl_expression* next; struct tl_expression* prev; } ;
struct tl_compiler {struct tl_expression* expr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tl_expression*) ;

__attribute__((used)) static void FUNC_2 (struct tl_compiler *VAR_0, int VAR_1) {
  FUNC_0 (VAR_1 >= 0 && VAR_1 < 2);
  struct tl_expression *VAR_2 = &VAR_0->expr[VAR_1], *VAR_3, *VAR_4;
  for (VAR_3 = VAR_2->next; VAR_3 != VAR_2; VAR_3 = VAR_4) {
    FUNC_0 (VAR_3->section == VAR_1);
    VAR_4 = VAR_3->next;
    FUNC_1 (VAR_3);
  }
  VAR_2->prev = VAR_2->next = VAR_2;
}
