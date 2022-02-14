
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sigscratch {int pt; } ;
typedef int sigset_t ;
struct TYPE_5__ {scalar_t__ pfm_needs_checking; } ;
struct TYPE_7__ {TYPE_1__ thread; } ;
struct TYPE_6__ {int lp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (struct sigscratch*,long) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

void
FUNC_11(sigset_t *VAR_4, struct sigscratch *VAR_5, long VAR_6)
{
 if (FUNC_0(VAR_3, &VAR_5->pt)) {




  if (!FUNC_2(&VAR_5->pt)->lp)
   FUNC_2(&VAR_5->pt)->lp = 1;
  return;
 }
 if (FUNC_8(VAR_2)) {
  FUNC_5();
  FUNC_1(VAR_5, VAR_6);
 }

 if (FUNC_7(VAR_0)) {
  FUNC_5();
  FUNC_9(&VAR_5->pt);
 }


 if (FUNC_10(FUNC_8(VAR_1))) {
  FUNC_5();
  FUNC_3();
 }

 FUNC_4();
}
