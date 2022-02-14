
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {struct tl_token* next; } ;



__attribute__((used)) static struct tl_token *FUNC_0 (struct tl_token *VAR_0) {
  struct tl_token *VAR_1, *VAR_2, *VAR_3 = ((void*)0);
  for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
    VAR_2 = VAR_1->next;
    VAR_1->next = VAR_3;
    VAR_3 = VAR_1;
  }
  return VAR_3;
}
