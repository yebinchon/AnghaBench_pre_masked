
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_1 (struct connection *VAR_2, char *VAR_3, int VAR_4) {

  while (*VAR_3 == ' ') { VAR_3++; }

  if (VAR_1 > 0) {
    FUNC_0 (VAR_0, "delete \"%s\"\n", VAR_3);
  }

  return 0;
}
