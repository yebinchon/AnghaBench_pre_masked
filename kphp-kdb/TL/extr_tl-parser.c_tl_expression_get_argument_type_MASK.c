
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_token {char* text; struct tl_token* next; } ;
struct tl_expression {struct tl_token* left; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;

char *FUNC_2 (struct tl_expression *VAR_0, char *VAR_1) {
  if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0)) {
    return ((void*)0);
  }
  struct tl_token *VAR_2 = VAR_0->left;
  if (VAR_2 == ((void*)0)) {
    return ((void*)0);
  }
  int VAR_3 = FUNC_0 (VAR_1);
  VAR_2 = VAR_2->next;
  while (VAR_2 != ((void*)0)) {
    if (!FUNC_1 (VAR_2->text, VAR_1, VAR_3) && VAR_2->text[VAR_3] == ':') {
      return VAR_2->text + (VAR_3 + 1);
    }
    VAR_2 = VAR_2->next;
  }
  return ((void*)0);
}
