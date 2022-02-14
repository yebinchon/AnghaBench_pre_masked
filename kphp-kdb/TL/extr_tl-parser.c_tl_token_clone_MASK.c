
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {struct tl_token* next; int text; } ;


 int FUNC_0 (int ) ;
 struct tl_token* FUNC_1 (struct tl_token*) ;
 struct tl_token* FUNC_2 (int) ;

__attribute__((used)) static struct tl_token *FUNC_3 (struct tl_token *VAR_0) {
  struct tl_token *VAR_1 = ((void*)0);
  while (VAR_0 != ((void*)0)) {
    struct tl_token *VAR_2 = FUNC_2 (sizeof (struct tl_token));
    VAR_2->text = FUNC_0 (VAR_0->text);
    VAR_2->next = VAR_1;
    VAR_1 = VAR_2;
    VAR_0 = VAR_0->next;
  }
  return FUNC_1 (VAR_1);
}
