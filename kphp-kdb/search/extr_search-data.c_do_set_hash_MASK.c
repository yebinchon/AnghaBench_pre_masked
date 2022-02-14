
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_set_hash {long long obj_id; long long hash; } ;


 int VAR_0 ;
 struct lev_search_set_hash* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (long long,long long) ;

int FUNC_3 (long long VAR_1, long long VAR_2) {
  if (!FUNC_1 (VAR_1)) { return 0; }
  struct lev_search_set_hash *VAR_3 = FUNC_0 (VAR_0, 20, 0);
  VAR_3->obj_id = VAR_1;
  VAR_3->hash = VAR_2;
  return FUNC_2 (VAR_1, VAR_2);
}
