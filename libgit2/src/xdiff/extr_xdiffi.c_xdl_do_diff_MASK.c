
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
struct TYPE_20__ {int rindex; int rchg; int ha; int nreff; } ;
struct TYPE_19__ {int rindex; int rchg; int ha; int nreff; } ;
struct TYPE_22__ {TYPE_2__ xdf2; TYPE_1__ xdf1; } ;
typedef TYPE_4__ xdfenv_t ;
struct TYPE_23__ {scalar_t__ mxcost; int heur_min; int snake_cnt; } ;
typedef TYPE_5__ xdalgoenv_t ;
typedef int mmfile_t ;
struct TYPE_24__ {int nrec; int rindex; int rchg; int ha; } ;
typedef TYPE_6__ diffdata_t ;


 int FUNC_0 (size_t*,size_t,int) ;
 int FUNC_1 (size_t*,int ,int ,int) ;
 int FUNC_2 (size_t*,size_t,int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int *,int *,TYPE_3__ const*,TYPE_4__*) ;
 int FUNC_6 (int *,int *,TYPE_3__ const*,TYPE_4__*) ;
 int FUNC_7 (long*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (size_t) ;
 scalar_t__ FUNC_10 (int *,int *,TYPE_3__ const*,TYPE_4__*) ;
 scalar_t__ FUNC_11 (TYPE_6__*,int ,int ,TYPE_6__*,int ,int ,long*,long*,int,TYPE_5__*) ;

int FUNC_12(mmfile_t *VAR_6, mmfile_t *VAR_7, xpparam_t const *VAR_8,
  xdfenv_t *VAR_9) {
 size_t VAR_10, VAR_11;
 long *VAR_12, *VAR_13, *VAR_14;
 xdalgoenv_t VAR_15;
 diffdata_t VAR_16, VAR_17;

 if (FUNC_3(VAR_8->flags) == VAR_2)
  return FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9);

 if (FUNC_3(VAR_8->flags) == VAR_0)
  return FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9);

 if (FUNC_10(VAR_6, VAR_7, VAR_8, VAR_9) < 0) {

  return -1;
 }





 FUNC_1(&VAR_10, VAR_9->xdf1.nreff, VAR_9->xdf2.nreff, 3);
 FUNC_2(&VAR_11, VAR_10, 2);
 FUNC_0(&VAR_11, VAR_11, 2);
 FUNC_2(&VAR_11, VAR_11, sizeof(long));

 if (!(VAR_12 = (long *) FUNC_9(VAR_11))) {
  FUNC_8(VAR_9);
  return -1;
 }
 VAR_13 = VAR_12;
 VAR_14 = VAR_13 + VAR_10;
 VAR_13 += VAR_9->xdf2.nreff + 1;
 VAR_14 += VAR_9->xdf2.nreff + 1;

 VAR_15.mxcost = FUNC_4(VAR_10);
 if (VAR_15.mxcost < VAR_4)
  VAR_15.mxcost = VAR_4;
 VAR_15.snake_cnt = VAR_5;
 VAR_15.heur_min = VAR_3;

 VAR_16 = VAR_9->xdf1.nreff;
 VAR_16 = VAR_9->xdf1.ha;
 VAR_16 = VAR_9->xdf1.rchg;
 VAR_16 = VAR_9->xdf1.rindex;
 VAR_17 = VAR_9->xdf2.nreff;
 VAR_17 = VAR_9->xdf2.ha;
 VAR_17 = VAR_9->xdf2.rchg;
 VAR_17 = VAR_9->xdf2.rindex;

 if (FUNC_11(&VAR_16, 0, VAR_16, &VAR_17, 0, VAR_17,
    VAR_13, VAR_14, (VAR_8->flags & VAR_1) != 0, &VAR_15) < 0) {

  FUNC_7(VAR_12);
  FUNC_8(VAR_9);
  return -1;
 }

 FUNC_7(VAR_12);

 return 0;
}
