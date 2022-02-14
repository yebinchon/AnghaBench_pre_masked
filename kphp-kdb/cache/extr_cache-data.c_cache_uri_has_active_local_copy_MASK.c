
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union cache_packed_local_copy_location {int dummy; } cache_packed_local_copy_location ;
struct cache_uri {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,union cache_packed_local_copy_location*) ;
 int FUNC_1 (struct cache_uri*,scalar_t__,int ,int ,int *) ;

int FUNC_2 (struct cache_uri *VAR_2) {
  int VAR_3, VAR_4 = FUNC_1 (VAR_2, VAR_1, VAR_0, 0, ((void*)0));
  if (VAR_4 < 0) {
    return -1;
  }
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
    union cache_packed_local_copy_location VAR_5;
    if (FUNC_0 (VAR_1 + VAR_3, &VAR_5) == 1) {
      return 1;
    }
  }
  return 0;
}
