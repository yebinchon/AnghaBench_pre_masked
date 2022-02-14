
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *) ;

void
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_sym VAR_2 = FUNC_2(VAR_0, "backtrace");
  mrb_value VAR_3;
  int VAR_4;

  if (FUNC_3(VAR_0, VAR_1, VAR_2)) return;
  VAR_4 = FUNC_1(VAR_0);
  VAR_3 = FUNC_5(VAR_0);
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_0(VAR_0, VAR_4);
}
