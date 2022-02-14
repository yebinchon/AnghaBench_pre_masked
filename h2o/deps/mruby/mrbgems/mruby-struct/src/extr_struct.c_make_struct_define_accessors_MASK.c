
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RProc {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef int mrb_method_t ;
typedef size_t mrb_int ;


 int FUNC_0 (int ,struct RProc*) ;
 size_t FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,struct RClass*,int ,int ) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 struct RProc* FUNC_10 (int *,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int const) ;

__attribute__((used)) static void
FUNC_13(mrb_state *VAR_2, mrb_value VAR_3, struct RClass *VAR_4)
{
  const mrb_value *VAR_5 = FUNC_2(VAR_3);
  mrb_int VAR_6;
  mrb_int VAR_7 = FUNC_1(VAR_3);
  int VAR_8 = FUNC_8(VAR_2);

  for (VAR_6=0; VAR_6<VAR_7; VAR_6++) {
    mrb_sym VAR_9 = FUNC_12(VAR_5[VAR_6]);
    const char *VAR_10 = FUNC_11(VAR_2, VAR_9, ((void*)0));

    if (FUNC_4(VAR_2, VAR_10) || FUNC_3(VAR_2, VAR_10)) {
      mrb_method_t VAR_11;
      mrb_value VAR_12 = FUNC_6(VAR_6);
      struct RProc *VAR_13 = FUNC_10(VAR_2, VAR_0, 1, &VAR_12);
      struct RProc *VAR_14 = FUNC_10(VAR_2, VAR_1, 1, &VAR_12);
      FUNC_0(VAR_11, VAR_13);
      FUNC_5(VAR_2, VAR_4, VAR_9, VAR_11);
      FUNC_0(VAR_11, VAR_14);
      FUNC_5(VAR_2, VAR_4, FUNC_9(VAR_2, VAR_9), VAR_11);
      FUNC_7(VAR_2, VAR_8);
    }
  }
}
