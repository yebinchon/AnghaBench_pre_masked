
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; struct TYPE_5__* hnext; } ;
typedef TYPE_1__ cache_stat_server_t ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int const) ;

cache_stat_server_t *FUNC_2 (int VAR_3, int VAR_4) {
  int VAR_5 = VAR_3 % VAR_1;
  FUNC_0 (VAR_5 >= 0 && VAR_5 < VAR_1);
  cache_stat_server_t **VAR_6 = VAR_0 + VAR_5, *VAR_7;
  while (*VAR_6) {
    VAR_7 = *VAR_6;
    if (VAR_3 == VAR_7->id) {
      *VAR_6 = VAR_7->hnext;
      if (VAR_4 >= 0) {
        VAR_7->hnext = VAR_0[VAR_5];
        VAR_0[VAR_5] = VAR_7;
      }
      return VAR_7;
    }
    VAR_6 = &VAR_7->hnext;
  }
  if (VAR_4 > 0) {
    VAR_2++;
    const int VAR_8 = sizeof (cache_stat_server_t);
    VAR_7 = FUNC_1 (VAR_8);
    VAR_7->id = VAR_3;
    VAR_7->hnext = VAR_0[VAR_5];
    return VAR_0[VAR_5] = VAR_7;
  }
  return ((void*)0);
}
