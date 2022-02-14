
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int indentation; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*) ;

int FUNC_2 (char *VAR_1) {
  int VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2 == 1) {
    FUNC_0 ("Indentation is enabled.\n");
    VAR_0.indentation = 1;
  } else if (VAR_2 == 0) {
    FUNC_0 ("Indentation is disabled.\n");
    VAR_0.indentation = 0;
  }
  return 0;
}
