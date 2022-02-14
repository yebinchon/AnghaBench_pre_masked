
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_8__ {int eStandardError_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 double FUNC_2 (double) ;
 int FUNC_3 (double) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (TYPE_1__*,struct RClass*,char*,int ) ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*,int ) ;
 struct RClass* FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int) ;

void
FUNC_9(mrb_state* VAR_26)
{
  struct RClass *VAR_27;
  VAR_27 = FUNC_6(VAR_26, "Math");

  FUNC_4(VAR_26, VAR_27, "DomainError", VAR_26->eStandardError_class);




  FUNC_5(VAR_26, VAR_27, "PI", FUNC_8(VAR_26, FUNC_2(1.0)*4.0));





  FUNC_5(VAR_26, VAR_27, "E", FUNC_8(VAR_26, FUNC_3(1.0)));





  FUNC_5(VAR_26, VAR_27, "TOLERANCE", FUNC_8(VAR_26, 1e-12));


  FUNC_7(VAR_26, VAR_27, "sin", VAR_21, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "cos", VAR_10, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "tan", VAR_24, FUNC_1(1));

  FUNC_7(VAR_26, VAR_27, "asin", VAR_4, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "acos", VAR_2, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "atan", VAR_6, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "atan2", VAR_7, FUNC_1(2));

  FUNC_7(VAR_26, VAR_27, "sinh", VAR_22, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "cosh", VAR_11, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "tanh", VAR_25, FUNC_1(1));

  FUNC_7(VAR_26, VAR_27, "asinh", VAR_5, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "acosh", VAR_3, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "atanh", VAR_8, FUNC_1(1));

  FUNC_7(VAR_26, VAR_27, "exp", VAR_14, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "log", VAR_18, FUNC_1(1)|FUNC_0(1));
  FUNC_7(VAR_26, VAR_27, "log2", VAR_20, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "log10", VAR_19, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "sqrt", VAR_23, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "cbrt", VAR_9, FUNC_1(1));

  FUNC_7(VAR_26, VAR_27, "frexp", VAR_15, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "ldexp", VAR_17, FUNC_1(2));

  FUNC_7(VAR_26, VAR_27, "hypot", VAR_16, FUNC_1(2));

  FUNC_7(VAR_26, VAR_27, "erf", VAR_12, FUNC_1(1));
  FUNC_7(VAR_26, VAR_27, "erfc", VAR_13, FUNC_1(1));
}
