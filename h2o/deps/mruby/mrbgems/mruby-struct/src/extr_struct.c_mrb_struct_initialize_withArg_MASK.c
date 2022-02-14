
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,size_t,int ) ;
 int FUNC_1 () ;
 struct RClass* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 size_t FUNC_4 (int *,struct RClass*) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_1, mrb_int VAR_2, mrb_value *VAR_3, mrb_value VAR_4)
{
  struct RClass *VAR_5 = FUNC_2(VAR_1, VAR_4);
  mrb_int VAR_6, VAR_7;

  VAR_7 = FUNC_4(VAR_1, VAR_5);
  if (VAR_7 < VAR_2) {
    FUNC_3(VAR_1, VAR_0, "struct size differs");
  }

  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    FUNC_0(VAR_1, VAR_4, VAR_6, VAR_3[VAR_6]);
  }
  for (VAR_6 = VAR_2; VAR_6 < VAR_7; VAR_6++) {
    FUNC_0(VAR_1, VAR_4, VAR_6, FUNC_1());
  }
  return VAR_4;
}
