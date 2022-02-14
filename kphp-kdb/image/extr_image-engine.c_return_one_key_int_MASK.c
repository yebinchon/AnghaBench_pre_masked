
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (int *,char*,int) ;

int FUNC_2 (struct connection *VAR_0, const char *VAR_1, int VAR_2) {
  static char VAR_3[256], VAR_4[32];
  int VAR_5 = FUNC_0 (VAR_4, "i:%d;", VAR_2);
  int VAR_6 = FUNC_0 (VAR_3, "VALUE %s 1 %d\r\n", VAR_1, VAR_5);
  FUNC_1 (&VAR_0->Out, VAR_3, VAR_6);
  FUNC_1 (&VAR_0->Out, VAR_4, VAR_5);
  FUNC_1 (&VAR_0->Out, "\r\n", 2);
  return 0;
}
