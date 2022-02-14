
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct connection*,char*,int) ;
 char* VAR_1 ;
 int FUNC_3 (int *,char*,int) ;

int FUNC_4 (struct connection *VAR_2) {
  int VAR_3 = FUNC_1 ();
  int VAR_4 = FUNC_2 (VAR_2, VAR_1 + VAR_3, VAR_0 - VAR_3);
  FUNC_3 (&VAR_2->Out, VAR_1, VAR_3 + VAR_4);
  FUNC_3 (&VAR_2->Out, "END\r\n", 5);
  FUNC_0 (VAR_3 + VAR_4 + 1 < VAR_0);
  return 0;
}
