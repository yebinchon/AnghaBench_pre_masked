
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {struct tl_token* next; } ;
struct tl_expression {struct tl_token* right; } ;


 int FUNC_0 (struct tl_token*) ;
 int FUNC_1 (struct tl_token*) ;

int FUNC_2 (struct tl_expression *VAR_0) {
  struct tl_token *VAR_1 = VAR_0->right;
  if (VAR_1 == ((void*)0)) {
    return 0;
  }
  if (!FUNC_0 (VAR_1)) {
    return 0;
  }
  VAR_1 = VAR_1->next;
  if (VAR_1 == ((void*)0)) {
    return 0;
  }
  while (VAR_1 != ((void*)0)) {
    if (!FUNC_1 (VAR_1)) {
      return 0;
    }
    VAR_1 = VAR_1->next;
  }
  return 1;
}
