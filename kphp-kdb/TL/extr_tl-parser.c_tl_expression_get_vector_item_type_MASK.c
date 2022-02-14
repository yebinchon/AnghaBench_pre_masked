
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {char* text; struct tl_token* next; } ;
struct tl_expression {struct tl_token* right; } ;



char *FUNC_0 (struct tl_expression *VAR_0) {
  if (VAR_0->right == ((void*)0)) {
    return ((void*)0);
  }
  struct tl_token *VAR_1 = VAR_0->right;
  if (VAR_1 == ((void*)0)) {
    return ((void*)0);
  }
  VAR_1 = VAR_1->next;
  if (VAR_1->next != ((void*)0)) {
    return ((void*)0);
  }
  return VAR_1->text;
}
