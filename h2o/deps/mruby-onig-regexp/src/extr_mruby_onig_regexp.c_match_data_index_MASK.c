
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;





 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int ,int,int *) ;
 int FUNC_4 (int *,char*,int **,int*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state* VAR_0, mrb_value VAR_1) {
  mrb_value VAR_2;
  mrb_int VAR_3; mrb_value *VAR_4;

  FUNC_4(VAR_0, "*", &VAR_4, &VAR_3);

  VAR_2 = FUNC_1(VAR_0, VAR_1);

  if (VAR_3 == 1) {
    switch (FUNC_6(VAR_4[0])) {
    case 130:
    case 128:
    case 129:
      return FUNC_2(VAR_2, FUNC_0(VAR_0, VAR_1, VAR_4[0]));
    default: break;
    }
  }

  return FUNC_3(VAR_0, VAR_2, FUNC_5(VAR_0, "[]"), VAR_3, VAR_4);
}
