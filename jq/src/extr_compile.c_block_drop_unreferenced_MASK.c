
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int referenced; struct TYPE_5__* bound_by; } ;
typedef TYPE_1__ inst ;
typedef int block ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

block FUNC_6(block VAR_0) {
  FUNC_1(VAR_0);

  block VAR_1 = FUNC_3();
  inst* VAR_2;
  while ((VAR_2 = FUNC_2(&VAR_0))) {
    if (VAR_2->bound_by == VAR_2 && !VAR_2->referenced) {
      FUNC_5(VAR_2);
    } else {
      VAR_1 = FUNC_0(VAR_1, FUNC_4(VAR_2));
    }
  }
  return VAR_1;
}
