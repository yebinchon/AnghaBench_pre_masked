
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tl_token {char* text; struct tl_token* next; } ;
struct TYPE_2__ {struct tl_token* left; } ;


 TYPE_1__* VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static char *FUNC_3 (const char *VAR_1, int VAR_2) {

  static int VAR_3;
  static struct tl_token *VAR_4 = ((void*)0);
  if (!VAR_2) {
    VAR_4 = ((void*)0);
    if (VAR_0) {
      VAR_4 = VAR_0->left;
      if (VAR_4) {
        VAR_4 = VAR_4->next;
      }
    }
    VAR_3 = FUNC_1 (VAR_1);
  }
  while (VAR_4 != ((void*)0)) {
    char *VAR_5 = VAR_4->text;
    VAR_4 = VAR_4->next;
    if (!FUNC_2 (VAR_5, VAR_1, VAR_3)) {
      return FUNC_0 (VAR_5);
    }
  }
  return ((void*)0);
}
