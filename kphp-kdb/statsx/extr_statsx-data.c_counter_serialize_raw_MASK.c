
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int visitors_source; int * visitors_geoip_countries; int * visitors_countries; int * visitors_cities; int visitors_sex_age; int visitors_section; int visitors_polit; int visitors_mstatus; int visitors_age; int visitors_sex; int valid_until; int created_at; int deletes; int unique_visitors; int views; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_0 (int*,int *,int ) ;
 int* FUNC_1 (int*,int *,int ) ;
 int* FUNC_2 (int*,int ,int) ;
 int* FUNC_3 (int*,struct counter*) ;

int FUNC_4 (struct counter *VAR_6, char *VAR_7) {
  if (!VAR_6) { return 0; }
  int *VAR_8 = (void *)VAR_7;
  *(VAR_8++) = VAR_6->views;
  *(VAR_8++) = VAR_6->unique_visitors;
  *(VAR_8++) = VAR_6->deletes;
  *(VAR_8++) = VAR_6->created_at;
  *(VAR_8++) = VAR_6->valid_until;
  VAR_8 = FUNC_2 (VAR_8, VAR_6->visitors_sex, VAR_4);
  VAR_8 = FUNC_2 (VAR_8, VAR_6->visitors_age, VAR_0);
  VAR_8 = FUNC_2 (VAR_8, VAR_6->visitors_mstatus, VAR_1);
  VAR_8 = FUNC_2 (VAR_8, VAR_6->visitors_polit, VAR_2);
  VAR_8 = FUNC_2 (VAR_8, VAR_6->visitors_section, VAR_3);
  VAR_8 = FUNC_2 (VAR_8, VAR_6->visitors_sex_age, VAR_0 * 2);
  VAR_8 = FUNC_0 (VAR_8, VAR_6->visitors_cities, VAR_6->visitors_cities ? VAR_6->visitors_cities[-1] : 0);
  VAR_8 = FUNC_1 (VAR_8, VAR_6->visitors_countries, VAR_6->visitors_countries ? VAR_6->visitors_countries[-1] : 0);
  VAR_8 = FUNC_1 (VAR_8, VAR_6->visitors_geoip_countries, VAR_6->visitors_geoip_countries ? VAR_6->visitors_geoip_countries[-1] : 0);
  VAR_8 = FUNC_2 (VAR_8, VAR_6->visitors_source, VAR_5);
  VAR_8 = FUNC_3 (VAR_8, VAR_6);
  return (char *)VAR_8 - VAR_7;
}
