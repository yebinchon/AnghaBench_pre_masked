
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cache_uri {struct cache_uri* hnext; } ;
struct TYPE_4__ {int* h; } ;
typedef TYPE_1__ md5_t ;


 struct cache_uri** VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct cache_uri*,TYPE_1__*,int) ;
 int VAR_1 ;

struct cache_uri *FUNC_2 (md5_t *VAR_2, int VAR_3) {
  FUNC_0 (VAR_3 == 8 || VAR_3 == 16);
  const int VAR_4 = VAR_2->h[0] % VAR_1;
  struct cache_uri **VAR_5 = VAR_0 + VAR_4, *VAR_6;
  while (*VAR_5) {
    VAR_6 = *VAR_5;
    if (FUNC_1 (VAR_6, VAR_2, VAR_3)) {
      *VAR_5 = VAR_6->hnext;
      VAR_6->hnext = VAR_0[VAR_4];
      VAR_0[VAR_4] = VAR_6;
      return VAR_6;
    }
    VAR_5 = &VAR_6->hnext;
  }
  return ((void*)0);
}
