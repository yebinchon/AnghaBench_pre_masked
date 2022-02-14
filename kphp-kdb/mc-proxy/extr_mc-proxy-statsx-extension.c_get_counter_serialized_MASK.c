
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statsx_gather_extra {int views; int unique_visitors; int deletes; int created_at; int valid_until; int* visitors_sex; int visitors_source; int visitors_geoip_countries; int visitors_countries; int visitors_cities; int visitors_sex_age; int visitors_section; int visitors_polit; int visitors_mstatus; int visitors_age; int subcnt; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,struct statsx_gather_extra*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 char* FUNC_5 (char*,char*,int ,int) ;
 char* FUNC_6 (char*,char*,int ,int) ;
 char* FUNC_7 (char*,char*,int ,int) ;
 char* FUNC_8 (char*,struct statsx_gather_extra*) ;
 int FUNC_9 (char*,char*,int,...) ;
 int VAR_13 ;
 int VAR_14 ;

int FUNC_10 (char *VAR_15, struct statsx_gather_extra *VAR_16) {
  FUNC_4 (VAR_16->visitors_cities, VAR_1);
  if (VAR_11) {
    return FUNC_1 (VAR_15, VAR_16);
  }
  int VAR_17 = 6 + (VAR_10 != 0);
  char *VAR_18 = VAR_15;
  if (!FUNC_2 (VAR_16->visitors_age, VAR_0)) { VAR_17++; }
  if (!FUNC_2 (VAR_16->visitors_mstatus, VAR_4)) { VAR_17++; }
  if (!FUNC_2 (VAR_16->visitors_polit, VAR_5)) { VAR_17++; }
  if (!FUNC_2 (VAR_16->visitors_section, VAR_6)) { VAR_17++; }
  if (!FUNC_3 (VAR_16->visitors_cities, 2 * VAR_1)) { VAR_17++; }
  if (!FUNC_2 (VAR_16->visitors_sex_age, VAR_7)) { VAR_17++; }
  if (!FUNC_2 (VAR_16->visitors_countries, 2 * VAR_2)) { VAR_17++; }
  if (!FUNC_2 (VAR_16->visitors_geoip_countries, 2 * VAR_3)) { VAR_17++; }
  if (!FUNC_2 (VAR_16->visitors_source, VAR_8)) { VAR_17++; }
  if (!FUNC_2 (VAR_16->subcnt, VAR_9)) { VAR_17++; }
  VAR_18 += FUNC_9 (VAR_18, "a:%d:{s:5:\"views\";i:%d;s:8:\"visitors\";i:%d;s:7:\"deletes\";i:%d;"
    "s:7:\"created\";i:%d;s:7:\"expires\";i:%d;"
    "s:3:\"sex\";a:2:{i:1;i:%d;i:2;i:%d;}",
    VAR_17, VAR_16->views, VAR_16->unique_visitors, VAR_16->deletes, VAR_16->created_at, VAR_16->valid_until,
    VAR_16->visitors_sex[0], VAR_16->visitors_sex[1]);
  if (VAR_10) {
    VAR_18 += FUNC_9 (VAR_18, "s:11:\"bad_servers\";i:%d;", VAR_12);
  }
  VAR_18 = FUNC_5 (VAR_18, "age", VAR_16->visitors_age, VAR_0);
  VAR_18 = FUNC_5 (VAR_18, "marital_status", VAR_16->visitors_mstatus, VAR_4);
  VAR_18 = FUNC_5 (VAR_18, "political_views", VAR_16->visitors_polit, VAR_5);
  VAR_18 = FUNC_5 (VAR_18, "section", VAR_16->visitors_section, VAR_6);
  VAR_18 = FUNC_5 (VAR_18, "sex_age", VAR_16->visitors_sex_age, VAR_7);
  VAR_18 = FUNC_6 (VAR_18, "cities", VAR_16->visitors_cities, VAR_1);
  VAR_18 = FUNC_7 (VAR_18, "countries", VAR_16->visitors_countries, VAR_2);
  VAR_18 = FUNC_7 (VAR_18, "geoip_countries", VAR_16->visitors_geoip_countries, VAR_3);
  VAR_18 = FUNC_5 (VAR_18, "sources", VAR_16->visitors_source, VAR_8);
  VAR_18 = FUNC_8 (VAR_18, VAR_16);
  *VAR_18++ = '}';
  *VAR_18 = 0;
  if (VAR_14 >= 4) {
    FUNC_0 (VAR_13, "%s\n", VAR_15);
  }
  return VAR_18 - VAR_15;
}
