
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {struct tl_token* next; int text; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1 (struct tl_token *VAR_0, int *VAR_1, int *VAR_2) {
  *VAR_1 = *VAR_2 = 0;
  while (VAR_0 != ((void*)0)) {
    (*VAR_1)++;
    (*VAR_2) += FUNC_0 (VAR_0->text);
    VAR_0 = VAR_0->next;
  }
}
