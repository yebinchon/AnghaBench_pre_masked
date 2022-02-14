
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {scalar_t__ type; int nc; TYPE_1__** c; } ;
struct TYPE_2__ {int text; int len; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;

int FUNC_3 (struct tree *VAR_2) {
  FUNC_1 (VAR_2->type == VAR_1);
  FUNC_1 (VAR_2->nc == 1);
  if (FUNC_2 (VAR_2->c[0]->text, VAR_2->c[0]->len)) {
    FUNC_0 ("New statement: type `%.*s` already declared\n", VAR_2->c[0]->len, VAR_2->c[0]->text);
    VAR_0;
  } else {
    return 1;
  }
}
