
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,int ,char*,int ,int ) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3 = FUNC_8(VAR_1, FUNC_5(VAR_1, VAR_2));
  if (!FUNC_2(VAR_2)) {
    FUNC_6(VAR_1, VAR_0, "corrupted struct");
  }
  if (FUNC_1(VAR_2) != FUNC_0(VAR_3)) {
    if (FUNC_1(VAR_2) == 0) {
      FUNC_3(VAR_1, VAR_2, FUNC_0(VAR_3));
    }
    else {
      FUNC_7(VAR_1, VAR_0,
                 "struct size differs (%S required %S given)",
                 FUNC_4(FUNC_0(VAR_3)), FUNC_4(FUNC_1(VAR_2)));
    }
  }
  return VAR_3;
}
