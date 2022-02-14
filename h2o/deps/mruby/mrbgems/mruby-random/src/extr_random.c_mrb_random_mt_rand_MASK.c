
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mt_state ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_0, mt_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3;

  if (FUNC_0(VAR_2) == 0) {
    VAR_3 = FUNC_2(VAR_0, FUNC_4(VAR_1));
  }
  else {
    VAR_3 = FUNC_1(FUNC_3(VAR_1) % FUNC_0(VAR_2));
  }

  return VAR_3;
}
