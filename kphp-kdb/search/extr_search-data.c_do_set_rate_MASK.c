
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_set_rate {long long obj_id; } ;


 int VAR_0 ;
 struct lev_search_set_rate* FUNC_0 (int ,int,int) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (long long,int) ;

int FUNC_3 (long long VAR_1, int VAR_2) {
  if (!FUNC_1 (VAR_1)) { return 0; }
  struct lev_search_set_rate *VAR_3 = FUNC_0 (VAR_0, 16, VAR_2);
  VAR_3->obj_id = VAR_1;
  return FUNC_2 (VAR_1, VAR_2);
}
