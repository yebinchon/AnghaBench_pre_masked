
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int *,int *) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (int ,int) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char const*,char const*) ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_1, mrb_value VAR_2)
{



  mrb_value VAR_3, VAR_4;
  const char *VAR_5, *VAR_6;
  int VAR_7 = FUNC_3(VAR_1);

  FUNC_4(VAR_1, "SS", &VAR_3, &VAR_4);
  VAR_5 = FUNC_6(FUNC_8(VAR_1, VAR_3), -1);
  VAR_6 = FUNC_6(FUNC_8(VAR_1, VAR_4), -1);

  if (FUNC_10(VAR_5, VAR_6) == -1) {
    FUNC_5(VAR_5);
    FUNC_5(VAR_6);
    FUNC_9(VAR_1, FUNC_8(VAR_1, FUNC_1(VAR_1, "(%S, %S)", VAR_3, VAR_4)));
  }
  FUNC_5(VAR_5);
  FUNC_5(VAR_6);
  FUNC_2(VAR_1, VAR_7);

  return FUNC_0(0);
}
