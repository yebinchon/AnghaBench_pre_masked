
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_8__ {int module_class; struct RClass* kernel_module; int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*,int ,char*,char*) ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_7 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (TYPE_1__*,int ,struct RClass*) ;
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

void
FUNC_9(mrb_state *VAR_25)
{
  struct RClass *VAR_26;

  VAR_25->kernel_module = VAR_26 = FUNC_7(VAR_25, "Kernel");
  FUNC_5(VAR_25, VAR_26, "block_given?", VAR_2, FUNC_1());
  FUNC_5(VAR_25, VAR_26, "iterator?", VAR_2, FUNC_1());
;
  FUNC_5(VAR_25, VAR_26, "raise", VAR_4, FUNC_2(2));


  FUNC_6(VAR_25, VAR_26, "===", VAR_1, FUNC_3(1));
  FUNC_6(VAR_25, VAR_26, "block_given?", VAR_2, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "class", VAR_7, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "clone", VAR_8, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "dup", VAR_9, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "eql?", VAR_10, FUNC_3(1));
  FUNC_6(VAR_25, VAR_26, "equal?", VAR_10, FUNC_3(1));
  FUNC_6(VAR_25, VAR_26, "extend", VAR_11, FUNC_0());
  FUNC_6(VAR_25, VAR_26, "freeze", VAR_12, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "frozen?", VAR_13, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "global_variables", VAR_3, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "hash", VAR_14, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "initialize_copy", VAR_16, FUNC_3(1));
  FUNC_6(VAR_25, VAR_26, "inspect", VAR_17, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "instance_of?", VAR_23, FUNC_3(1));

  FUNC_6(VAR_25, VAR_26, "is_a?", VAR_18, FUNC_3(1));
  FUNC_6(VAR_25, VAR_26, "iterator?", VAR_2, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "kind_of?", VAR_18, FUNC_3(1));



  FUNC_6(VAR_25, VAR_26, "nil?", VAR_5, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "object_id", VAR_15, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "raise", VAR_4, FUNC_0());
  FUNC_6(VAR_25, VAR_26, "remove_instance_variable", VAR_20,FUNC_3(1));
  FUNC_6(VAR_25, VAR_26, "respond_to?", VAR_24, FUNC_0());
  FUNC_6(VAR_25, VAR_26, "to_s", VAR_0, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "__case_eqq", VAR_6, FUNC_3(1));
  FUNC_6(VAR_25, VAR_26, "__to_int", VAR_21, FUNC_1());
  FUNC_6(VAR_25, VAR_26, "__to_str", VAR_22, FUNC_1());

  FUNC_8(VAR_25, VAR_25->object_class, VAR_25->kernel_module);
  FUNC_4(VAR_25, VAR_25->module_class, "dup", "clone");
}
