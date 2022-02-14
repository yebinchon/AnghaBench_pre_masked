
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_items; scalar_t__ output_format_idx; scalar_t__ real_time_html; int output_stdout; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 (char**,char*,int) ;
 int FUNC_1 (char*) ;

int
FUNC_2 (void)
{
  char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
  int VAR_6 = VAR_0;


  if (VAR_2.max_items <= 0)
    return VAR_2.real_time_html ? VAR_1 : VAR_0;


  if (!VAR_2.output_stdout)
    return VAR_2.max_items > VAR_0 ? VAR_0 : VAR_2.max_items;



  if (VAR_2.real_time_html)
    return VAR_2.max_items > VAR_1 ? VAR_1 : VAR_2.max_items;



  if (FUNC_0 (&VAR_3, "csv", 1) == 0)
    VAR_6 = VAR_2.max_items;

  if (FUNC_0 (&VAR_4, "json", 1) == 0 && VAR_2.max_items > 0)
    VAR_6 = VAR_2.max_items;



  if (FUNC_0 (&VAR_5, "html", 1) == 0 || VAR_2.output_format_idx == 0)
    VAR_6 = VAR_2.max_items > VAR_0 ? VAR_0 : VAR_2.max_items;

  FUNC_1 (VAR_3);
  FUNC_1 (VAR_5);
  FUNC_1 (VAR_4);

  return VAR_6;
}
