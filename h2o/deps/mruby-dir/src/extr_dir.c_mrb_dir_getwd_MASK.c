
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ) ;

mrb_value
FUNC_6(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3;

  VAR_3 = FUNC_2(VAR_1, VAR_0);
  if (FUNC_1(FUNC_0(VAR_3), VAR_0) == ((void*)0)) {
    FUNC_4(VAR_1, "getcwd(2)");
  }
  FUNC_3(VAR_1, VAR_3, FUNC_5(FUNC_0(VAR_3)));
  return VAR_3;
}
