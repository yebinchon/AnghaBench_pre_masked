
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int errmsg; } ;
typedef TYPE_2__ jvp_invalid ;
struct TYPE_11__ {scalar_t__ ptr; } ;
struct TYPE_13__ {TYPE_1__ u; } ;
typedef TYPE_3__ jv ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__,int ) ;
 int FUNC_1 (TYPE_3__,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_3__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__) ;
 TYPE_3__ FUNC_5 () ;

jv FUNC_6(jv VAR_2) {
  FUNC_2(FUNC_1(VAR_2, VAR_1));

  jv VAR_3;
  if (FUNC_0(VAR_2, VAR_0)) {
    VAR_3 = FUNC_3(((jvp_invalid*)VAR_2.u.ptr)->errmsg);
  }
  else {
    VAR_3 = FUNC_5();
  }

  FUNC_4(VAR_2);
  return VAR_3;
}
