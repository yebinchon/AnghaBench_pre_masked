
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* html_report_title; } ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void
FUNC_2 (FILE * VAR_2)
{
  const char *VAR_3 =
    VAR_1.html_report_title ? VAR_1.html_report_title : VAR_0;

  FUNC_1 (VAR_2, "<title>");
  FUNC_0 (VAR_2, (char *) VAR_3);
  FUNC_1 (VAR_2, "</title>");
}
