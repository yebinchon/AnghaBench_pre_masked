
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int tcache_t ;
struct TYPE_12__ {scalar_t__ nrequests; } ;
struct TYPE_13__ {TYPE_2__ tstats; } ;
typedef TYPE_3__ cache_bin_t ;
struct TYPE_11__ {int nrequests; } ;
struct TYPE_14__ {int lock; TYPE_1__ stats; } ;
typedef TYPE_4__ bin_t ;
struct TYPE_15__ {int stats; } ;
typedef TYPE_5__ arena_t ;


 unsigned int VAR_0 ;
 TYPE_4__* FUNC_0 (int *,TYPE_5__*,unsigned int,unsigned int*) ;
 int FUNC_1 (int *,int *,unsigned int,scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 unsigned int VAR_2 ;
 TYPE_3__* FUNC_4 (int *,unsigned int) ;
 TYPE_3__* FUNC_5 (int *,unsigned int) ;

void
FUNC_6(tsdn_t *VAR_3, tcache_t *VAR_4, arena_t *VAR_5) {
 unsigned VAR_6;

 FUNC_2(VAR_1);


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  cache_bin_t *VAR_7 = FUNC_5(VAR_4, VAR_6);
  unsigned VAR_8;
  bin_t *VAR_9 = FUNC_0(VAR_3, VAR_5, VAR_6, &VAR_8);
  VAR_9->stats.nrequests += VAR_7->tstats.nrequests;
  FUNC_3(VAR_3, &VAR_9->lock);
  VAR_7->tstats.nrequests = 0;
 }

 for (; VAR_6 < VAR_2; VAR_6++) {
  cache_bin_t *VAR_10 = FUNC_4(VAR_4, VAR_6);
  FUNC_1(VAR_3, &VAR_5->stats, VAR_6,
      VAR_10->tstats.nrequests);
  VAR_10->tstats.nrequests = 0;
 }
}
