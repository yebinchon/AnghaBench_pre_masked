
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_3 ;

int
FUNC_8(int VAR_4, char **VAR_5)
{
  mrb_state *VAR_6;
  int VAR_7;
  mrb_bool VAR_8 = VAR_1;

  FUNC_6();


  VAR_6 = FUNC_5();
  if (VAR_6 == ((void*)0)) {
    FUNC_1(VAR_3, "Invalid mrb_state, exiting test driver");
    return VAR_0;
  }

  if (VAR_4 == 2 && VAR_5[1][0] == '-' && VAR_5[1][1] == 'v') {
    FUNC_7("verbose mode: enable\n\n");
    VAR_8 = VAR_2;
  }

  FUNC_4(VAR_6, VAR_8);
  FUNC_3(VAR_6);
  VAR_7 = FUNC_0(VAR_6);
  FUNC_2(VAR_6);

  return VAR_7;
}
