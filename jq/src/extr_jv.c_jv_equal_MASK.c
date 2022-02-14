
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ ptr; } ;
struct TYPE_17__ {scalar_t__ kind_flags; scalar_t__ size; TYPE_1__ u; } ;
typedef TYPE_2__ jv ;


 scalar_t__ FUNC_0 (TYPE_2__) ;




 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (TYPE_2__) ;
 int FUNC_3 (TYPE_2__,TYPE_2__) ;
 int FUNC_4 (TYPE_2__,TYPE_2__) ;
 int FUNC_5 (TYPE_2__,TYPE_2__) ;
 int FUNC_6 (TYPE_2__,TYPE_2__) ;

int FUNC_7(jv VAR_0, jv VAR_1) {
  int VAR_2;
  if (FUNC_2(VAR_0) != FUNC_2(VAR_1)) {
    VAR_2 = 0;
  } else if (FUNC_0(VAR_0) &&
             FUNC_0(VAR_1) &&
             VAR_0.kind_flags == VAR_1.kind_flags &&
             VAR_0.size == VAR_1.size &&
             VAR_0.u.ptr == VAR_1.u.ptr) {
    VAR_2 = 1;
  } else {
    switch (FUNC_2(VAR_0)) {
    case 130:
      VAR_2 = FUNC_4(VAR_0, VAR_1);
      break;
    case 131:
      VAR_2 = FUNC_3(VAR_0, VAR_1);
      break;
    case 128:
      VAR_2 = FUNC_6(VAR_0, VAR_1);
      break;
    case 129:
      VAR_2 = FUNC_5(VAR_0, VAR_1);
      break;
    default:
      VAR_2 = 1;
      break;
    }
  }
  FUNC_1(VAR_0);
  FUNC_1(VAR_1);
  return VAR_2;
}
