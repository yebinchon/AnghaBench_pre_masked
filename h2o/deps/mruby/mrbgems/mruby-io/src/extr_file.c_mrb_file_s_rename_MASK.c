
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,char*,int *,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2, VAR_3;
  char *VAR_4, *VAR_5;

  FUNC_4(VAR_0, "SS", &VAR_2, &VAR_3);
  VAR_4 = FUNC_6(FUNC_8(VAR_0, &VAR_2), -1);
  VAR_5 = FUNC_6(FUNC_8(VAR_0, &VAR_3), -1);
  if (FUNC_10(VAR_4, VAR_5) < 0) {







    FUNC_5(VAR_4);
    FUNC_5(VAR_5);
    FUNC_9(VAR_0, FUNC_7(VAR_0, FUNC_3(VAR_0, "(%S, %S)", VAR_2, VAR_3)));
  }
  FUNC_5(VAR_4);
  FUNC_5(VAR_5);
  return FUNC_2(0);
}
