
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {char* text; int section; struct tl_expression* next; } ;
struct tl_compiler {struct tl_expression* expr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,struct tl_expression*,char*) ;
 int VAR_0 ;

void FUNC_2 (struct tl_compiler *VAR_1, char *VAR_2, struct tl_expression *VAR_3) {
  int VAR_4;
  FUNC_1 (VAR_0, "before %s (E: %p, E->text: %s)\n", VAR_2, VAR_3, VAR_3->text);
  for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
    struct tl_expression *VAR_5 = &VAR_1->expr[VAR_4], *VAR_6;
    for (VAR_6 = VAR_5->next; VAR_6 != VAR_5; VAR_6 = VAR_6->next) {
      FUNC_0 (VAR_6->section == VAR_4);
    }
  }
}
