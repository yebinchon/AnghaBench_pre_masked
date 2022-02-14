
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int*,int*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *,int ,char*,int) ;
 int FUNC_9 (int *,int,int*,int*,int,int ) ;
 int FUNC_10 (int *,int,int,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_3, mrb_value VAR_4)
{
  mrb_value VAR_5;
  mrb_int VAR_6;

  if (FUNC_4(VAR_3) == 2) {
    mrb_int VAR_7;
    FUNC_5(VAR_3, "ii", &VAR_7, &VAR_6);
    return FUNC_10(VAR_3, VAR_4, VAR_7, VAR_6);
  }
  FUNC_5(VAR_3, "o|i", &VAR_5, &VAR_6);
  switch (FUNC_11(VAR_5)) {
  case 128:
    {
      mrb_int VAR_8;

      VAR_6 = FUNC_0(VAR_4);
      switch (FUNC_9(VAR_3, VAR_5, &VAR_8, &VAR_6, VAR_6, VAR_2)) {
      case 0:
        break;
      case 1:
        return FUNC_10(VAR_3, VAR_4, VAR_8, VAR_6);
      case 2:
        FUNC_8(VAR_3, VAR_0, "%S out of range", VAR_5);
        break;
      }
      return FUNC_6();
    }

  case 129:
    VAR_5 = FUNC_2((mrb_int)FUNC_3(VAR_5));


  case 130:
    return FUNC_10(VAR_3, VAR_4, FUNC_1(VAR_5), 1);
  default:
    FUNC_7(VAR_3, VAR_1, "wrong type of argument");
  }

  return FUNC_6();
}
