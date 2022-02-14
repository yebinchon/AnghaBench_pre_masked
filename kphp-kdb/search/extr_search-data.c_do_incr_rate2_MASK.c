
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_search_incr_rate_short {long long obj_id; } ;
struct lev_search_incr_rate {long long obj_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (long long,int) ;

int FUNC_3 (long long VAR_2, int VAR_3) {
  if (!FUNC_1 (VAR_2)) { return 0; }
  if (VAR_3 == (signed char) VAR_3) {
    struct lev_search_incr_rate_short *VAR_4 = FUNC_0 (VAR_1 + (VAR_3 & 0xff), 12, 0);
    VAR_4->obj_id = VAR_2;
  } else {
    struct lev_search_incr_rate *VAR_5 = FUNC_0 (VAR_0, 16, VAR_3);
    VAR_5->obj_id = VAR_2;
  }
  return FUNC_2 (VAR_2, VAR_3);
}
