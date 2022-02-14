
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_state ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct RClass* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct RClass*,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_5(mrb_state* VAR_3)
{
  struct RClass * VAR_4 = FUNC_3(VAR_3, "Range");

  FUNC_4(VAR_3, VAR_4, "cover?", VAR_0, FUNC_2(1));
  FUNC_4(VAR_3, VAR_4, "last", VAR_1, FUNC_1(1));
  FUNC_4(VAR_3, VAR_4, "size", VAR_2, FUNC_0());
}
