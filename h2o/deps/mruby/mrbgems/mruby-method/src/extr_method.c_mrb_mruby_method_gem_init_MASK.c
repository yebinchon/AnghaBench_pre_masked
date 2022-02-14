
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_7__ {struct RClass* module_class; struct RClass* kernel_module; int object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*,struct RClass*,char*,char*) ;
 struct RClass* FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*,struct RClass*,char*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (TYPE_1__*,struct RClass*,char*) ;
 int VAR_10 ;

void
FUNC_7(mrb_state* VAR_11)
{
  struct RClass *VAR_12 = FUNC_4(VAR_11, "UnboundMethod", VAR_11->object_class);
  struct RClass *VAR_13 = FUNC_4(VAR_11, "Method", VAR_11->object_class);

  FUNC_6(VAR_11, VAR_12, "new");
  FUNC_5(VAR_11, VAR_12, "bind", VAR_10, FUNC_2(1));
  FUNC_5(VAR_11, VAR_12, "super_method", VAR_5, FUNC_1());
  FUNC_5(VAR_11, VAR_12, "==", VAR_2, FUNC_2(1));
  FUNC_3(VAR_11, VAR_12, "eql?", "==");
  FUNC_5(VAR_11, VAR_12, "to_s", VAR_6, FUNC_1());
  FUNC_5(VAR_11, VAR_12, "inspect", VAR_6, FUNC_1());
  FUNC_5(VAR_11, VAR_12, "arity", VAR_0, FUNC_1());
  FUNC_5(VAR_11, VAR_12, "source_location", VAR_4, FUNC_1());
  FUNC_5(VAR_11, VAR_12, "parameters", VAR_3, FUNC_1());

  FUNC_6(VAR_11, VAR_13, "new");
  FUNC_5(VAR_11, VAR_13, "==", VAR_2, FUNC_2(1));
  FUNC_3(VAR_11, VAR_13, "eql?", "==");
  FUNC_5(VAR_11, VAR_13, "to_s", VAR_6, FUNC_1());
  FUNC_5(VAR_11, VAR_13, "inspect", VAR_6, FUNC_1());
  FUNC_5(VAR_11, VAR_13, "call", VAR_1, FUNC_0());
  FUNC_3(VAR_11, VAR_13, "[]", "call");
  FUNC_5(VAR_11, VAR_13, "unbind", VAR_7, FUNC_1());
  FUNC_5(VAR_11, VAR_13, "super_method", VAR_5, FUNC_1());
  FUNC_5(VAR_11, VAR_13, "arity", VAR_0, FUNC_1());
  FUNC_5(VAR_11, VAR_13, "source_location", VAR_4, FUNC_1());
  FUNC_5(VAR_11, VAR_13, "parameters", VAR_3, FUNC_1());

  FUNC_5(VAR_11, VAR_11->kernel_module, "method", VAR_8, FUNC_2(1));

  FUNC_5(VAR_11, VAR_11->module_class, "instance_method", VAR_9, FUNC_2(1));
}
