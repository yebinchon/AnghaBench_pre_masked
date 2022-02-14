
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2, VAR_3;

  FUNC_2(VAR_0, "i", &VAR_2);
  if (VAR_2 == 0) {
    return VAR_1;
  }
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3 == 0) return VAR_1;
  if (VAR_2 < 0) {
    return FUNC_3(VAR_3, -VAR_2);
  }
  return FUNC_0(VAR_0, VAR_3, VAR_2);
}
