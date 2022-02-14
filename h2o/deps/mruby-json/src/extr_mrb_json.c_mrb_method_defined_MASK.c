
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef scalar_t__ mrb_sym ;
typedef int mrb_state ;
typedef size_t mrb_int ;
typedef int mrb_bool ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,char*,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char const*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static mrb_bool
FUNC_9(mrb_state* VAR_2, mrb_value VAR_3, const char* VAR_4) {
  int VAR_5 = FUNC_6(VAR_2);
  mrb_sym VAR_6 = FUNC_7(VAR_2, VAR_4);
  mrb_value VAR_7 = FUNC_4(VAR_2, VAR_3, "public_methods", 1, FUNC_3());
  mrb_bool VAR_8 = VAR_0;
  if (FUNC_2(VAR_7)) {
    mrb_int VAR_9;
    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7); ++VAR_9) {
      if (VAR_6 == FUNC_8(FUNC_1(VAR_7)[VAR_9])) {
        VAR_8 = VAR_1;
        break;
      }
    }
  }
  FUNC_5(VAR_2, VAR_5);
  return VAR_8;
}
