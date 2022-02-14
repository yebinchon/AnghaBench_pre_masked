
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dirty_decay_ms; int muzzy_decay_ms; TYPE_1__* astats; scalar_t__ pmuzzy; scalar_t__ pdirty; scalar_t__ pactive; int dss; scalar_t__ nthreads; } ;
typedef TYPE_2__ ctl_arena_t ;
typedef int bin_stats_t ;
typedef int arena_stats_t ;
typedef int arena_stats_large_t ;
typedef int arena_stats_extents_t ;
struct TYPE_4__ {int * estats; int * lstats; int * bstats; scalar_t__ nflushes_small; scalar_t__ nfills_small; scalar_t__ nrequests_small; scalar_t__ ndalloc_small; scalar_t__ nmalloc_small; scalar_t__ allocated_small; int astats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_1(ctl_arena_t *VAR_6) {
 VAR_6->nthreads = 0;
 VAR_6->dss = VAR_5[VAR_4];
 VAR_6->dirty_decay_ms = -1;
 VAR_6->muzzy_decay_ms = -1;
 VAR_6->pactive = 0;
 VAR_6->pdirty = 0;
 VAR_6->pmuzzy = 0;
 if (VAR_3) {
  FUNC_0(&VAR_6->astats->astats, 0, sizeof(arena_stats_t));
  VAR_6->astats->allocated_small = 0;
  VAR_6->astats->nmalloc_small = 0;
  VAR_6->astats->ndalloc_small = 0;
  VAR_6->astats->nrequests_small = 0;
  VAR_6->astats->nfills_small = 0;
  VAR_6->astats->nflushes_small = 0;
  FUNC_0(VAR_6->astats->bstats, 0, VAR_0 *
      sizeof(bin_stats_t));
  FUNC_0(VAR_6->astats->lstats, 0, (VAR_2 - VAR_0) *
      sizeof(arena_stats_large_t));
  FUNC_0(VAR_6->astats->estats, 0, VAR_1 *
      sizeof(arena_stats_extents_t));
 }
}
