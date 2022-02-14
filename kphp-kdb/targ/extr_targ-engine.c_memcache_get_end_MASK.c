
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct connection*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int) ;

int FUNC_2 (struct connection *VAR_3, int VAR_4) {
  VAR_3->flags &= ~VAR_0;


  VAR_1++;
  FUNC_1 (&VAR_3->Out, "END\r\n", 5);

  FUNC_0 (VAR_3);
  if (VAR_2 > 1) {

  }
  return 0;
}
