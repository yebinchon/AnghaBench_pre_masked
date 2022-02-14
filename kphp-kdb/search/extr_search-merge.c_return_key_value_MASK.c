
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char*,int) ;
 int FUNC_2 (int *,char*,int) ;

int FUNC_3 (struct connection *VAR_0, char *VAR_1, char *VAR_2, int VAR_3) {
  static char VAR_4[2048];
  int VAR_5 = FUNC_1 (VAR_4, "VALUE %s 0 %d\r\n", VAR_1, VAR_3);
  FUNC_0 (VAR_5 <= 2048);
  FUNC_2 (&VAR_0->Out, VAR_4, VAR_5);
  FUNC_2 (&VAR_0->Out, VAR_2, VAR_3);
  FUNC_2 (&VAR_0->Out, "\r\nEND\r\n", 7);
  return 0;
}
