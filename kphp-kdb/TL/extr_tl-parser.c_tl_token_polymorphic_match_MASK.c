
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {struct tl_token* next; int text; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int FUNC_2 (struct tl_token *VAR_0, struct tl_token *VAR_1) {
  FUNC_0 (VAR_0 != ((void*)0) && VAR_1 != ((void*)0));
  if (FUNC_1 (VAR_0->text, VAR_1->text)) {
    return 0;
  }
  while (VAR_0 && VAR_1) {
    VAR_0 = VAR_0->next;
    VAR_1 = VAR_1->next;
  }
  return (VAR_0 == ((void*)0) && VAR_1 == ((void*)0)) ? 1 : 0;
}
