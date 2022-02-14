
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_6__ {int pmuzzy; int pdirty; int pactive; int muzzy_decay_ms; int dirty_decay_ms; int dss; int nthreads; TYPE_1__* astats; } ;
typedef TYPE_2__ ctl_arena_t ;
typedef int arena_t ;
struct TYPE_7__ {int curregs; scalar_t__ nflushes; scalar_t__ nfills; scalar_t__ nrequests; scalar_t__ ndalloc; scalar_t__ nmalloc; } ;
struct TYPE_5__ {int allocated_small; TYPE_4__* bstats; int nflushes_small; int nfills_small; int nrequests_small; int ndalloc_small; int nmalloc_small; int estats; int lstats; int astats; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_1 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_4__*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void
FUNC_3(tsdn_t *VAR_2, ctl_arena_t *VAR_3, arena_t *VAR_4) {
 unsigned VAR_5;

 if (VAR_1) {
  FUNC_1(VAR_2, VAR_4, &VAR_3->nthreads,
      &VAR_3->dss, &VAR_3->dirty_decay_ms,
      &VAR_3->muzzy_decay_ms, &VAR_3->pactive,
      &VAR_3->pdirty, &VAR_3->pmuzzy,
      &VAR_3->astats->astats, VAR_3->astats->bstats,
      VAR_3->astats->lstats, VAR_3->astats->estats);

  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_3->astats->allocated_small +=
       VAR_3->astats->bstats[VAR_5].curregs *
       FUNC_2(VAR_5);
   VAR_3->astats->nmalloc_small +=
       VAR_3->astats->bstats[VAR_5].nmalloc;
   VAR_3->astats->ndalloc_small +=
       VAR_3->astats->bstats[VAR_5].ndalloc;
   VAR_3->astats->nrequests_small +=
       VAR_3->astats->bstats[VAR_5].nrequests;
   VAR_3->astats->nfills_small +=
       VAR_3->astats->bstats[VAR_5].nfills;
   VAR_3->astats->nflushes_small +=
       VAR_3->astats->bstats[VAR_5].nflushes;
  }
 } else {
  FUNC_0(VAR_2, VAR_4, &VAR_3->nthreads,
      &VAR_3->dss, &VAR_3->dirty_decay_ms,
      &VAR_3->muzzy_decay_ms, &VAR_3->pactive,
      &VAR_3->pdirty, &VAR_3->pmuzzy);
 }
}
