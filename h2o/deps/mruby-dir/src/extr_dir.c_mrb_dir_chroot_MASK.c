
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*) ;

mrb_value
FUNC_6(mrb_state *VAR_1, mrb_value VAR_2)
{




  mrb_value VAR_3;
  char *VAR_4;
  int VAR_5;

  FUNC_2(VAR_1, "S", &VAR_3);
  VAR_4 = FUNC_4(VAR_1, VAR_3);
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 == -1) {
    FUNC_5(VAR_1, VAR_4);
  }

  return FUNC_1(VAR_5);

}
