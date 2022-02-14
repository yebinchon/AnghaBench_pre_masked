
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_9__ {scalar_t__ curobjs; size_t curbytes; } ;
struct TYPE_10__ {TYPE_1__* tdata; TYPE_2__ cnts; } ;
typedef TYPE_3__ prof_tctx_t ;
struct TYPE_8__ {int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int *,void const*,size_t,TYPE_3__*) ;
 int FUNC_6 (int *) ;

void
FUNC_7(tsd_t *VAR_0, const void *VAR_1, size_t VAR_2,
    prof_tctx_t *VAR_3) {
 FUNC_1(FUNC_6(VAR_0), VAR_3->tdata->lock);

 FUNC_0(VAR_3->cnts.curobjs > 0);
 FUNC_0(VAR_3->cnts.curbytes >= VAR_2);
 VAR_3->cnts.curobjs--;
 VAR_3->cnts.curbytes -= VAR_2;

 FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);

 if (FUNC_4(FUNC_6(VAR_0), VAR_3)) {
  FUNC_3(VAR_0, VAR_3);
 } else {
  FUNC_2(FUNC_6(VAR_0), VAR_3->tdata->lock);
 }
}
