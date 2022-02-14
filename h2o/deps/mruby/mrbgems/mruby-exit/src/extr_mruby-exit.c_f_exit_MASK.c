
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,scalar_t__*) ;
 int FUNC_2 () ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_int VAR_3 = VAR_0;

  FUNC_1(VAR_1, "|i", &VAR_3);
  FUNC_0((int)VAR_3);

  return FUNC_2();
}
