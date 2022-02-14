
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {int text; struct tl_token* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tl_token*,int) ;

void FUNC_2 (struct tl_token *VAR_0) {
  struct tl_token *VAR_1, *VAR_2;
  for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
    VAR_2 = VAR_1->next;
    FUNC_0 (&VAR_1->text);
    FUNC_1 (VAR_1, sizeof (*VAR_1));
  }
}
