
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char const*) ;
 char* FUNC_4 (int *,int *) ;

mrb_value
FUNC_5(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  const char *VAR_3, *VAR_4;

  FUNC_1(VAR_0, "S", &VAR_2);
  VAR_3 = FUNC_4(VAR_0, &VAR_2);
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4 != ((void*)0)) {
    return FUNC_3(VAR_0, VAR_4);
  } else {
    return FUNC_2();
  }
}
