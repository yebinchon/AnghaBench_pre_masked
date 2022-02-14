
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_cache_access_long {scalar_t__ data; } ;
struct cache_uri {int last_access; } ;
typedef int md5_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cache_uri*) ;
 int VAR_2 ;
 struct cache_uri* FUNC_1 (int *,int) ;
 int FUNC_2 (struct cache_uri*,int) ;
 int FUNC_3 (char*,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4 (struct lev_cache_access_long *VAR_6, int VAR_7) {
  if (!(VAR_2 & VAR_0)) {
    return -1;
  }
  struct cache_uri *VAR_8 = FUNC_1 ((md5_t *) VAR_6->data, 16);
  if (VAR_8 == ((void*)0)) {
    if (VAR_5 >= 1) {
      FUNC_3 ("wrong cache_access_long: ", (md5_t *) VAR_6->data, 16);
    }
    VAR_4++;
    return -1;
  }
  VAR_8->last_access = VAR_3;
  FUNC_2 (VAR_8, VAR_7);
  VAR_1++;
  FUNC_0 (VAR_8);
  return 0;
}
