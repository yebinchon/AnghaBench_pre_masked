
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cache_uri {struct cache_uri* hnext; } ;
struct TYPE_4__ {int* h; } ;
typedef TYPE_1__ md5_t ;


 struct cache_uri** VAR_0 ;
 scalar_t__ FUNC_0 (struct cache_uri*,TYPE_1__ const*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1 (const md5_t *VAR_2, int VAR_3) {
  const int VAR_4 = VAR_2->h[0] % VAR_1;
  struct cache_uri *VAR_5;
  int VAR_6 = 0;
  for (VAR_5 = VAR_0[VAR_4]; VAR_5 != ((void*)0); VAR_5 = VAR_5->hnext) {
    if (FUNC_0 (VAR_5, VAR_2, VAR_3)) {
      if (++VAR_6 > 1) {
        return VAR_6;
      }
    }
  }
  return VAR_6;
}
