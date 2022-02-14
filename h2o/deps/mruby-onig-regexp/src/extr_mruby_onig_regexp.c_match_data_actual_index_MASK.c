
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int OnigUChar ;
typedef int OnigRegion ;
typedef int OnigRegex ;


 scalar_t__ FUNC_0 (int const) ;
 int * FUNC_1 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 (int *,char*) ;
 int const FUNC_6 (int *,int const,int ) ;
 int FUNC_7 (int const) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *,int ,char*,int const) ;
 scalar_t__ FUNC_9 (int const) ;
 char* FUNC_10 (int *,int const) ;
 char* FUNC_11 (int *,int ,int*) ;
 int FUNC_12 (int const) ;
 scalar_t__ FUNC_13 (int const) ;
 int FUNC_14 (int ,int const*,int const*,int *) ;
 int FUNC_15 (char const*) ;

__attribute__((used)) static mrb_int
FUNC_16(mrb_state* VAR_4, mrb_value VAR_5, mrb_value VAR_6) {
  if(FUNC_4(VAR_6)) { return FUNC_3(VAR_6); }

  char const* VAR_7 = ((void*)0);
  char const* VAR_8 = ((void*)0);
  if(FUNC_13(VAR_6)) {
    mrb_int VAR_9;
    VAR_7 = FUNC_11(VAR_4, FUNC_12(VAR_6), &VAR_9);
    VAR_8 = VAR_7 + VAR_9;
  } else if(FUNC_9(VAR_6)) {
    VAR_7 = FUNC_10(VAR_4, VAR_6);
    VAR_8 = VAR_7 + FUNC_15(VAR_7);
  } else { FUNC_2(VAR_1); }
  FUNC_2(VAR_7 && VAR_8);

  mrb_value const VAR_10 = FUNC_6(VAR_4, VAR_5, FUNC_5(VAR_4, "regexp"));
  FUNC_2(!FUNC_7(VAR_10));
  FUNC_2(FUNC_1(VAR_10) == &VAR_2);
  FUNC_2(FUNC_1(VAR_5) == &VAR_3);
  int const VAR_11 = FUNC_14(
      (OnigRegex)FUNC_0(VAR_10), (OnigUChar const*)VAR_7, (OnigUChar const*)VAR_8,
      (OnigRegion*)FUNC_0(VAR_5));
  if (VAR_11 < 0) {
    FUNC_8(VAR_4, VAR_0, "undefined group name reference: %S", VAR_6);
  }
  return VAR_11;
}
