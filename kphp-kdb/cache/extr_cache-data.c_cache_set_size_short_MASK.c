
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_cache_set_size_short {int size; scalar_t__ data; } ;
struct cache_uri {int dummy; } ;
typedef int md5_t ;


 int FUNC_0 (struct cache_uri*) ;
 struct cache_uri* FUNC_1 (int *,int) ;
 struct cache_uri* FUNC_2 (struct cache_uri*,int ) ;

void FUNC_3 (struct lev_cache_set_size_short *VAR_0) {
  struct cache_uri *VAR_1 = FUNC_1 ((md5_t *) VAR_0->data, 8);
  FUNC_0 (VAR_1);
  VAR_1 = FUNC_2 (VAR_1, VAR_0->size);
}
