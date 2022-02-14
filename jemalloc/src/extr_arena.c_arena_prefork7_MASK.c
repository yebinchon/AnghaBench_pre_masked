
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_6__ {TYPE_1__* bins; } ;
typedef TYPE_2__ arena_t ;
struct TYPE_7__ {unsigned int n_shards; } ;
struct TYPE_5__ {int * bin_shards; } ;


 unsigned int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,int *) ;

void
FUNC_1(tsdn_t *VAR_2, arena_t *VAR_3) {
 for (unsigned VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  for (unsigned VAR_5 = 0; VAR_5 < VAR_1[VAR_4].n_shards; VAR_5++) {
   FUNC_0(VAR_2, &VAR_3->bins[VAR_4].bin_shards[VAR_5]);
  }
 }
}
