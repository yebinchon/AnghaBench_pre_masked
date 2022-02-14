
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_uri {int dummy; } ;
struct cache_local_copy {int dummy; } ;
typedef int cache_disk_filter_t ;


 int VAR_0 ;
 struct cache_local_copy* VAR_1 ;
 int FUNC_0 (struct cache_uri*,struct cache_local_copy*,int ,int,int *) ;
 scalar_t__ FUNC_1 (struct cache_local_copy*,int *) ;
 int VAR_2 ;

struct cache_local_copy *FUNC_2 (struct cache_uri *VAR_3, cache_disk_filter_t *VAR_4) {
  const int VAR_5 = FUNC_0 (VAR_3, VAR_1, VAR_0, 1, ((void*)0));
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    if (FUNC_1 (VAR_1 + VAR_6, &VAR_2)) {
      return VAR_1 + VAR_6;
    }
  }
  return ((void*)0);
}
