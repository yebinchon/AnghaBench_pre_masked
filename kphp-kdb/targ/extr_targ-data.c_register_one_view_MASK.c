
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyclic_views_entry {int user_id; int time; int ad_id; } ;
struct advert {int recent_views; int ad_id; } ;


 struct cyclic_views_entry* VAR_0 ;
 struct cyclic_views_entry* VAR_1 ;
 struct cyclic_views_entry* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_4 ;

void FUNC_2 (struct advert *VAR_5, int VAR_6) {
  struct cyclic_views_entry *VAR_7 = VAR_1;
  VAR_7->ad_id = VAR_5->ad_id;
  VAR_7->user_id = VAR_6;
  VAR_7->time = VAR_4;
  VAR_5->recent_views++;
  if (++VAR_1 == VAR_2 + VAR_3) {
    VAR_1 = VAR_2;
  }
  if (VAR_1 == VAR_0) {
    FUNC_1 ();
  }
  FUNC_0 ();
}
