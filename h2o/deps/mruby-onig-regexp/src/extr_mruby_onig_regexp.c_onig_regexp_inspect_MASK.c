
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int OnigRegex ;


 int FUNC_0 (int *,int ,int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__* FUNC_10 (char*,int ) ;
 int FUNC_11 (int *,int ,char const*,int ) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_2, mrb_value VAR_3) {
  OnigRegex VAR_4;
  FUNC_0(VAR_2, VAR_3, &VAR_1, VAR_4);
  mrb_value VAR_5 = FUNC_7(VAR_2, "/");
  mrb_value VAR_6 = FUNC_4(VAR_2, VAR_3, FUNC_3(VAR_2, "@source"));
  FUNC_11(VAR_2, VAR_5, (const char *)FUNC_2(VAR_6), FUNC_1(VAR_6));
  FUNC_6(VAR_2, VAR_5, "/");
  char VAR_7[4];
  if (*FUNC_10(VAR_7, FUNC_9(VAR_4))) {
    FUNC_5(VAR_2, VAR_5, VAR_7);
  }
  if (FUNC_8(VAR_4) == VAR_0) {
    FUNC_6(VAR_2, VAR_5, "n");
  }
  return VAR_5;
}
