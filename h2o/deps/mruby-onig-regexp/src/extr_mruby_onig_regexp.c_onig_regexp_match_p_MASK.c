
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;
typedef int OnigUChar ;
typedef int OnigRegex ;


 int FUNC_0 (int *,int ,int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,int *,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int ,int const*,int const*,int const*,int const*,int *,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_2, mrb_value VAR_3) {
  mrb_value VAR_4 = FUNC_6();
  mrb_int VAR_5 = 0;
  OnigRegex VAR_6;
  OnigUChar const* VAR_7;

  FUNC_4(VAR_2, "o|i", &VAR_4, &VAR_5);
  if (FUNC_5(VAR_4)) {
    return FUNC_6();
  }
  VAR_4 = FUNC_8(VAR_2, VAR_4);
  if (VAR_5 < 0 || (VAR_5 > 0 && VAR_5 >= FUNC_1(VAR_4))) {
    return FUNC_6();
  }

  FUNC_0(VAR_2, VAR_3, &VAR_1, VAR_6);
  VAR_7 = (OnigUChar const*)FUNC_2(VAR_4);
  return FUNC_3(FUNC_7(
      VAR_6, VAR_7, VAR_7 + FUNC_1(VAR_4),
      VAR_7 + VAR_5, VAR_7 + FUNC_1(VAR_4), ((void*)0), 0) != VAR_0);
}
