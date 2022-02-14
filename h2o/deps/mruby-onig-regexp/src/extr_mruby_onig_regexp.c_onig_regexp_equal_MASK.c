
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int OnigRegex ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_9 (int *,int ,char*) ;
 scalar_t__ FUNC_10 (int *,int ,int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static mrb_value
FUNC_13(mrb_state *VAR_2, mrb_value VAR_3) {
  mrb_value VAR_4;
  OnigRegex VAR_5, VAR_6;

  FUNC_3(VAR_2, "o", &VAR_4);
  if (FUNC_7(VAR_2, VAR_3, VAR_4)){
    return FUNC_11();
  }
  if (FUNC_6(VAR_4)) {
    return FUNC_2();
  }
  if (!FUNC_8(VAR_2, VAR_4, FUNC_1(VAR_2, "OnigRegexp"))) {
    return FUNC_2();
  }
  FUNC_0(VAR_2, VAR_3, &VAR_1, VAR_5);
  FUNC_0(VAR_2, VAR_4, &VAR_1, VAR_6);

  if (!VAR_5 || !VAR_6){
      FUNC_9(VAR_2, VAR_0, "Invalid OnigRegexp");
  }
  if (FUNC_12(VAR_5) != FUNC_12(VAR_6)){
      return FUNC_2();
  }
  return FUNC_10(VAR_2, FUNC_5(VAR_2, VAR_3, FUNC_4(VAR_2, "@source")), FUNC_5(VAR_2, VAR_4, FUNC_4(VAR_2, "@source"))) ?
      FUNC_11() : FUNC_2();
}
