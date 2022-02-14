
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,int *) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 () ;

mrb_value
FUNC_5(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  const char *VAR_3;
  FUNC_2(VAR_0, "S", &VAR_2);
  VAR_3 = FUNC_3(VAR_0, VAR_2);
  if (FUNC_0(VAR_3) != ((void*)0)) {
    return FUNC_4();
  } else {
    return FUNC_1();
  }
}
