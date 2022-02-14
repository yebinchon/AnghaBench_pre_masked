
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_incr_rate {long long obj_id; } ;


 scalar_t__ VAR_0 ;
 struct lev_search_incr_rate* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (long long,int,int) ;

int FUNC_3 (long long VAR_1, int VAR_2, int VAR_3) {
  if (!FUNC_1 (VAR_1)) { return 0; }
  struct lev_search_incr_rate *VAR_4 = FUNC_0 (VAR_0 + VAR_2, 16, VAR_3);
  VAR_4->obj_id = VAR_1;
  return FUNC_2(VAR_1, VAR_2, VAR_3);
}
