
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tree {scalar_t__ type; int nc; TYPE_1__** c; } ;
struct TYPE_5__ {int type; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;


 scalar_t__ VAR_0 ;



int FUNC_5 (struct tree *VAR_1, int VAR_2) {
  FUNC_0 (VAR_1->type == VAR_0);
  FUNC_0 (VAR_1->nc == 1);
  switch (VAR_1->c[0]->type) {
  case 130:
    return FUNC_2 (VAR_1->c[0], VAR_2);
  case 128:
    return FUNC_4 (VAR_1->c[0], VAR_2);
  case 129:
    return FUNC_3 (VAR_1->c[0], VAR_2);
  case 131:
    return FUNC_1 (VAR_1->c[0], VAR_2);
  default:
    FUNC_0 (0);
    return 0;
  }
}
