
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int * FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2 = FUNC_1(FUNC_3(VAR_0, 0));
  mrb_value *VAR_3 = FUNC_0(VAR_1);

  if (!VAR_3) return FUNC_2();
  return VAR_3[VAR_2];
}
