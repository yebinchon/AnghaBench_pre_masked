
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tabsize; } ;


 int FUNC_0 (char*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,char*,int*) ;

int FUNC_2 (char *VAR_1) {
  int VAR_2;
  if (FUNC_1 (VAR_1, "%d", &VAR_2) == 1) {
    if (VAR_2 > 8) {
      VAR_2 = 8;
    }
    if (VAR_2 < 2) {
      VAR_2 = 2;
    }
    FUNC_0 ("Set tabsize to %d\n", VAR_2);
    VAR_0.tabsize = VAR_2;
  }
  return 0;
}
