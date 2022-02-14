
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (struct connection*) ;
 char* VAR_0 ;
 int FUNC_1 (int *,char*,int) ;

int FUNC_2 (struct connection *VAR_1) {
  int VAR_2 = FUNC_0 (VAR_1);
  FUNC_1 (&VAR_1->Out, VAR_0, VAR_2);
  FUNC_1 (&VAR_1->Out, "END\r\n", 5);
  return 0;
}
