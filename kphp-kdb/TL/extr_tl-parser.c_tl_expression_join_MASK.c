
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {int text; struct tl_token* next; } ;
struct tl_expression {struct tl_token* right; int magic; struct tl_token* left; } ;
struct tl_compiler {int dummy; } ;
struct tl_buffer {int buff; scalar_t__ pos; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (struct tl_compiler*,struct tl_expression*,int ) ;
 int FUNC_2 (struct tl_buffer*,char) ;
 int FUNC_3 (struct tl_buffer*,int ) ;
 int FUNC_4 (struct tl_buffer*) ;
 int FUNC_5 (struct tl_buffer*) ;
 int FUNC_6 (struct tl_buffer*,char*,int ) ;

char *FUNC_7 (struct tl_compiler *VAR_0, struct tl_expression *VAR_1, int VAR_2) {
  struct tl_token *VAR_3;
  struct tl_buffer VAR_4;
  FUNC_5 (&VAR_4);
  for (VAR_3 = VAR_1->left; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
    if (VAR_4.pos) {
      FUNC_2 (&VAR_4, ' ');
    }
    FUNC_3 (&VAR_4, VAR_3->text);
    if (VAR_2 && VAR_3 == VAR_1->left) {
      FUNC_6 (&VAR_4, "#%x", VAR_1->magic);
    }
  }
  if (VAR_1->right) {
    FUNC_2 (&VAR_4, ' ');
    FUNC_2 (&VAR_4, '=');
    for (VAR_3 = VAR_1->right; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
      FUNC_2 (&VAR_4, ' ');
      FUNC_3 (&VAR_4, VAR_3->text);
    }
  }
  FUNC_2 (&VAR_4, 0);
  int VAR_5 = FUNC_1 (VAR_0, VAR_1, VAR_4.buff);
  if (VAR_5 < 0) {
    FUNC_4 (&VAR_4);
    return ((void*)0);
  }
  char *VAR_6 = FUNC_0 (VAR_4.buff);
  FUNC_4 (&VAR_4);
  return VAR_6;
}
