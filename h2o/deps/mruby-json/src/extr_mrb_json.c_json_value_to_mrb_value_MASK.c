
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* mrb_value ;
typedef int mrb_state ;
typedef double mrb_int ;
typedef int JSON_Value ;
typedef int JSON_Object ;
typedef int JSON_Array ;


 int VAR_0 ;
 double FUNC_0 (double) ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;
 char* FUNC_4 (int *,size_t) ;
 int * FUNC_5 (int *,char const*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 double FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 char const* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (int *) ;
 int FUNC_14 (int *,void*,void*) ;
 void* FUNC_15 () ;
 void* FUNC_16 (double) ;
 void* FUNC_17 (int *,double) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *) ;
 void* FUNC_20 (int *) ;
 int FUNC_21 (int *,void*,void*,void*) ;
 void* FUNC_22 () ;
 int FUNC_23 (int *,int ,char*) ;
 void* FUNC_24 (int *,char const*) ;
 void* FUNC_25 () ;

__attribute__((used)) static mrb_value
FUNC_26(mrb_state* VAR_1, JSON_Value* VAR_2) {
  mrb_value VAR_3;
  switch (FUNC_12(VAR_2)) {
  case 133:
  case 131:
    VAR_3 = FUNC_22();
    break;
  case 128:
    VAR_3 = FUNC_24(VAR_1, FUNC_11(VAR_2));
    break;
  case 130:
    {
      double VAR_4 = FUNC_9(VAR_2);
      if (FUNC_0(VAR_4) == VAR_4) {
        VAR_3 = FUNC_16(VAR_4);
      }
      else {
        VAR_3 = FUNC_17(VAR_1, VAR_4);
      }
    }
    break;

  case 129:
    {
      mrb_value VAR_5 = FUNC_20(VAR_1);
      JSON_Object* VAR_6 = FUNC_10(VAR_2);
      size_t VAR_7 = FUNC_3(VAR_6);
      size_t VAR_8;
      for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        int VAR_9 = FUNC_19(VAR_1);
        const char* VAR_10 = FUNC_4(VAR_6, VAR_8);
        FUNC_21(VAR_1, VAR_5, FUNC_24(VAR_1, VAR_10),
          FUNC_26(VAR_1, FUNC_5(VAR_6, VAR_10)));
        FUNC_18(VAR_1, VAR_9);
      }
      VAR_3 = VAR_5;
    }
    break;
  case 135:
    {
      mrb_value VAR_11;
      JSON_Array* VAR_12;
      size_t VAR_13, VAR_14;
      VAR_11 = FUNC_13(VAR_1);
      VAR_12 = FUNC_6(VAR_2);
      VAR_14 = FUNC_1(VAR_12);
      for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
        int VAR_15 = FUNC_19(VAR_1);
        JSON_Value* VAR_16 = FUNC_2(VAR_12, VAR_13);
        FUNC_14(VAR_1, VAR_11, FUNC_26(VAR_1, VAR_16));
        FUNC_18(VAR_1, VAR_15);
      }
      VAR_3 = VAR_11;
    }
    break;
  case 134:
    if (FUNC_7(VAR_2))
      VAR_3 = FUNC_25();
    else
      VAR_3 = FUNC_15();
    break;
  default:
    FUNC_23(VAR_1, VAR_0, "invalid argument");
  }
  return VAR_3;
}
