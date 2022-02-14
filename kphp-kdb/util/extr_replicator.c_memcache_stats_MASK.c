
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct connection*,char*,scalar_t__) ;
 int FUNC_1 () ;
 char* VAR_1 ;
 int FUNC_2 (int *,char*,int) ;

int FUNC_3 (struct connection *VAR_2) {
  int VAR_3 = FUNC_1 ();
  int VAR_4 = FUNC_0 (VAR_2, VAR_1 + VAR_3, VAR_0 - VAR_3);
  FUNC_2 (&VAR_2->Out, VAR_1, VAR_3 + VAR_4);
  FUNC_2 (&VAR_2->Out, "END\r\n", 5);
  return 0;
}
