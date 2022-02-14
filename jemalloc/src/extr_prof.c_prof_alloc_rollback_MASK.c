
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsd_t ;
typedef int prof_tdata_t ;
struct TYPE_7__ {int prepared; TYPE_1__* tdata; } ;
typedef TYPE_2__ prof_tctx_t ;
struct TYPE_6__ {int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*) ;
 int * FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void
FUNC_10(tsd_t *VAR_1, prof_tctx_t *VAR_2, bool VAR_3) {
 FUNC_1(VAR_0);

 if (FUNC_8(VAR_1) > 0) {
  FUNC_0((uintptr_t)VAR_2 == (uintptr_t)1U);
  return;
 }

 prof_tdata_t *VAR_4;

 if (VAR_3) {






  VAR_4 = FUNC_7(VAR_1, 1);
  if (VAR_4 != ((void*)0)) {
   FUNC_4(VAR_1);
  }
 }

 if ((uintptr_t)VAR_2 > (uintptr_t)1U) {
  FUNC_2(FUNC_9(VAR_1), VAR_2->tdata->lock);
  VAR_2->prepared = 0;
  if (FUNC_6(FUNC_9(VAR_1), VAR_2)) {
   FUNC_5(VAR_1, VAR_2);
  } else {
   FUNC_3(FUNC_9(VAR_1), VAR_2->tdata->lock);
  }
 }
}
