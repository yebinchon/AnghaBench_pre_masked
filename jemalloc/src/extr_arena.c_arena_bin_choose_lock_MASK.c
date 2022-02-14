
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
struct TYPE_9__ {int lock; } ;
typedef TYPE_2__ bin_t ;
struct TYPE_10__ {TYPE_1__* bins; } ;
typedef TYPE_3__ arena_t ;
struct TYPE_12__ {unsigned int n_shards; } ;
struct TYPE_11__ {unsigned int* binshard; } ;
struct TYPE_8__ {TYPE_2__* bin_shards; } ;


 int FUNC_0 (int) ;
 TYPE_5__* VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

bin_t *
FUNC_6(tsdn_t *VAR_1, arena_t *VAR_2, szind_t VAR_3,
    unsigned *VAR_4) {
 bin_t *VAR_5;
 if (FUNC_4(VAR_1) || FUNC_2(FUNC_5(VAR_1)) == ((void*)0)) {
  *VAR_4 = 0;
 } else {
  *VAR_4 = FUNC_3(FUNC_5(VAR_1))->binshard[VAR_3];
 }
 FUNC_0(*VAR_4 < VAR_0[VAR_3].n_shards);
 VAR_5 = &VAR_2->bins[VAR_3].bin_shards[*VAR_4];
 FUNC_1(VAR_1, &VAR_5->lock);

 return VAR_5;
}
