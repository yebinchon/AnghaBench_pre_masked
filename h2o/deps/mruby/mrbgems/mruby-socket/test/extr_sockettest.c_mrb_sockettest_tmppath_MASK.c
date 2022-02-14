
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;

mrb_value
FUNC_5(mrb_state *VAR_0, mrb_value VAR_1)
{
  char VAR_2[] = "mruby-socket.XXXXXXXX";
  int VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 == -1) {
    FUNC_3(VAR_0, 0);
  }
  if (FUNC_0(VAR_3) == -1) {
    FUNC_3(VAR_0, 0);
  }
  if (FUNC_4(VAR_2) == -1) {
    FUNC_3(VAR_0, 0);
  }
  return FUNC_2(VAR_0, VAR_2);
}
