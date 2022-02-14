
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tl_expression {struct tl_expression* next; TYPE_1__* left; } ;
struct TYPE_4__ {struct tl_expression* expr; } ;
struct TYPE_3__ {char* text; } ;


 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static char *FUNC_3 (const char *VAR_2, int VAR_3) {
  static int VAR_4;
  static struct tl_expression *VAR_5;
  if (!VAR_3) {
    VAR_5 = VAR_1.expr[VAR_0].next;
    VAR_4 = FUNC_1 (VAR_2);
  }
  while (VAR_5 != &VAR_1.expr[VAR_0]) {
    char *VAR_6 = VAR_5->left->text;
    VAR_5 = VAR_5->next;
    if (!FUNC_2 (VAR_6, VAR_2, VAR_4)) {
      return FUNC_0 (VAR_6);
    }
  }
  return ((void*)0);
}
