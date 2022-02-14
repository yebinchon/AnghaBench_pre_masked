
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* html_report_title; scalar_t__ no_html_last_updated; } ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *,char*,char*,...) ;
 char* VAR_3 ;

__attribute__((used)) static void
FUNC_1 (FILE * VAR_4, const char *VAR_5)
{
  FUNC_0 (VAR_4,
  "<nav class='hidden-xs hidden-sm hide'>"
  "</nav>"

  "<i class='spinner fa fa-circle-o-notch fa-spin fa-3x fa-fw'></i>"
  "<div class='container hide'>"
  "<div class='wrap-header'>"
  "<div class='row row-offcanvas row-offcanvas-right'>"
  "<div class='col-md-12'>"
  "<div class='page-header clearfix'>"
  "<div class='pull-right'>"
  "<h4>"
  "<span class='label label-info' style='display:%s'>"
  "<span class='hidden-xs'>%s: </span>"
  "<span class='last-updated'>%s</span>"
  "</span>"
  "</h4>"
  "</div>"
  "<h1>"
  "<span class='hidden-xs hidden-sm'>"
  "<i class='fa fa-tachometer'></i> %s"
  "</span>"
  "<span class='visible-xs visible-sm'>"
  "<i class='fa fa-bars nav-minibars'></i>"
  "<i class='fa fa-circle nav-ws-status mini'></i>"
  "</span>"
  "</h1>", VAR_2.no_html_last_updated ? "none" : "block", VAR_0, VAR_5, VAR_1);

  FUNC_0 (VAR_4,
  "<div class='report-title'>%s</div>"
  "</div>"
  "<div class='wrap-general'></div>"
  "</div>"
  "</div>"
  "</div>"
  "<div class='wrap-panels'></div>"
  "</div>", VAR_2.html_report_title ? VAR_2.html_report_title : "");

  FUNC_0 (VAR_4, "%s", VAR_3);
}
