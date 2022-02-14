
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,struct mrb_io*,int ) ;
 struct mrb_io* FUNC_1 (int *,int ) ;
 int FUNC_2 () ;

mrb_value
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct mrb_io *VAR_3;
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_1, VAR_3, VAR_0);
  return FUNC_2();
}
