
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int const FUNC_0 (int *,int,int const*) ;
 int const FUNC_1 () ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_0, const mrb_value *VAR_1, mrb_int VAR_2)
{
  if (VAR_2 == 0) return FUNC_1();
  if (VAR_2 == 1) return VAR_1[0];
  return FUNC_0(VAR_0, VAR_2, VAR_1);
}
