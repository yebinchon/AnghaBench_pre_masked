
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyclic_views_entry {int time; } ;


 struct cyclic_views_entry* VAR_0 ;
 struct cyclic_views_entry* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cyclic_views_entry*) ;

struct cyclic_views_entry *FUNC_1 (struct cyclic_views_entry *VAR_3, int VAR_4) {
  while (VAR_3 != VAR_0) {
    if (VAR_3->time > VAR_4) {
      return VAR_3;
    }
    FUNC_0 (VAR_3);
    if (++VAR_3 == VAR_1 + VAR_2) {
      VAR_3 = VAR_1;
      break;
    }
  }
  while (VAR_3 < VAR_0) {
    if (VAR_3->time > VAR_4) {
      return VAR_3;
    }
    FUNC_0 (VAR_3);
    VAR_3++;
  }
  return VAR_3;
}
