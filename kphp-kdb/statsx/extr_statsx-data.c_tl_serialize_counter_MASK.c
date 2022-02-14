
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int valid_until; int created_at; int deletes; int last_week_unique_visitors; int last_month_unique_visitors; int visitors_sex_age; int unique_visitors; int views; int visitors_source; int visitors_countries; int visitors_geoip_countries; int visitors_cities; int visitors_section; int visitors_polit; int visitors_mstatus; int visitors_age; int visitors_sex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct counter*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct counter*) ;
 int FUNC_5 (int ) ;

void FUNC_6 (struct counter *VAR_25, int VAR_26) {
  FUNC_0 (VAR_25);
  if (VAR_26 & VAR_18) {
    FUNC_1 (VAR_25->visitors_sex, VAR_4);
  }
  if (VAR_26 & VAR_7) {
    FUNC_1 (VAR_25->visitors_age, VAR_0);
  }
  if (VAR_26 & VAR_15) {
    FUNC_1 (VAR_25->visitors_mstatus, VAR_1);
  }
  if (VAR_26 & VAR_16) {
    FUNC_1 (VAR_25->visitors_polit, VAR_2);
  }
  if (VAR_26 & VAR_17) {
    FUNC_1 (VAR_25->visitors_section, VAR_3);
  }
  if (VAR_26 & VAR_8) {
    FUNC_2 (VAR_25->visitors_cities);
  }
  if (VAR_26 & VAR_13) {
    FUNC_3 (VAR_25->visitors_geoip_countries);
  }
  if (VAR_26 & VAR_9) {
    FUNC_3 (VAR_25->visitors_countries);
  }
  if (VAR_26 & VAR_20) {
    FUNC_1 (VAR_25->visitors_source, VAR_6);
  }
  if (VAR_26 & VAR_22) {
    FUNC_5 (VAR_25->views);
  }
  if (VAR_26 & VAR_23) {
    FUNC_5 (VAR_25->unique_visitors);
  }
  if (VAR_26 & VAR_19) {
    FUNC_1 (VAR_25->visitors_sex_age, VAR_5);
  }
  if (VAR_26 & VAR_14) {
    FUNC_5 (VAR_25->last_month_unique_visitors);
  }
  if (VAR_26 & VAR_24) {
    FUNC_5 (VAR_25->last_week_unique_visitors);
  }
  if (VAR_26 & VAR_10) {
    FUNC_5 (VAR_25->deletes);
  }
  if (VAR_26 & VAR_21) {
    FUNC_5 (VAR_25->created_at);
  }
  if (VAR_26 & VAR_11) {
    FUNC_5 (VAR_25->valid_until);
  }
  if (VAR_26 & VAR_12) {
    FUNC_4 (VAR_25);
  }
}
