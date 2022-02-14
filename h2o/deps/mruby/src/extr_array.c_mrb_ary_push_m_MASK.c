
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RBasic {int dummy; } ;
struct RArray {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 scalar_t__ FUNC_0 (struct RArray*) ;
 scalar_t__ FUNC_1 (struct RArray*) ;
 scalar_t__ FUNC_2 (struct RArray*) ;
 int FUNC_3 (struct RArray*,scalar_t__) ;
 int FUNC_4 (scalar_t__,int *,scalar_t__) ;
 int FUNC_5 (int *,struct RArray*,scalar_t__) ;
 int FUNC_6 (int *,struct RArray*) ;
 struct RArray* FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,int **,scalar_t__*) ;
 int FUNC_9 (int *,struct RBasic*) ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value *VAR_2;
  mrb_int VAR_3, VAR_4, VAR_5;
  struct RArray *VAR_6;

  FUNC_8(VAR_0, "*!", &VAR_2, &VAR_5);
  VAR_6 = FUNC_7(VAR_1);
  FUNC_6(VAR_0, VAR_6);
  VAR_3 = FUNC_1(VAR_6);
  VAR_4 = VAR_3 + VAR_5;
  if (FUNC_0(VAR_6) < VAR_4) {
    FUNC_5(VAR_0, VAR_6, VAR_4);
  }
  FUNC_4(FUNC_2(VAR_6)+VAR_3, VAR_2, VAR_5);
  FUNC_3(VAR_6, VAR_4);
  FUNC_9(VAR_0, (struct RBasic*)VAR_6);

  return VAR_1;
}
