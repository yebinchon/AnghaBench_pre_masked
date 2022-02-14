
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int g; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int,int ,int) ;

int FUNC_5 (char *VAR_6) {
  if (VAR_5 > 0) {
    FUNC_2 (VAR_4, "saving global click/view statistics to %s\n", VAR_6);
  }
  int VAR_7 = FUNC_3 (VAR_6, VAR_3 | VAR_1 | VAR_2, 0644);
  if (VAR_7 < 0) {
    FUNC_2 (VAR_4, "cannot open statistics file %s for writing: %m\n", VAR_6);
    return -1;
  }
  int VAR_8 = FUNC_4 (VAR_7, VAR_0.g, sizeof (VAR_0.g));
  FUNC_0 (VAR_8 == sizeof (VAR_0.g));
  FUNC_0 (FUNC_1 (VAR_7) >= 0);
  return 1;
}
