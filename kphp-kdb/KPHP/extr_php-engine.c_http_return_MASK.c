
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (struct connection*,int,int ,int,int ,char*) ;
 int FUNC_2 (int *,char const*,int) ;

void FUNC_3 (struct connection *VAR_1, const char *VAR_2, int VAR_3) {
  if (VAR_3 < 0) {
    VAR_3 = (int)FUNC_0 (VAR_2);
  }
  FUNC_1 (VAR_1, 200, 0, VAR_3, VAR_0, "text/javascript; charset=UTF-8");
  FUNC_2 (&VAR_1->Out, VAR_2, VAR_3);
}
