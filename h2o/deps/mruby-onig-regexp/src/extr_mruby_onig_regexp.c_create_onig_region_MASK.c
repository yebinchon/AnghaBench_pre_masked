
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const mrb_value ;
typedef int mrb_state ;


 int * FUNC_0 (int const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int const,int ,int const) ;
 int const FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int const FUNC_7 (int *,int const) ;
 int FUNC_8 (int const) ;
 scalar_t__ FUNC_9 (int const) ;
 int FUNC_10 () ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state* VAR_3, mrb_value const VAR_4, mrb_value VAR_5) {
  FUNC_1(FUNC_8(VAR_4));
  FUNC_1(FUNC_9(VAR_5) == VAR_0 && FUNC_0(VAR_5) == &VAR_1);
  mrb_value const VAR_6 = FUNC_6(FUNC_3(
      VAR_3, FUNC_2(VAR_3, "OnigMatchData"), FUNC_10(), &VAR_2));
  FUNC_5(VAR_3, VAR_6, FUNC_4(VAR_3, "string"), FUNC_7(VAR_3, VAR_4));
  FUNC_5(VAR_3, VAR_6, FUNC_4(VAR_3, "regexp"), VAR_5);
  return VAR_6;
}
