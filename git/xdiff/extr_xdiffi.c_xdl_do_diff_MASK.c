
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int flags; } ;
typedef TYPE_3__ xpparam_t ;
struct TYPE_20__ {int nreff; int rindex; int rchg; int ha; } ;
struct TYPE_19__ {int nreff; int rindex; int rchg; int ha; } ;
struct TYPE_22__ {TYPE_2__ xdf2; TYPE_1__ xdf1; } ;
typedef TYPE_4__ xdfenv_t ;
struct TYPE_23__ {scalar_t__ mxcost; int heur_min; int snake_cnt; } ;
typedef TYPE_5__ xdalgoenv_t ;
typedef int mmfile_t ;
struct TYPE_24__ {int nrec; int rindex; int rchg; int ha; } ;
typedef TYPE_6__ diffdata_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (long) ;
 int FUNC_2 (int *,int *,TYPE_3__ const*,TYPE_4__*) ;
 int FUNC_3 (int *,int *,TYPE_3__ const*,TYPE_4__*) ;
 int FUNC_4 (long*) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int *,int *,TYPE_3__ const*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_6__*,int ,int,TYPE_6__*,int ,int,long*,long*,int,TYPE_5__*) ;

int FUNC_9(mmfile_t *VAR_6, mmfile_t *VAR_7, xpparam_t const *VAR_8,
  xdfenv_t *VAR_9) {
 long VAR_10;
 long *VAR_11, *VAR_12, *VAR_13;
 xdalgoenv_t VAR_14;
 diffdata_t VAR_15, VAR_16;

 if (FUNC_0(VAR_8->flags) == VAR_2)
  return FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9);

 if (FUNC_0(VAR_8->flags) == VAR_0)
  return FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);

 if (FUNC_7(VAR_6, VAR_7, VAR_8, VAR_9) < 0) {

  return -1;
 }







 VAR_10 = VAR_9->xdf1.nreff + VAR_9->xdf2.nreff + 3;
 if (!(VAR_11 = (long *) FUNC_6((2 * VAR_10 + 2) * sizeof(long)))) {

  FUNC_5(VAR_9);
  return -1;
 }
 VAR_12 = VAR_11;
 VAR_13 = VAR_12 + VAR_10;
 VAR_12 += VAR_9->xdf2.nreff + 1;
 VAR_13 += VAR_9->xdf2.nreff + 1;

 VAR_14.mxcost = FUNC_1(VAR_10);
 if (VAR_14.mxcost < VAR_4)
  VAR_14.mxcost = VAR_4;
 VAR_14.snake_cnt = VAR_5;
 VAR_14.heur_min = VAR_3;

 VAR_15 = VAR_9->xdf1.nreff;
 VAR_15 = VAR_9->xdf1.ha;
 VAR_15 = VAR_9->xdf1.rchg;
 VAR_15 = VAR_9->xdf1.rindex;
 VAR_16 = VAR_9->xdf2.nreff;
 VAR_16 = VAR_9->xdf2.ha;
 VAR_16 = VAR_9->xdf2.rchg;
 VAR_16 = VAR_9->xdf2.rindex;

 if (FUNC_8(&VAR_15, 0, VAR_15, &VAR_16, 0, VAR_16,
    VAR_12, VAR_13, (VAR_8->flags & VAR_1) != 0, &VAR_14) < 0) {

  FUNC_4(VAR_11);
  FUNC_5(VAR_9);
  return -1;
 }

 FUNC_4(VAR_11);

 return 0;
}
