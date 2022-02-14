
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (int *,char const*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int *,int *,int*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,char*) ;
 char* FUNC_8 (int *,int *) ;

mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2 = FUNC_6();
  mrb_value VAR_3 = FUNC_6();
  mrb_int VAR_4, VAR_5 = -1;
  const char *VAR_6;
  int VAR_7, VAR_8;

  FUNC_2(VAR_0, "S|Si", &VAR_2, &VAR_3, &VAR_5);
  if (FUNC_5(VAR_3)) {
    VAR_3 = FUNC_7(VAR_0, "r");
  }
  if (VAR_5 < 0) {
    VAR_5 = 0666;
  }

  VAR_6 = FUNC_8(VAR_0, &VAR_2);
  VAR_7 = FUNC_4(VAR_0, FUNC_8(VAR_0, &VAR_3));
  VAR_8 = FUNC_3(VAR_0, VAR_7);
  VAR_4 = FUNC_0(VAR_0, VAR_6, VAR_8, VAR_5);
  return FUNC_1(VAR_4);
}
