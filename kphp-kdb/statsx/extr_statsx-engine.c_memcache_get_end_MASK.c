
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

int FUNC_1 (struct connection *VAR_1, int VAR_2) {
  VAR_1->flags &= ~VAR_0;
  FUNC_0 (&VAR_1->Out, "END\r\n", 5);
  return 0;
}
