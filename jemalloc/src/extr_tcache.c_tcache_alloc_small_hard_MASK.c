
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_4__ {int * arena; } ;
typedef TYPE_1__ tcache_t ;
typedef int szind_t ;
typedef int cache_bin_t ;
typedef int arena_t ;


 int FUNC_0 (int *,int *,TYPE_1__*,int *,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,int*,int ) ;

void *
FUNC_3(tsdn_t *VAR_0, arena_t *VAR_1, tcache_t *VAR_2,
    cache_bin_t *VAR_3, szind_t VAR_4, bool *VAR_5) {
 void *VAR_6;

 FUNC_1(VAR_2->arena != ((void*)0));
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_4);

 return VAR_6;
}
