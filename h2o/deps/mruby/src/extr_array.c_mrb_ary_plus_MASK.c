
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RArray {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 scalar_t__ FUNC_0 (struct RArray*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct RArray*) ;
 int FUNC_2 (struct RArray*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__,int *,scalar_t__) ;
 struct RArray* FUNC_4 (int *,scalar_t__) ;
 struct RArray* FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int **,scalar_t__*) ;
 int FUNC_7 (struct RArray*) ;
 int FUNC_8 (int *,int ,char*) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct RArray *VAR_4 = FUNC_5(VAR_3);
  struct RArray *VAR_5;
  mrb_value *VAR_6;
  mrb_int VAR_7, VAR_8;

  FUNC_6(VAR_2, "a", &VAR_6, &VAR_7);
  if (VAR_0 - VAR_7 < FUNC_0(VAR_4)) {
    FUNC_8(VAR_2, VAR_1, "array size too big");
  }
  VAR_8 = FUNC_0(VAR_4);
  VAR_5 = FUNC_4(VAR_2, VAR_8 + VAR_7);
  FUNC_3(FUNC_1(VAR_5), FUNC_1(VAR_4), VAR_8);
  FUNC_3(FUNC_1(VAR_5) + VAR_8, VAR_6, VAR_7);
  FUNC_2(VAR_5, VAR_8+VAR_7);

  return FUNC_7(VAR_5);
}
