
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ json_pretty_print; } ;
struct TYPE_4__ {int redraw_expand; int chart_reverse; int chart_type; int chart_lbl; int chart_key; } ;
typedef TYPE_1__ GHTMLPlot ;
typedef int GChart ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ,int,int ) ;
 int FUNC_4 (int *,char*,int ,int,int ) ;
 int FUNC_5 (int *,int *,int,int) ;

__attribute__((used)) static void
FUNC_6 (FILE * VAR_1, const GHTMLPlot VAR_2, GChart * VAR_3, int VAR_4, int VAR_5)
{
  int VAR_6 = 0, VAR_7 = 0;


  if (VAR_0.json_pretty_print)
    VAR_6 = VAR_5 + 1, VAR_7 = VAR_5 + 2;

  FUNC_4 (VAR_1, "className", VAR_2.chart_key, VAR_6, 0);
  FUNC_4 (VAR_1, "label", VAR_2.chart_lbl, VAR_6, 0);
  FUNC_4 (VAR_1, "chartType", FUNC_0 (VAR_2.chart_type), VAR_6, 0);
  FUNC_3 (VAR_1, "chartReverse", VAR_2.chart_reverse, VAR_6, 0);
  FUNC_3 (VAR_1, "redrawOnExpand", VAR_2.redraw_expand, VAR_6, 0);


  FUNC_2 (VAR_1, "d3", VAR_6);

  FUNC_5 (VAR_1, VAR_3, VAR_4, VAR_7);

  FUNC_1 (VAR_1, VAR_6, 1);
}
