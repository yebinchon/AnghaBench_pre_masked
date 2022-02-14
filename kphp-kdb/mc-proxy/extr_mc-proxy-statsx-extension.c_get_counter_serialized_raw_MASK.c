
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statsx_gather_extra {int visitors_source; int visitors_geoip_countries; int visitors_countries; int visitors_cities; int visitors_sex_age; int visitors_section; int visitors_polit; int visitors_mstatus; int visitors_age; int visitors_sex; int valid_until; int created_at; int deletes; int unique_visitors; int views; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* FUNC_0 (int*,int ,int ) ;
 int* FUNC_1 (int*,int ,int ) ;
 int* FUNC_2 (int*,int ,int) ;
 int* FUNC_3 (int*,struct statsx_gather_extra*) ;

int FUNC_4 (char *VAR_9, struct statsx_gather_extra *VAR_10) {
  int *VAR_11 = (int *)VAR_9;
  *(VAR_11++) = VAR_10->views;
  *(VAR_11++) = VAR_10->unique_visitors;
  *(VAR_11++) = VAR_10->deletes;
  *(VAR_11++) = VAR_10->created_at;
  *(VAR_11++) = VAR_10->valid_until;
  VAR_11 = FUNC_2 (VAR_11, VAR_10->visitors_sex, VAR_7);
  VAR_11 = FUNC_2 (VAR_11, VAR_10->visitors_age, VAR_0);
  VAR_11 = FUNC_2 (VAR_11, VAR_10->visitors_mstatus, VAR_4);
  VAR_11 = FUNC_2 (VAR_11, VAR_10->visitors_polit, VAR_5);
  VAR_11 = FUNC_2 (VAR_11, VAR_10->visitors_section, VAR_6);
  VAR_11 = FUNC_2 (VAR_11, VAR_10->visitors_sex_age, VAR_0 * 2);
  VAR_11 = FUNC_0 (VAR_11, VAR_10->visitors_cities, VAR_1);
  VAR_11 = FUNC_1 (VAR_11, VAR_10->visitors_countries, VAR_2);
  VAR_11 = FUNC_1 (VAR_11, VAR_10->visitors_geoip_countries, VAR_3);
  VAR_11 = FUNC_2 (VAR_11, VAR_10->visitors_source, VAR_8);
  VAR_11 = FUNC_3 (VAR_11, VAR_10);
  return (char *)VAR_11 - VAR_9;
}
