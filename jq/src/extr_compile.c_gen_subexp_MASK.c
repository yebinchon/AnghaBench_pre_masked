
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int jv ;
struct TYPE_16__ {TYPE_1__* first; } ;
typedef TYPE_2__ block ;
struct TYPE_15__ {scalar_t__ op; } ;


 TYPE_2__ FUNC_0 (TYPE_2__,TYPE_2__,TYPE_2__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (TYPE_2__) ;
 scalar_t__ FUNC_3 (TYPE_2__) ;
 scalar_t__ FUNC_4 (TYPE_2__) ;
 TYPE_2__ FUNC_5 (int ) ;
 TYPE_2__ FUNC_6 (int ) ;

block FUNC_7(block VAR_4) {
  if (FUNC_3(VAR_4)) {
    return FUNC_6(VAR_0);
  }
  if (FUNC_4(VAR_4) && VAR_4.first->op == VAR_1) {
    jv VAR_5 = FUNC_1(VAR_4);
    FUNC_2(VAR_4);
    return FUNC_5(VAR_5);
  }
  return FUNC_0(FUNC_6(VAR_2), VAR_4, FUNC_6(VAR_3));
}
