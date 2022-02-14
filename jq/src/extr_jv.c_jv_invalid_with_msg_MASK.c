
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int * member_0; } ;
struct TYPE_11__ {TYPE_1__ member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_10__ {int refcnt; TYPE_3__ errmsg; } ;
typedef TYPE_2__ jvp_invalid ;
typedef TYPE_3__ jv ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__,int ) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int) ;

jv FUNC_2(jv VAR_4) {
  if (FUNC_0(VAR_4, VAR_2))
    return VAR_1;
  jvp_invalid* VAR_5 = FUNC_1(sizeof(jvp_invalid));
  VAR_5->refcnt = VAR_3;
  VAR_5->errmsg = VAR_4;

  jv VAR_6 = {&VAR_0, 0, 0, 0, VAR_5->refcnt};
  return VAR_6;
}
