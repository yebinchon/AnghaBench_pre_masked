
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_expression {scalar_t__ type; char* text; } ;
struct tl_compiler {int flag_output_magic; } ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int *,char*,char*) ;
 char* FUNC_3 (struct tl_compiler*,struct tl_expression*,int) ;
 scalar_t__ VAR_0 ;

void FUNC_4 (FILE *VAR_1, struct tl_compiler *VAR_2, struct tl_expression *VAR_3) {
  int VAR_4 = VAR_2->flag_output_magic;
  if (VAR_3->type != VAR_0) {
    VAR_4 = 0;
  }
  char *VAR_5 = ((void*)0);
  if (VAR_4) {
    VAR_5 = FUNC_3 (VAR_2, VAR_3, 1);
    FUNC_0 (VAR_5 != ((void*)0));
  }
  FUNC_2 (VAR_1, "%s;\n", VAR_5 ? VAR_5 : VAR_3->text);
  if (VAR_5 != ((void*)0)) {
    FUNC_1 (&VAR_5);
  }
}
