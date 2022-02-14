
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tsdn_t ;
typedef size_t szind_t ;
typedef int extent_t ;
struct TYPE_8__ {int lock; } ;
typedef TYPE_2__ bin_t ;
struct TYPE_9__ {TYPE_1__* bins; } ;
typedef TYPE_3__ arena_t ;
struct TYPE_7__ {TYPE_2__* bin_shards; } ;


 int FUNC_0 (int *,TYPE_3__*,TYPE_2__*,size_t,int *,void*,int) ;
 unsigned int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(tsdn_t *VAR_0, arena_t *VAR_1, extent_t *VAR_2, void *VAR_3) {
 szind_t VAR_4 = FUNC_2(VAR_2);
 unsigned VAR_5 = FUNC_1(VAR_2);
 bin_t *VAR_6 = &VAR_1->bins[VAR_4].bin_shards[VAR_5];

 FUNC_3(VAR_0, &VAR_6->lock);
 FUNC_0(VAR_0, VAR_1, VAR_6, VAR_4, VAR_2, VAR_3,
     0);
 FUNC_4(VAR_0, &VAR_6->lock);
}
