
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct RObject {int dummy; } ;
struct RClass {struct RClass* c; } ;
struct TYPE_14__ {struct RObject* top_self; struct RClass* object_class; struct RClass* proc_class; struct RClass* class_class; struct RClass* module_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct RClass*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct RClass* FUNC_6 (TYPE_1__*,struct RClass*) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_1__*,struct RClass*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (TYPE_1__*,int *,struct RClass*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 struct RClass* FUNC_9 (TYPE_1__*,char*,struct RClass*) ;
 int FUNC_10 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_11 (TYPE_1__*,struct RClass*,char*,int ) ;
 int FUNC_12 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_13 (TYPE_1__*,struct RObject*,char*,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 (TYPE_1__*,char*) ;
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
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_15 (TYPE_1__*,int ,struct RClass*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_16 (struct RClass*) ;
 int FUNC_17 (TYPE_1__*,struct RClass*,char*) ;
 int VAR_38 ;

void
FUNC_18(mrb_state *VAR_39)
{
  struct RClass *VAR_40;
  struct RClass *VAR_41;
  struct RClass *VAR_42;
  struct RClass *VAR_43;


  VAR_40 = FUNC_6(VAR_39, 0);
  VAR_41 = FUNC_6(VAR_39, VAR_40); VAR_39->object_class = VAR_41;
  VAR_42 = FUNC_6(VAR_39, VAR_41); VAR_39->module_class = VAR_42;
  VAR_43 = FUNC_6(VAR_39, VAR_42); VAR_39->class_class = VAR_43;

  VAR_40->c = VAR_41->c = VAR_42->c = VAR_43->c = VAR_43;
  FUNC_7(VAR_39, VAR_40);
  FUNC_7(VAR_39, VAR_41);
  FUNC_7(VAR_39, VAR_42);
  FUNC_7(VAR_39, VAR_43);


  FUNC_11(VAR_39, VAR_40, "BasicObject", FUNC_16(VAR_40));
  FUNC_11(VAR_39, VAR_41, "BasicObject", FUNC_16(VAR_40));
  FUNC_11(VAR_39, VAR_41, "Object", FUNC_16(VAR_41));
  FUNC_11(VAR_39, VAR_41, "Module", FUNC_16(VAR_42));
  FUNC_11(VAR_39, VAR_41, "Class", FUNC_16(VAR_43));


  FUNC_8(VAR_39, ((void*)0), VAR_40, FUNC_14(VAR_39, "BasicObject"));
  FUNC_8(VAR_39, ((void*)0), VAR_41, FUNC_14(VAR_39, "Object"));
  FUNC_8(VAR_39, ((void*)0), VAR_42, FUNC_14(VAR_39, "Module"));
  FUNC_8(VAR_39, ((void*)0), VAR_43, FUNC_14(VAR_39, "Class"));

  VAR_39->proc_class = FUNC_9(VAR_39, "Proc", VAR_39->object_class);
  FUNC_5(VAR_39->proc_class, VAR_3);

  FUNC_5(VAR_43, VAR_0);
  FUNC_12(VAR_39, VAR_40, "initialize", VAR_6, FUNC_2());
  FUNC_12(VAR_39, VAR_40, "!", VAR_7, FUNC_2());
  FUNC_12(VAR_39, VAR_40, "==", VAR_34, FUNC_4(1));
  FUNC_12(VAR_39, VAR_40, "!=", VAR_37, FUNC_4(1));
  FUNC_12(VAR_39, VAR_40, "__id__", VAR_35, FUNC_2());
  FUNC_12(VAR_39, VAR_40, "__send__", VAR_11, FUNC_0());
  FUNC_12(VAR_39, VAR_40, "instance_eval", VAR_36, FUNC_0());

  FUNC_10(VAR_39, VAR_43, "new", VAR_9, FUNC_3(1));
  FUNC_12(VAR_39, VAR_43, "superclass", VAR_10, FUNC_2());
  FUNC_12(VAR_39, VAR_43, "new", VAR_12, FUNC_0());
  FUNC_12(VAR_39, VAR_43, "initialize", VAR_8, FUNC_3(1));
  FUNC_12(VAR_39, VAR_43, "inherited", VAR_6, FUNC_4(1));

  FUNC_5(VAR_42, VAR_1);
  FUNC_12(VAR_39, VAR_42, "extend_object", VAR_24, FUNC_4(1));
  FUNC_12(VAR_39, VAR_42, "extended", VAR_6, FUNC_4(1));
  FUNC_12(VAR_39, VAR_42, "prepended", VAR_6, FUNC_4(1));
  FUNC_12(VAR_39, VAR_42, "prepend_features", VAR_30, FUNC_4(1));
  FUNC_12(VAR_39, VAR_42, "include?", VAR_25, FUNC_4(1));
  FUNC_12(VAR_39, VAR_42, "append_features", VAR_15, FUNC_4(1));
  FUNC_12(VAR_39, VAR_42, "class_eval", VAR_28, FUNC_0());
  FUNC_12(VAR_39, VAR_42, "included", VAR_6, FUNC_4(1));
  FUNC_12(VAR_39, VAR_42, "initialize", VAR_26, FUNC_2());
  FUNC_12(VAR_39, VAR_42, "module_eval", VAR_28, FUNC_0());
  FUNC_12(VAR_39, VAR_42, "module_function", VAR_29, FUNC_0());
  FUNC_12(VAR_39, VAR_42, "private", VAR_22, FUNC_0());
  FUNC_12(VAR_39, VAR_42, "protected", VAR_22, FUNC_0());
  FUNC_12(VAR_39, VAR_42, "public", VAR_22, FUNC_0());
  FUNC_12(VAR_39, VAR_42, "attr_reader", VAR_16, FUNC_0());
  FUNC_12(VAR_39, VAR_42, "attr_writer", VAR_17, FUNC_0());
  FUNC_12(VAR_39, VAR_42, "to_s", VAR_32, FUNC_2());
  FUNC_12(VAR_39, VAR_42, "inspect", VAR_32, FUNC_2());
  FUNC_12(VAR_39, VAR_42, "alias_method", VAR_13, FUNC_0());
  FUNC_12(VAR_39, VAR_42, "ancestors", VAR_14, FUNC_2());
  FUNC_12(VAR_39, VAR_42, "undef_method", VAR_33, FUNC_0());
  FUNC_12(VAR_39, VAR_42, "const_defined?", VAR_18, FUNC_1(1,1));
  FUNC_12(VAR_39, VAR_42, "const_get", VAR_19, FUNC_4(1));
  FUNC_12(VAR_39, VAR_42, "const_set", VAR_21, FUNC_4(2));
  FUNC_12(VAR_39, VAR_42, "remove_const", VAR_31, FUNC_4(1));
  FUNC_12(VAR_39, VAR_42, "const_missing", VAR_20, FUNC_4(1));
  FUNC_12(VAR_39, VAR_42, "method_defined?", VAR_27, FUNC_4(1));
  FUNC_12(VAR_39, VAR_42, "define_method", VAR_5, FUNC_1(1,1));
  FUNC_12(VAR_39, VAR_42, "===", VAR_23, FUNC_4(1));

  FUNC_17(VAR_39, VAR_43, "append_features");
  FUNC_17(VAR_39, VAR_43, "extend_object");

  VAR_39->top_self = (struct RObject*)FUNC_15(VAR_39, VAR_2, VAR_39->object_class);
  FUNC_13(VAR_39, VAR_39->top_self, "inspect", VAR_4, FUNC_2());
  FUNC_13(VAR_39, VAR_39->top_self, "to_s", VAR_4, FUNC_2());
  FUNC_13(VAR_39, VAR_39->top_self, "define_method", VAR_38, FUNC_1(1,1));
}
