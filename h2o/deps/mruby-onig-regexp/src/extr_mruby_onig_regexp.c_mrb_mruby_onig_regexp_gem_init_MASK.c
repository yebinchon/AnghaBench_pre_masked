
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct RObject {int dummy; } ;
struct RClass {int dummy; } ;
struct TYPE_10__ {struct RClass* string_class; int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct RClass*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 struct RClass* FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*,int ) ;
 int FUNC_7 (TYPE_1__*,struct RClass*,char*,int *,int) ;
 int FUNC_8 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*,struct RObject*,int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,struct RClass*,char*) ;
 int * VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int * VAR_35 ;
 int VAR_36 ;
 int * VAR_37 ;
 int * VAR_38 ;
 int * VAR_39 ;
 int * VAR_40 ;
 int * VAR_41 ;
 int VAR_42 ;
 int * VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;

void
FUNC_14(mrb_state* VAR_50) {
  struct RClass *VAR_51;

  VAR_51 = FUNC_5(VAR_50, "OnigRegexp", VAR_50->object_class);
  FUNC_4(VAR_51, VAR_0);


  FUNC_11(VAR_50, (struct RObject*)VAR_51, FUNC_10(VAR_50, "@set_global_variables"), FUNC_12());

  FUNC_6(VAR_50, VAR_51, "IGNORECASE", FUNC_9(VAR_7));
  FUNC_6(VAR_50, VAR_51, "EXTENDED", FUNC_9(VAR_4));
  FUNC_6(VAR_50, VAR_51, "MULTILINE", FUNC_9(VAR_8));
  FUNC_6(VAR_50, VAR_51, "SINGLELINE", FUNC_9(VAR_17));
  FUNC_6(VAR_50, VAR_51, "FIND_LONGEST", FUNC_9(VAR_5));
  FUNC_6(VAR_50, VAR_51, "FIND_NOT_EMPTY", FUNC_9(VAR_6));
  FUNC_6(VAR_50, VAR_51, "NEGATE_SINGLELINE", FUNC_9(VAR_9));
  FUNC_6(VAR_50, VAR_51, "DONT_CAPTURE_GROUP", FUNC_9(VAR_3));
  FUNC_6(VAR_50, VAR_51, "CAPTURE_GROUP", FUNC_9(VAR_2));
  FUNC_6(VAR_50, VAR_51, "NOTBOL", FUNC_9(VAR_11));
  FUNC_6(VAR_50, VAR_51, "NOTEOL", FUNC_9(VAR_13));
  FUNC_7(VAR_50, VAR_51, "initialize", VAR_37, FUNC_3(1) | FUNC_2(2));
  FUNC_7(VAR_50, VAR_51, "==", VAR_35, FUNC_3(1));
  FUNC_7(VAR_50, VAR_51, "match", VAR_39, FUNC_3(1) | FUNC_2(1));
  FUNC_7(VAR_50, VAR_51, "match?", VAR_40, FUNC_3(1) | FUNC_2(1));
  FUNC_7(VAR_50, VAR_51, "casefold?", VAR_32, FUNC_1());

  FUNC_7(VAR_50, VAR_51, "options", VAR_41, FUNC_1());
  FUNC_7(VAR_50, VAR_51, "inspect", VAR_38, FUNC_1());
  FUNC_7(VAR_50, VAR_51, "to_s", VAR_43, FUNC_1());

  FUNC_8(VAR_50, VAR_51, "escape", VAR_36, FUNC_3(1));
  FUNC_8(VAR_50, VAR_51, "quote", VAR_36, FUNC_3(1));
  FUNC_8(VAR_50, VAR_51, "version", VAR_44, FUNC_1());
  FUNC_8(VAR_50, VAR_51, "set_global_variables?", VAR_34, FUNC_1());
  FUNC_8(VAR_50, VAR_51, "set_global_variables=", VAR_42, FUNC_3(1));
  FUNC_8(VAR_50, VAR_51, "clear_global_variables", VAR_33, FUNC_1());

  struct RClass* VAR_52 = FUNC_5(VAR_50, "OnigMatchData", VAR_50->object_class);
  FUNC_4(VAR_51, VAR_0);
  FUNC_13(VAR_50, VAR_52, "new");


  FUNC_7(VAR_50, VAR_52, "[]", &VAR_23, FUNC_3(1));
  FUNC_7(VAR_50, VAR_52, "begin", &VAR_19, FUNC_3(1));
  FUNC_7(VAR_50, VAR_52, "captures", &VAR_20, FUNC_1());
  FUNC_7(VAR_50, VAR_52, "end", &VAR_22, FUNC_3(1));


  FUNC_7(VAR_50, VAR_52, "initialize_copy", &VAR_21, FUNC_3(1));

  FUNC_7(VAR_50, VAR_52, "length", &VAR_24, FUNC_1());

  FUNC_7(VAR_50, VAR_52, "offset", &VAR_25, FUNC_3(1));
  FUNC_7(VAR_50, VAR_52, "post_match", &VAR_26, FUNC_1());
  FUNC_7(VAR_50, VAR_52, "pre_match", &VAR_27, FUNC_1());
  FUNC_7(VAR_50, VAR_52, "regexp", &VAR_28, FUNC_1());
  FUNC_7(VAR_50, VAR_52, "size", &VAR_24, FUNC_1());
  FUNC_7(VAR_50, VAR_52, "string", &VAR_29, FUNC_1());
  FUNC_7(VAR_50, VAR_52, "to_a", &VAR_30, FUNC_1());
  FUNC_7(VAR_50, VAR_52, "to_s", &VAR_31, FUNC_1());


  FUNC_7(VAR_50, VAR_50->string_class, "onig_regexp_gsub", &VAR_45, FUNC_3(1) | FUNC_2(1) | FUNC_0());
  FUNC_7(VAR_50, VAR_50->string_class, "onig_regexp_sub", &VAR_49, FUNC_3(1) | FUNC_2(1) | FUNC_0());
  FUNC_7(VAR_50, VAR_50->string_class, "onig_regexp_split", &VAR_48, FUNC_3(1));
  FUNC_7(VAR_50, VAR_50->string_class, "onig_regexp_scan", &VAR_47, FUNC_3(1) | FUNC_0());
  FUNC_7(VAR_50, VAR_50->string_class, "onig_regexp_match?", &VAR_46, FUNC_3(1) | FUNC_2(1));
}
