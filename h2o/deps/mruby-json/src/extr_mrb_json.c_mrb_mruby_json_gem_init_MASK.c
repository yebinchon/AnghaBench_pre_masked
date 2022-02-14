
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_5__ {struct RClass* object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,struct RClass*,char*,int ,int) ;
 struct RClass* FUNC_4 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_5(mrb_state* VAR_6) {
  struct RClass *VAR_7 = FUNC_4(VAR_6, "JSON");

  FUNC_3(VAR_6, VAR_7, "load", VAR_2, FUNC_2(1));
  FUNC_3(VAR_6, VAR_7, "parse", VAR_3, FUNC_2(1));
  FUNC_3(VAR_6, VAR_7, "stringify", VAR_1, FUNC_2(1));
  FUNC_3(VAR_6, VAR_7, "dump", VAR_0, FUNC_2(1)|FUNC_1(1));
  FUNC_3(VAR_6, VAR_7, "generate", VAR_1, FUNC_2(1));
  FUNC_3(VAR_6, VAR_7, "pretty_generate", VAR_4, FUNC_2(1));
  FUNC_3(VAR_6, VAR_6->object_class, "to_json", VAR_5, FUNC_0());
}
