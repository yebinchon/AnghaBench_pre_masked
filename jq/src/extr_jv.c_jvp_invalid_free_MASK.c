
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int errmsg; } ;
typedef TYPE_2__ jvp_invalid ;
struct TYPE_7__ {scalar_t__ ptr; } ;
struct TYPE_9__ {TYPE_1__ u; } ;
typedef TYPE_3__ jv ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__,int ) ;
 int FUNC_1 (TYPE_3__,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(jv VAR_2) {
  FUNC_2(FUNC_1(VAR_2, VAR_1));
  if (FUNC_0(VAR_2, VAR_0) && FUNC_5(VAR_2.u.ptr)) {
    FUNC_3(((jvp_invalid*)VAR_2.u.ptr)->errmsg);
    FUNC_4(VAR_2.u.ptr);
  }
}
