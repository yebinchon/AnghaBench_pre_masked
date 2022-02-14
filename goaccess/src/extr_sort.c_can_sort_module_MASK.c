
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int append_method; int append_protocol; int bandwidth; int serve_usecs; } ;
typedef size_t GModule ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int** VAR_7 ;

int
FUNC_0 (GModule VAR_8, int VAR_9)
{
  int VAR_10, VAR_11 = 0;
  for (VAR_10 = 0; -1 != VAR_7[VAR_8][VAR_10]; VAR_10++) {
    if (VAR_7[VAR_8][VAR_10] != VAR_9)
      continue;
    if (VAR_0 == VAR_9 && !VAR_6.serve_usecs)
      continue;
    if (VAR_2 == VAR_9 && !VAR_6.serve_usecs)
      continue;
    if (VAR_3 == VAR_9 && !VAR_6.serve_usecs)
      continue;
    else if (VAR_1 == VAR_9 && !VAR_6.bandwidth)
      continue;
    else if (VAR_5 == VAR_9 && !VAR_6.append_protocol)
      continue;
    else if (VAR_4 == VAR_9 && !VAR_6.append_method)
      continue;

    VAR_11 = 1;
    break;
  }

  return VAR_11;
}
