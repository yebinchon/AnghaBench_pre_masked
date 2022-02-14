
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tl_token {char* text; struct tl_token* next; } ;
struct tl_expression {int flag_visited; char* right_name; TYPE_2__* right; scalar_t__ flag_expanded; TYPE_1__* left; } ;
struct tl_compiler {int dummy; } ;
struct TYPE_4__ {struct tl_token* next; } ;
struct TYPE_3__ {struct tl_token* next; } ;


 int FUNC_0 (struct tl_compiler*,char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static void FUNC_2 (struct tl_compiler *VAR_0, struct tl_expression *VAR_1) {
  if (VAR_1->flag_visited) {
    return;
  }
  VAR_1->flag_visited = 1;
  struct tl_token *VAR_2;
  for (VAR_2 = VAR_1->left->next; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
    char *VAR_3 = FUNC_1 (VAR_2->text, ':');
    if (VAR_3 == ((void*)0)) {
      FUNC_0 (VAR_0, VAR_3);
    } else {
      FUNC_0 (VAR_0, VAR_3+1);
    }
  }

  if (VAR_1->flag_expanded) {
    for (VAR_2 = VAR_1->right->next; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
      FUNC_0 (VAR_0, VAR_2->text);
    }
  }

  FUNC_0 (VAR_0, VAR_1->right_name);
}
