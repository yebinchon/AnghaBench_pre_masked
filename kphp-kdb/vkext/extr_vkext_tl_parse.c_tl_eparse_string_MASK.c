
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ error; } ;


 int FUNC_0 (char**) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_1__ VAR_0 ;

int FUNC_4 (char **VAR_1) {
  if (VAR_0.error) { return -1; }
  int VAR_2 = FUNC_0 (VAR_1);
  if (VAR_2 < 0) {
    VAR_0.error = FUNC_3 (*VAR_1);
    *VAR_1 = 0;
    return -1;
  }
  char *VAR_3 = FUNC_1 (VAR_2 + 1);
  FUNC_2 (VAR_3, *VAR_1, VAR_2);
  VAR_3[VAR_2] = 0;
  *VAR_1 = VAR_3;
  return VAR_2;
}
