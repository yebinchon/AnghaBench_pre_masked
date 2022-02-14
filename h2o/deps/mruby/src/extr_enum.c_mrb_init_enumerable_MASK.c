
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_state ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct RClass* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,struct RClass*,char*,int ,int ) ;

void
FUNC_3(mrb_state *VAR_1)
{
  struct RClass *VAR_2;
  VAR_2 = FUNC_1(VAR_1, "Enumerable");
  FUNC_2(VAR_1, VAR_2, "__update_hash", VAR_0, FUNC_0(1));
}
