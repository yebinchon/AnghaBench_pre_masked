
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statsx_gather_extra {int subcnt; int visitors_source; int visitors_geoip_countries; int visitors_countries; int visitors_cities; int visitors_sex_age; int visitors_section; int visitors_polit; int visitors_mstatus; int visitors_age; int visitors_sex; void* valid_until; void* created_at; int deletes; int unique_visitors; int views; } ;
struct gather_entry {int* data; } ;


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
 void* FUNC_0 (void*,int) ;
 int* FUNC_1 (int*,int ,int ) ;
 int* FUNC_2 (int*,int ,int ) ;
 int* FUNC_3 (int*,int ,int) ;

void FUNC_4 (struct gather_entry *VAR_10, struct statsx_gather_extra *VAR_11) {
  int *VAR_12 = VAR_10->data;
  VAR_11->views += *(VAR_12++);
  VAR_11->unique_visitors += *(VAR_12++);
  VAR_11->deletes += *(VAR_12++);
  VAR_11->created_at = FUNC_0 (VAR_11->created_at, *VAR_12);
  VAR_12++;
  VAR_11->valid_until = FUNC_0 (VAR_11->valid_until, *VAR_12);
  VAR_12++;
  VAR_12 = FUNC_3 (VAR_12, VAR_11->visitors_sex, VAR_7);
  VAR_12 = FUNC_3 (VAR_12, VAR_11->visitors_age, VAR_0);
  VAR_12 = FUNC_3 (VAR_12, VAR_11->visitors_mstatus, VAR_4);
  VAR_12 = FUNC_3 (VAR_12, VAR_11->visitors_polit, VAR_5);
  VAR_12 = FUNC_3 (VAR_12, VAR_11->visitors_section, VAR_6);
  VAR_12 = FUNC_3 (VAR_12, VAR_11->visitors_sex_age, VAR_0 * 2);
  VAR_12 = FUNC_2 (VAR_12, VAR_11->visitors_cities, VAR_1);
  VAR_12 = FUNC_1 (VAR_12, VAR_11->visitors_countries, VAR_2);
  VAR_12 = FUNC_1 (VAR_12, VAR_11->visitors_geoip_countries, VAR_3);
  VAR_12 = FUNC_3 (VAR_12, VAR_11->visitors_source, VAR_8);
  VAR_12 = FUNC_3 (VAR_12, VAR_11->subcnt, VAR_9);
}
