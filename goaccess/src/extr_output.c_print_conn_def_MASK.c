
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* ws_url; scalar_t__ port; int real_time_html; scalar_t__ json_pretty_print; } ;
typedef int FILE ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int,int,int) ;
 int FUNC_5 (int *,char*,char*,int,int ) ;

__attribute__((used)) static void
FUNC_6 (FILE * VAR_1)
{
  int VAR_2 = 0;

  if (VAR_0.json_pretty_print)
    VAR_2 += 1;

  if (!VAR_0.real_time_html)
    return;

  FUNC_3 (VAR_1, "<script type='text/javascript'>");
  FUNC_3 (VAR_1, "var connection = ");

  FUNC_2 (VAR_1, VAR_2);
  FUNC_5 (VAR_1, "url", (VAR_0.ws_url ? VAR_0.ws_url : ""), VAR_2, 0);
  FUNC_4 (VAR_1, "port", (VAR_0.port ? FUNC_0 (VAR_0.port) : 7890), VAR_2, 1);
  FUNC_1 (VAR_1, VAR_2, 1);

  FUNC_3 (VAR_1, "</script>");
}
