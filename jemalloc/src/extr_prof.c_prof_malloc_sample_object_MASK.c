
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_6__ {size_t curbytes; size_t accumbytes; int accumobjs; int curobjs; } ;
struct TYPE_8__ {int prepared; TYPE_2__* tdata; TYPE_1__ cnts; } ;
typedef TYPE_3__ prof_tctx_t ;
typedef int nstime_t ;
struct TYPE_7__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,void const*,int ) ;
 int FUNC_4 (int *,void const*,size_t,int *,TYPE_3__*) ;

void
FUNC_5(tsdn_t *VAR_2, const void *VAR_3, size_t VAR_4,
    prof_tctx_t *VAR_5) {
 FUNC_4(VAR_2, VAR_3, VAR_4, ((void*)0), VAR_5);



 nstime_t VAR_6 = VAR_0;
 FUNC_2(&VAR_6);
 FUNC_3(VAR_2, VAR_3, VAR_6);

 FUNC_0(VAR_2, VAR_5->tdata->lock);
 VAR_5->cnts.curobjs++;
 VAR_5->cnts.curbytes += VAR_4;
 if (VAR_1) {
  VAR_5->cnts.accumobjs++;
  VAR_5->cnts.accumbytes += VAR_4;
 }
 VAR_5->prepared = 0;
 FUNC_1(VAR_2, VAR_5->tdata->lock);
}
