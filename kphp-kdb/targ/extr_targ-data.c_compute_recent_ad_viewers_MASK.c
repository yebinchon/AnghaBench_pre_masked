
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyclic_views_entry {int ad_id; int user_id; } ;


 struct cyclic_views_entry* VAR_0 ;
 struct cyclic_views_entry* VAR_1 ;
 struct cyclic_views_entry* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

int FUNC_2 (int VAR_6) {
  FUNC_0 (VAR_3 <= VAR_4 / 2);
  struct cyclic_views_entry *VAR_7;
  long long *VAR_8 = (long long *) VAR_5;

  if (VAR_0 > VAR_1) {
    for (VAR_7 = VAR_0; VAR_7 < VAR_2 + VAR_3; VAR_7++) {
      if (VAR_7->ad_id == VAR_6) {
 *VAR_8++ = VAR_7->user_id;
      }
    }
    for (VAR_7 = VAR_2; VAR_7 < VAR_1; VAR_7++) {
      if (VAR_7->ad_id == VAR_6) {
 *VAR_8++ = VAR_7->user_id;
      }
    }
  } else {
    for (VAR_7 = VAR_0; VAR_7 < VAR_1; VAR_7++) {
      if (VAR_7->ad_id == VAR_6) {
 *VAR_8++ = VAR_7->user_id;
      }
    }
  }
  int VAR_9 = VAR_8 - (long long *)VAR_5;
  return FUNC_1 (VAR_9);
}
