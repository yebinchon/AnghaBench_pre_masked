
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_state ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_2 (int *,char*) ;

void
FUNC_3(mrb_state* VAR_1) {
  struct RClass *VAR_2 = FUNC_2(VAR_1, "CExtension");
  FUNC_1(VAR_1, VAR_2, "c_method", VAR_0, FUNC_0());
}
