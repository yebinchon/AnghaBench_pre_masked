
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int type; int long_unique_visitors; int last_week_unique_visitors; int views; int unique_visitors; int deletes; int created_at; int valid_until; int* visitors_sex; scalar_t__ mask_subcnt; int visitors_source; int * visitors_geoip_countries; int * visitors_countries; int * visitors_cities; int visitors_sex_age; int visitors_section; int visitors_polit; int visitors_mstatus; int visitors_age; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 char* FUNC_1 (char*,char*,int ,int) ;
 char* FUNC_2 (char*,char*,int *,int ) ;
 char* FUNC_3 (char*,char*,int *,int ) ;
 char* FUNC_4 (char*,struct counter*) ;
 int FUNC_5 (char*,char*,int,...) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_6 (struct counter *VAR_7, char *VAR_8) {
  char *VAR_9 = VAR_8;
  if (!VAR_7) { return 0; }
  if (VAR_7->type == -2) return -2;
  int VAR_10 = 6 + (VAR_7->long_unique_visitors >= 0) + (VAR_7->last_week_unique_visitors >= 0);
  if (VAR_7->visitors_age) { VAR_10++; }
  if (VAR_7->visitors_mstatus) { VAR_10++; }
  if (VAR_7->visitors_polit) { VAR_10++; }
  if (VAR_7->visitors_section) { VAR_10++; }
  if (VAR_7->visitors_cities) { VAR_10++; }
  if (VAR_7->visitors_sex_age) { VAR_10++; }
  if (VAR_7->visitors_countries) { VAR_10++; }
  if (VAR_7->visitors_geoip_countries) { VAR_10++; }
  if (VAR_7->visitors_source) { VAR_10++; }
  if (VAR_7->mask_subcnt) { VAR_10++; }
  VAR_9 += FUNC_5 (VAR_9, "a:%d:{s:5:\"views\";i:%d;s:8:\"visitors\";i:%d;s:7:\"deletes\";i:%d;"
    "s:7:\"created\";i:%d;s:7:\"expires\";i:%d;"
    "s:3:\"sex\";a:2:{i:1;i:%d;i:2;i:%d;}",
    VAR_10, VAR_7->views, VAR_7->unique_visitors, VAR_7->deletes, VAR_7->created_at, VAR_7->valid_until,
    VAR_7->visitors_sex[0], VAR_7->visitors_sex[1]);
  if (VAR_7->long_unique_visitors >= 0) {
    VAR_9 += FUNC_5 (VAR_9, "s:26:\"last_month_unique_visitors\";i:%d;", VAR_7->long_unique_visitors);
  }
  if (VAR_7->last_week_unique_visitors >= 0) {
    VAR_9 += FUNC_5 (VAR_9, "s:25:\"last_week_unique_visitors\";i:%d;", VAR_7->last_week_unique_visitors);
  }
  if (VAR_7->visitors_age) {
    VAR_9 = FUNC_1 (VAR_9, "age", VAR_7->visitors_age, VAR_0);
  }
  if (VAR_7->visitors_mstatus) {
    VAR_9 = FUNC_1 (VAR_9, "marital_status", VAR_7->visitors_mstatus, VAR_1);
  }
  if (VAR_7->visitors_polit) {
    VAR_9 = FUNC_1 (VAR_9, "political_views", VAR_7->visitors_polit, VAR_2);
  }
  if (VAR_7->visitors_section) {
    VAR_9 = FUNC_1 (VAR_9, "section", VAR_7->visitors_section, VAR_3);
  }
  if (VAR_7->visitors_sex_age) {
    VAR_9 = FUNC_1 (VAR_9, "sex_age", VAR_7->visitors_sex_age, VAR_0 * 2);
  }
  if (VAR_7->visitors_cities) {
    VAR_9 = FUNC_2 (VAR_9, "cities", VAR_7->visitors_cities, VAR_7->visitors_cities[-1]);
  }
  if (VAR_7->visitors_countries) {
    VAR_9 = FUNC_3 (VAR_9, "countries", VAR_7->visitors_countries, VAR_7->visitors_countries[-1]);
  }
  if (VAR_7->visitors_geoip_countries) {
    VAR_9 = FUNC_3 (VAR_9, "geoip_countries", VAR_7->visitors_geoip_countries, VAR_7->visitors_geoip_countries[-1]);
  }
  if (VAR_7->visitors_source) {
    VAR_9 = FUNC_1 (VAR_9, "sources", VAR_7->visitors_source, VAR_4);
  }
  if (VAR_7->mask_subcnt) {
    VAR_9 = FUNC_4 (VAR_9, VAR_7);
  }
  *VAR_9++ = '}';
  *VAR_9 = 0;
  if (VAR_6 >= 4) {
    FUNC_0 (VAR_5, "%s\n", VAR_8);
  }
  return VAR_9 - VAR_8;
}
