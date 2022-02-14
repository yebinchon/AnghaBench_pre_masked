
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cache_uri {int last_access; } ;
typedef enum cache_sorted_order { ____Placeholder_cache_sorted_order } cache_sorted_order ;
typedef int cache_top_access_result_t ;
struct TYPE_4__ {struct cache_uri** H; } ;
typedef TYPE_1__ cache_heap_t ;


 int FUNC_0 (int *,TYPE_1__*,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2 (cache_top_access_result_t *VAR_2, int VAR_3, enum cache_sorted_order VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  cache_heap_t VAR_8;
  int VAR_9 = FUNC_1 (&VAR_8, VAR_3, VAR_4, VAR_5, (VAR_6 & 8) ? 1 : 0, (VAR_6 & 16) ? 1 : 0, VAR_7);
  if (VAR_9 < 0) {
    return VAR_9;
  }
  return FUNC_0 (VAR_2, &VAR_8, VAR_9, VAR_6 & (1 + 2 + 4), VAR_7);
}
