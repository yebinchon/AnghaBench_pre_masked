
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ scanned; int path; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const* const) ;

void FUNC_3 (const char *const VAR_1, int VAR_2) {
  VAR_0[VAR_2].path = FUNC_2 (VAR_1);
  VAR_0[VAR_2].scanned = 0;
  int VAR_3 = FUNC_1 (VAR_2);
  if (VAR_3 < 0) {
    FUNC_0 ("storage_scan_dir (%d) returns error code %d.\n", VAR_2, VAR_3);
  }
}
