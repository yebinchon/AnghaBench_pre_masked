
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;

  FUNC_3(VAR_0, "o", &VAR_2);
  if (FUNC_5(VAR_2) || (FUNC_1(VAR_2) && FUNC_0(VAR_2) == 0)) {
    return FUNC_4(VAR_0);
  }
  return FUNC_2(VAR_0, VAR_2);
}
