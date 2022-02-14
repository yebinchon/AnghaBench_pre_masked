
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmodule {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (scalar_t__,int ,int *,struct lmodule*) ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2(struct lmodule *VAR_4)
{

 if (VAR_2 > 0) {
  VAR_1 = FUNC_0(VAR_2, VAR_3, ((void*)0), VAR_4);
  if (VAR_1 == ((void*)0))
   FUNC_1(VAR_0, "fd_select failed on devd socket: %m");
 }
}
