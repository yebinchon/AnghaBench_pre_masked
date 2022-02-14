
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,char*) ;
 int * FUNC_11 (char*,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static mrb_value
FUNC_13(mrb_state *VAR_2, mrb_value VAR_3)
{
  mrb_value VAR_4, VAR_5, VAR_6, VAR_7;
  mrb_int VAR_8;
  char *VAR_9;

  VAR_8 = FUNC_1(VAR_2, "S|S", &VAR_4, &VAR_5);
  if (VAR_8 == 2) {
    VAR_6 = FUNC_6(VAR_2, VAR_5);
    VAR_6 = FUNC_4(VAR_2, VAR_6, FUNC_7(VAR_2, VAR_0));
    VAR_6 = FUNC_4(VAR_2, VAR_6, VAR_4);
    VAR_4 = VAR_6;
  }
  VAR_9 = FUNC_3(FUNC_9(VAR_2, VAR_4), -1);
  VAR_7 = FUNC_5(VAR_2, VAR_1);
  if (FUNC_11(VAR_9, FUNC_0(VAR_7)) == ((void*)0)) {
    FUNC_2(VAR_9);
    FUNC_10(VAR_2, VAR_9);
  }
  FUNC_2(VAR_9);
  FUNC_8(VAR_2, VAR_7, FUNC_12(FUNC_0(VAR_7)));
  return VAR_7;
}
