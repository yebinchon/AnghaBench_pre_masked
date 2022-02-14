
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int mrb_float ;


 long long VAR_0 ;
 long long VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_2, long long VAR_3)
{
  if (VAR_1 <= VAR_3 && VAR_3 <= VAR_0) {
    return FUNC_0((mrb_int)VAR_3);
  } else {
    return FUNC_1(VAR_2, (mrb_float)VAR_3);
  }
}
