
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ignore_panel_idx; int ignore_panels; int log_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3 (void)
{
  int VAR_4 = VAR_3.ignore_panel_idx;


  if (!VAR_3.log_format)
    return;

  if (!FUNC_2 (VAR_3.log_format, "%v") && VAR_4 < VAR_1) {
    if (FUNC_1 ("VIRTUAL_HOSTS", VAR_3.ignore_panels, VAR_4) < 0)
      FUNC_0 (VAR_2);
  }
  if (!FUNC_2 (VAR_3.log_format, "%e") && VAR_4 < VAR_1) {
    if (FUNC_1 ("REMOTE_USER", VAR_3.ignore_panels, VAR_4) < 0)
      FUNC_0 (VAR_0);
  }
}
