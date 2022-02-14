
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {int text; struct tl_token* next; } ;
struct tl_expression {scalar_t__ type; int flag_expanded; struct tl_token* right; int right_name; struct tl_token* left; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tl_token*) ;
 int FUNC_4 (int ,int ) ;
 struct tl_token* FUNC_5 (struct tl_token*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_6 (struct tl_expression *VAR_3, struct tl_expression *VAR_4) {
  FUNC_0 (VAR_4->type == VAR_0);
  FUNC_0 (VAR_3->type == VAR_1);
  struct tl_token *VAR_5 = FUNC_5 (VAR_4->left);
  struct tl_token *VAR_6, *VAR_7, *VAR_8;
  for (VAR_6 = VAR_5->next; VAR_6 != ((void*)0); VAR_6 = VAR_6->next) {
    for (VAR_7 = VAR_4->right->next, VAR_8 = VAR_3->left->next; VAR_7 != ((void*)0); VAR_7 = VAR_7->next, VAR_8 = VAR_8->next) {
      if (!FUNC_4 (VAR_6->text, VAR_7->text)) {
        FUNC_2 (&VAR_6->text);
        VAR_6->text = FUNC_1 (VAR_8->text);
      }
    }
  }
  VAR_3->right = VAR_3->left;
  VAR_3->left = VAR_5;
  VAR_3->type = VAR_2;
  VAR_3->right_name = FUNC_3 (VAR_3->right);
  VAR_3->flag_expanded = 1;
}
