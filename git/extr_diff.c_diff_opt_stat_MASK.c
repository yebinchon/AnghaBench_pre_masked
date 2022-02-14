
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char const* long_name; struct diff_options* value; } ;
struct diff_options {int stat_width; int stat_name_width; int stat_graph_width; int stat_count; int output_format; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_6(const struct option *VAR_1, const char *VAR_2, int VAR_3)
{
 struct diff_options *VAR_4 = VAR_1->value;
 int VAR_5 = VAR_4->stat_width;
 int VAR_6 = VAR_4->stat_name_width;
 int VAR_7 = VAR_4->stat_graph_width;
 int VAR_8 = VAR_4->stat_count;
 char *VAR_9;

 FUNC_1(VAR_3);

 if (!FUNC_4(VAR_1->long_name, "stat")) {
  if (VAR_2) {
   VAR_5 = FUNC_5(VAR_2, &VAR_9, 10);
   if (*VAR_9 == ',')
    VAR_6 = FUNC_5(VAR_9+1, &VAR_9, 10);
   if (*VAR_9 == ',')
    VAR_8 = FUNC_5(VAR_9+1, &VAR_9, 10);
   if (*VAR_9)
    return FUNC_3(FUNC_2("invalid --stat value: %s"), VAR_2);
  }
 } else if (!FUNC_4(VAR_1->long_name, "stat-width")) {
  VAR_5 = FUNC_5(VAR_2, &VAR_9, 10);
  if (*VAR_9)
   return FUNC_3(FUNC_2("%s expects a numerical value"),
         VAR_1->long_name);
 } else if (!FUNC_4(VAR_1->long_name, "stat-name-width")) {
  VAR_6 = FUNC_5(VAR_2, &VAR_9, 10);
  if (*VAR_9)
   return FUNC_3(FUNC_2("%s expects a numerical value"),
         VAR_1->long_name);
 } else if (!FUNC_4(VAR_1->long_name, "stat-graph-width")) {
  VAR_7 = FUNC_5(VAR_2, &VAR_9, 10);
  if (*VAR_9)
   return FUNC_3(FUNC_2("%s expects a numerical value"),
         VAR_1->long_name);
 } else if (!FUNC_4(VAR_1->long_name, "stat-count")) {
  VAR_8 = FUNC_5(VAR_2, &VAR_9, 10);
  if (*VAR_9)
   return FUNC_3(FUNC_2("%s expects a numerical value"),
         VAR_1->long_name);
 } else
  FUNC_0("%s should not get here", VAR_1->long_name);

 VAR_4->output_format |= VAR_0;
 VAR_4->stat_name_width = VAR_6;
 VAR_4->stat_graph_width = VAR_7;
 VAR_4->stat_width = VAR_5;
 VAR_4->stat_count = VAR_8;
 return 0;
}
