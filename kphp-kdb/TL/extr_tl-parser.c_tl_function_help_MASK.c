
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {scalar_t__ flag_visited; struct tl_expression* next; } ;
struct tl_compiler {struct tl_expression* expr; } ;
typedef int FILE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct tl_compiler*,struct tl_expression*) ;
 int FUNC_1 (int *,struct tl_compiler*,struct tl_expression*) ;
 struct tl_expression* FUNC_2 (struct tl_compiler*,int ,char*,int *) ;

int FUNC_3 (struct tl_compiler *VAR_2, char *VAR_3, FILE *VAR_4) {
  struct tl_expression *VAR_5 = FUNC_2 (VAR_2, VAR_0, VAR_3, ((void*)0));
  if (VAR_5 == ((void*)0)) {
    return -1;
  }
  FUNC_0 (VAR_2, VAR_5);
  VAR_5->flag_visited = 0;
  struct tl_expression *VAR_6;
  for (VAR_6 = VAR_2->expr[VAR_1].next; VAR_6 != &VAR_2->expr[VAR_1]; VAR_6 = VAR_6->next) {
    if (VAR_6->flag_visited) {
      FUNC_1 (VAR_4, VAR_2, VAR_6);
      VAR_6->flag_visited = 0;
    }
  }
  FUNC_1 (VAR_4, VAR_2, VAR_5);
  return 0;
}
