
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {struct tl_expression* next; } ;
struct tl_compiler {int flag_output_magic; } ;
typedef int FILE ;


 int FUNC_0 (int *,struct tl_compiler*,struct tl_expression*) ;

void FUNC_1 (FILE *VAR_0, struct tl_compiler *VAR_1, struct tl_expression *VAR_2) {
  struct tl_expression *VAR_3;
  int VAR_4 = VAR_1->flag_output_magic;
  VAR_1->flag_output_magic = 1;
  for (VAR_3 = VAR_2->next; VAR_3 != VAR_2; VAR_3 = VAR_3->next) {
    FUNC_0 (VAR_0, VAR_1, VAR_3);
  }
  VAR_1->flag_output_magic = VAR_4;
}
