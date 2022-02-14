
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3 = FUNC_2(VAR_1, VAR_2, FUNC_1(VAR_1, "@buf"));
  if (FUNC_3(VAR_3) == VAR_0 && FUNC_0(VAR_3) > 0) {
    return 1;
  }
  return 0;
}
