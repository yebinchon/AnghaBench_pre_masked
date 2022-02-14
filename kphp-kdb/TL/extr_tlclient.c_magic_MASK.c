
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag_output_magic; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

int FUNC_2 (char *VAR_1) {
  int VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2 == 1) {
    FUNC_0 ("Output magics is enabled.\n");
    VAR_0.flag_output_magic = 1;
  } else if (VAR_2 == 0) {
    FUNC_0 ("Output magics is disabled.\n");
    VAR_0.flag_output_magic = 0;
  }
  return 0;
}
