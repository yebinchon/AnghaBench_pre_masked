
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int *,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_2 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(mrb_state* VAR_3)
{
  struct RClass *VAR_4 = FUNC_2(VAR_3, "SocketTest");
  FUNC_1(VAR_3, VAR_4, "tmppath", VAR_1, FUNC_0());
  FUNC_1(VAR_3, VAR_4, "win?", VAR_2, FUNC_0());
  FUNC_1(VAR_3, VAR_4, "cygwin?", VAR_0, FUNC_0());
}
