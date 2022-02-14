
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (struct connection*,char*,int) ;
 int FUNC_1 (int *,char*,int) ;

int FUNC_2 (struct connection *VAR_0) {
  static char VAR_1[65536];
  int VAR_2 = FUNC_0 (VAR_0, VAR_1, 65530);
  FUNC_1 (&VAR_0->Out, VAR_1, VAR_2);
  FUNC_1 (&VAR_0->Out, "END\r\n", 5);
  return 0;
}
