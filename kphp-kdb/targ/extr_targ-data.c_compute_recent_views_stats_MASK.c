
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyclic_views_entry {int ad_id; } ;


 struct cyclic_views_entry* VAR_0 ;
 struct cyclic_views_entry* VAR_1 ;
 struct cyclic_views_entry* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

int FUNC_3 (void) {
  if (!VAR_5) {
    VAR_7 = 0;
    return FUNC_1 ();
  }
  FUNC_0 (VAR_3 <= VAR_4 / 2);
  struct cyclic_views_entry *VAR_8;
  long long *VAR_9 = (long long *) VAR_6;

  if (VAR_0 > VAR_1) {
    for (VAR_8 = VAR_0; VAR_8 < VAR_2 + VAR_3; VAR_8++) {
      *VAR_9++ = VAR_8->ad_id;
    }
    for (VAR_8 = VAR_2; VAR_8 < VAR_1; VAR_8++) {
      *VAR_9++ = VAR_8->ad_id;
    }
  } else {
    for (VAR_8 = VAR_0; VAR_8 < VAR_1; VAR_8++) {
      *VAR_9++ = VAR_8->ad_id;
    }
  }
  int VAR_10 = VAR_9 - (long long *)VAR_6;
  return FUNC_2 (VAR_10);
}
