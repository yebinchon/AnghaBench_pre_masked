
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 size_t FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*,int const) ;
 int FUNC_6 (int *,int const,size_t*,size_t*,size_t,int ) ;

mrb_value
FUNC_7(mrb_state *VAR_2, mrb_value VAR_3, mrb_int VAR_4, mrb_int VAR_5, const mrb_value *VAR_6, mrb_value (*VAR_7)(mrb_state*, mrb_value, mrb_int))
{
  mrb_int VAR_8, VAR_9, VAR_10, VAR_11;
  mrb_value VAR_12;
  VAR_12 = FUNC_0(VAR_2);

  for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
    if (FUNC_3(VAR_6[VAR_8])) {
      FUNC_1(VAR_2, VAR_12, VAR_7(VAR_2, VAR_3, FUNC_2(VAR_6[VAR_8])));
    }
    else if (FUNC_6(VAR_2, VAR_6[VAR_8], &VAR_10, &VAR_11, VAR_4, VAR_1) == 1) {
      mrb_int const VAR_13 = VAR_4 < VAR_10 + VAR_11 ? VAR_4 : VAR_10 + VAR_11;
      for (VAR_9 = VAR_10; VAR_9 < VAR_13; ++VAR_9) {
        FUNC_1(VAR_2, VAR_12, VAR_7(VAR_2, VAR_3, VAR_9));
      }

      for (; VAR_9 < VAR_10 + VAR_11; ++VAR_9) {
        FUNC_1(VAR_2, VAR_12, FUNC_4());
      }
    }
    else {
      FUNC_5(VAR_2, VAR_0, "invalid values selector: %S", VAR_6[VAR_8]);
    }
  }

  return VAR_12;
}
