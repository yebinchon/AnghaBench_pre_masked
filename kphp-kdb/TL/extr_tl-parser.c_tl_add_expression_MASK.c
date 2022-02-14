
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {int section; struct tl_expression* prev; struct tl_expression* next; int text; int flag_builtin; } ;
struct tl_compiler {struct tl_expression* expr; int flag_reading_builtin_schema; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char*,int,char const*) ;
 struct tl_expression* FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4 (struct tl_compiler *VAR_0, int VAR_1, const char *VAR_2) {
  FUNC_2 (3, "tl_add_expression (section:%d, text:%s)\n", VAR_1, VAR_2);
  FUNC_0 (VAR_1 >= 0 && VAR_1 < 2);
  struct tl_expression *VAR_3 = FUNC_3 (sizeof (struct tl_expression));
  VAR_3->section = VAR_1;
  VAR_3->flag_builtin = VAR_0->flag_reading_builtin_schema;
  struct tl_expression *VAR_4 = &VAR_0->expr[VAR_1];
  VAR_3->text = FUNC_1 (VAR_2);
  struct tl_expression *VAR_5 = VAR_4->prev;
  VAR_5->next = VAR_3; VAR_3->prev = VAR_5;
  VAR_3->next = VAR_4; VAR_4->prev = VAR_3;
}
