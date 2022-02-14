
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef double mrb_float ;


 int FUNC_0 (int *,char*) ;
 double FUNC_1 (double) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int *,char*,double*) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_float VAR_2;

  FUNC_3(VAR_0, "f", &VAR_2);
  if (VAR_2 < 0.0) {
    FUNC_0(VAR_0, "log10");
  }
  VAR_2 = FUNC_1(VAR_2);

  return FUNC_2(VAR_0, VAR_2);
}
