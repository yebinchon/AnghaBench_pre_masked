
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {scalar_t__ type; int nc; int * c; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;

int FUNC_3 (struct tree *VAR_1) {
  FUNC_1 (VAR_1->type == VAR_0);
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1->nc; VAR_2++) {
    FUNC_0 (FUNC_2 (VAR_1->c[VAR_2], 0));
  }
  return 1;
}
