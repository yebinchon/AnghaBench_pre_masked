
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ignore_panel_idx; int * ignore_panels; } ;
typedef unsigned int GModule ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1 (GModule VAR_1)
{
  int VAR_2, VAR_3;

  for (VAR_2 = 0; VAR_2 < VAR_0.ignore_panel_idx; ++VAR_2) {
    if ((VAR_3 = FUNC_0 (VAR_0.ignore_panels[VAR_2])) == -1)
      continue;
    if (VAR_1 == (unsigned int) VAR_3) {
      return 1;
    }
  }

  return 0;
}
