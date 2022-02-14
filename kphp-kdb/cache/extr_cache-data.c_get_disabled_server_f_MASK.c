
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_local_copy_server {int id; struct cache_local_copy_server* hnext; } ;


 int VAR_0 ;
 struct cache_local_copy_server** VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 struct cache_local_copy_server* FUNC_1 (int const) ;

struct cache_local_copy_server *FUNC_2 (int VAR_3, int VAR_4) {
  int VAR_5 = VAR_3 % VAR_0;
  FUNC_0 (VAR_5 >= 0 && VAR_5 < VAR_0);
  struct cache_local_copy_server **VAR_6 = VAR_1 + VAR_5, *VAR_7;
  while (*VAR_6) {
    VAR_7 = *VAR_6;
    if (VAR_3 == VAR_7->id) {
      *VAR_6 = VAR_7->hnext;
      if (VAR_4 >= 0) {
        VAR_7->hnext = VAR_1[VAR_5];
        VAR_1[VAR_5] = VAR_7;
      }
      return VAR_7;
    }
    VAR_6 = &VAR_7->hnext;
  }
  if (VAR_4 > 0) {
    VAR_2++;
    const int VAR_8 = sizeof (struct cache_local_copy_server);
    VAR_7 = FUNC_1 (VAR_8);
    VAR_7->id = VAR_3;
    VAR_7->hnext = VAR_1[VAR_5];
    return VAR_1[VAR_5] = VAR_7;
  }
  return ((void*)0);
}
