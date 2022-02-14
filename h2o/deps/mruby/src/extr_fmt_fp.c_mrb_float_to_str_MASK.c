
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int,char const*,int ) ;

mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1, const char *VAR_2)
{
  char VAR_3[25];

  FUNC_2(VAR_3, sizeof(VAR_3), VAR_2, FUNC_0(VAR_1));
  return FUNC_1(VAR_0, VAR_3);
}
