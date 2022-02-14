
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ json_pretty_print; } ;
typedef int FILE ;


 size_t FUNC_0 (char const***) ;
 int FUNC_1 (char const*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char const*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_5 (FILE * VAR_1)
{
  int VAR_2 = 0;
  size_t VAR_3 = 0;


  static const char *VAR_4[][2] = {
    {"theme" , 142} ,
    {"dark_gray" , 152} ,
    {"bright" , 154} ,
    {"dark_blue" , 153} ,
    {"dark_purple" , 151} ,
    {"panels" , 144} ,
    {"items_per_page" , 146} ,
    {"tables" , 143} ,
    {"display_tables" , 150} ,
    {"ah_small" , 156} ,
    {"ah_small_title" , 155} ,
    {"layout" , 145} ,
    {"horizontal" , 147} ,
    {"vertical" , 141} ,
    {"file_opts" , 148} ,
    {"export_json" , 149} ,
    {"panel_opts" , 133} ,
    {"previous" , 131} ,
    {"next" , 134} ,
    {"first" , 136} ,
    {"last" , 135} ,
    {"chart_opts" , 137} ,
    {"chart" , 138} ,
    {"type" , 129} ,
    {"area_spline" , 140} ,
    {"bar" , 139} ,
    {"plot_metric" , 132} ,
    {"table_columns" , 130} ,
    {"thead" , 128} ,
    {"version" , 157} ,
  };



  if (VAR_0.json_pretty_print)
    VAR_2 = 1;

  FUNC_3 (VAR_1, 0);
  for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_4); ++VAR_3) {
    FUNC_4 (VAR_1, VAR_4[VAR_3][0], FUNC_1(VAR_4[VAR_3][1]), VAR_2, 0);
  }
  FUNC_2 (VAR_1, 0, 1);
}
