
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sort_panel_idx; int * sort_panels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (int ,char*,char*,char*,char*) ;

void
FUNC_2 (void)
{
  int VAR_4;
  char VAR_5[VAR_1], VAR_6[VAR_0], VAR_7[VAR_2];
  for (VAR_4 = 0; VAR_4 < VAR_3.sort_panel_idx; ++VAR_4) {
    if (FUNC_1
        (VAR_3.sort_panels[VAR_4], "%15[^','],%11[^','],%4s", VAR_5, VAR_6,
         VAR_7) != 3)
      continue;
    FUNC_0 (VAR_5, VAR_6, VAR_7);
  }
}
