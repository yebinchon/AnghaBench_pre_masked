
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {scalar_t__ prev; int type; int long_unique_visitors; int last_month_unique_visitors; int last_week_unique_visitors; int visitors; int timezone; void** subcnt; void* mask_subcnt; void* visitors_source; void* visitors_geoip_countries; void* visitors_countries; void* visitors_sex_age; void* visitors_cities; void* visitors_section; void* visitors_polit; void* visitors_mstatus; void* visitors_age; scalar_t__ visitors_sex; void* valid_until; void* created_at; void* deletes; void* unique_visitors; void* views; void* counter_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (void*) ;
 int VAR_7 ;
 int FUNC_3 (void*) ;
 struct counter* FUNC_4 (int ,int) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 () ;
 void* FUNC_10 () ;
 void* FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int VAR_8 ;
 void** FUNC_14 (int) ;

struct counter* FUNC_15 (int VAR_9) {
  int VAR_10,VAR_11;
  struct counter *VAR_12 = FUNC_4 (0, -1);
  FUNC_0 (VAR_12->prev == 0);
  if (VAR_7 >= 4) {
    VAR_12->counter_id = FUNC_11 ();
  } else {
    VAR_12->counter_id = FUNC_10 ();
  }
  VAR_12->created_at = FUNC_10 ();
  VAR_12->type = FUNC_10 ();
  if (VAR_0) {
    VAR_12->type = (VAR_12->type & 0xffff0000) | FUNC_2 (VAR_12->counter_id);
  }
  VAR_12->views = FUNC_10 ();
  VAR_12->unique_visitors = FUNC_10 ();
  VAR_12->deletes = FUNC_10 ();
  VAR_12->created_at = FUNC_10 ();
  VAR_12->valid_until = FUNC_10 ();
  if (VAR_7 >= 3) {
    VAR_12->long_unique_visitors = FUNC_10 ();
    VAR_12->last_month_unique_visitors = FUNC_10 ();
    VAR_12->last_week_unique_visitors = FUNC_10 ();
  } else if (VAR_7 >= 2) {
    VAR_12->long_unique_visitors = FUNC_10 ();
    VAR_12->last_month_unique_visitors = FUNC_10 ();
    VAR_12->last_week_unique_visitors = -1;
  } else {
    VAR_12->long_unique_visitors = -1;
    VAR_12->last_month_unique_visitors = -1;
    VAR_12->last_week_unique_visitors = FUNC_10 ();
  }
  FUNC_8 ((char *)VAR_12->visitors_sex, sizeof (int) * 2);
  int VAR_13 = FUNC_10 ();
  if (VAR_13 & (1 << 0)) { VAR_12->visitors_age = FUNC_5 (VAR_1); }
  if (VAR_13 & (1 << 1)) { VAR_12->visitors_mstatus = FUNC_5 (VAR_2); }
  if (VAR_13 & (1 << 2)) { VAR_12->visitors_polit = FUNC_5 (VAR_3); }
  if (VAR_13 & (1 << 3)) { VAR_12->visitors_section = FUNC_5 (VAR_4); }
  if (VAR_13 & (1 << 4)) { VAR_12->visitors_cities = FUNC_6 (); }
  if (VAR_13 & (1 << 5)) { VAR_12->visitors_sex_age = FUNC_5 (VAR_5); }
  if (VAR_13 & (1 << 6)) { VAR_12->visitors_countries = FUNC_6 (); }
  if (VAR_13 & (1 << 7)) { VAR_12->visitors_geoip_countries = FUNC_6 (); }
  if (VAR_13 & (1 << 8)) { VAR_12->visitors_source = FUNC_5 (VAR_6); }
  if (VAR_7 == 0) {
    int VAR_14 = FUNC_10 ();
    if (VAR_14 > 0) {
      FUNC_1 (VAR_8, "Dropping old data about subcounters.\n");
    }
    FUNC_12 (VAR_14 * sizeof (int));
    VAR_12->mask_subcnt = 0;
  } else {
    VAR_12->mask_subcnt = FUNC_11();
  }
  VAR_11 = FUNC_3(VAR_12->mask_subcnt);
  if (VAR_11 > 0) {
    VAR_12->subcnt = FUNC_14(sizeof(int) * VAR_11);
    for(VAR_10=0; VAR_10 < VAR_11; VAR_10++) {
      VAR_12->subcnt[VAR_10] = FUNC_10();
    }
  }



  VAR_12->timezone = FUNC_9 ();
  if (VAR_9) { VAR_12->visitors = FUNC_7 (); }
  else { FUNC_13 (); }
  FUNC_0 (VAR_12->prev == 0);
  return VAR_12;
}
