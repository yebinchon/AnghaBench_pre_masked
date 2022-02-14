
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;


 int FUNC_0 (int ,char*,char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (char,char*) ;
 scalar_t__ FUNC_2 (char*,int *) ;

int
FUNC_3(char VAR_1, char *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2)) {
  return -1;
 }

 if (FUNC_2(VAR_2, &VAR_0.rev) != 0) {
  FUNC_0(0,"invalid revision number: %s", VAR_2);
  return -1;
 }

 return 0;
}
