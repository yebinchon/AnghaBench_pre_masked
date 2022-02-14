
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tree {scalar_t__ type; int nc; TYPE_1__** c; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_4 (struct tree *VAR_3, int VAR_4) {
  FUNC_1 (VAR_3->type == VAR_1);
  FUNC_1 (VAR_3->nc == 1);
  if (VAR_3->c[0]->type == VAR_2) {
    return FUNC_2 (VAR_3->c[0], VAR_4);
  } else {
    if (VAR_4) {
      FUNC_0 ("Partial type app in functions block\n");
      VAR_0;
    }
    return FUNC_3 (VAR_3->c[0]);
  }
}
