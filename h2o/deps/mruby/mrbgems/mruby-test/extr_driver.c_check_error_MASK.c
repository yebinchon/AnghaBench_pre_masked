
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int
FUNC_4(mrb_state *VAR_0)
{


  mrb_value VAR_1 = FUNC_2(VAR_0, FUNC_3(VAR_0, "$ko_test"));
  mrb_value VAR_2 = FUNC_2(VAR_0, FUNC_3(VAR_0, "$kill_test"));

  return FUNC_1(VAR_1) && FUNC_0(VAR_1) == 0 && FUNC_1(VAR_2) && FUNC_0(VAR_2) == 0;
}
