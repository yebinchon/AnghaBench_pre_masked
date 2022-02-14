
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RArray {int dummy; } ;
typedef scalar_t__ mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 scalar_t__ FUNC_0 (struct RArray*) ;
 scalar_t__* FUNC_1 (struct RArray*) ;


 int VAR_0 ;
 int FUNC_2 (int *,struct RArray*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 struct RArray* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int *,scalar_t__,char*,int,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int *,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__,int ) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static mrb_value
FUNC_14(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct RArray *VAR_3 = FUNC_5(VAR_2);
  mrb_int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
  mrb_value VAR_9;
  mrb_value *VAR_10;
  mrb_value VAR_11;

  FUNC_2(VAR_1, VAR_3);

  if (FUNC_9(VAR_1) == 1) {
    mrb_value VAR_12;

    FUNC_10(VAR_1, "o|i", &VAR_12, &VAR_7);
    switch (FUNC_13(VAR_12)) {
    case 128:
      if (FUNC_12(VAR_1, VAR_12, &VAR_4, &VAR_7, FUNC_0(VAR_3), VAR_0) == 1) {
        goto delete_pos_len;
      }
      else {
        return FUNC_11();
      }
    case 129:
      VAR_9 = FUNC_8(VAR_1, VAR_2, "delete_at", 1, VAR_12);
      return VAR_9;
    default:
      VAR_9 = FUNC_8(VAR_1, VAR_2, "delete_at", 1, VAR_12);
      return VAR_9;
    }
  }

  FUNC_10(VAR_1, "ii", &VAR_4, &VAR_7);
 delete_pos_len:
  VAR_8 = FUNC_0(VAR_3);
  if (VAR_4 < 0) VAR_4 += VAR_8;
  if (VAR_4 < 0 || VAR_8 < VAR_4) return FUNC_11();
  if (VAR_7 < 0) return FUNC_11();
  if (VAR_8 == VAR_4) return FUNC_3(VAR_1);
  if (VAR_7 > VAR_8 - VAR_4) VAR_7 = VAR_8 - VAR_4;

  VAR_11 = FUNC_4(VAR_1, VAR_7);
  VAR_10 = FUNC_1(VAR_3);
  for (VAR_5 = VAR_4, VAR_6 = 0; VAR_6 < VAR_7; ++VAR_5, ++VAR_6) {
    FUNC_6(VAR_1, VAR_11, VAR_10[VAR_5]);
  }

  VAR_10 += VAR_4;
  for (VAR_5 = VAR_4; VAR_5 < VAR_8 - VAR_7; ++VAR_5) {
    *VAR_10 = *(VAR_10+VAR_7);
    ++VAR_10;
  }

  FUNC_7(VAR_1, VAR_2, VAR_8 - VAR_7);
  return VAR_11;
}
