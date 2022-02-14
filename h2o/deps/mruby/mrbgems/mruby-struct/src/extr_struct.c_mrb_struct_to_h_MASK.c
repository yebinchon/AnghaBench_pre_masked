
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 size_t FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2, VAR_3;
  mrb_int VAR_4;

  VAR_2 = FUNC_5(VAR_0, VAR_1);
  VAR_3 = FUNC_3(VAR_0, FUNC_0(VAR_2));

  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); ++VAR_4) {
    FUNC_4(VAR_0, VAR_3, FUNC_1(VAR_2)[VAR_4], FUNC_2(VAR_1)[VAR_4]);
  }

  return VAR_3;
}
