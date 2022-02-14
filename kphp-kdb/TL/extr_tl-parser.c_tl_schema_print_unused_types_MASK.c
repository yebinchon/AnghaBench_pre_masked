
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {int flag_builtin; scalar_t__ flag_visited; struct tl_expression* next; } ;
struct tl_compiler {struct tl_expression* expr; } ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct tl_compiler*,struct tl_expression*) ;
 int FUNC_1 (int *,struct tl_compiler*,struct tl_expression*) ;

int FUNC_2 (struct tl_compiler *VAR_2, FILE *VAR_3) {
  struct tl_expression *VAR_4 = &VAR_2->expr[VAR_0], *VAR_5;
  for (VAR_5 = VAR_4->next; VAR_5 != VAR_4; VAR_5 = VAR_5->next) {
    FUNC_0 (VAR_2, VAR_5);
  }
  for (VAR_5 = VAR_4->next; VAR_5 != VAR_4; VAR_5 = VAR_5->next) {
    VAR_5->flag_visited = 0;
  }
  VAR_4 = &VAR_2->expr[VAR_1];
  for (VAR_5 = VAR_4->next; VAR_5 != VAR_4; VAR_5 = VAR_5->next) {
    if (!VAR_5->flag_visited && !VAR_5->flag_builtin) {
      FUNC_1 (VAR_3, VAR_2, VAR_5);
    }
  }
  return 0;
}
