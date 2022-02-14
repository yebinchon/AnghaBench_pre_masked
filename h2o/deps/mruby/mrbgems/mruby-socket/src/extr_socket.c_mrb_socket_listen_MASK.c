
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2, VAR_3;

  FUNC_1(VAR_0, "ii", &VAR_3, &VAR_2);
  if (FUNC_0((int)VAR_3, (int)VAR_2) == -1) {
    FUNC_3(VAR_0, "listen");
  }
  return FUNC_2();
}
