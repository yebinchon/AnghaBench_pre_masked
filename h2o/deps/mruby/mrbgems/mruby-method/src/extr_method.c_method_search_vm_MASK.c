
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RProc {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef int mrb_method_t ;


 int FUNC_0 (int ) ;
 struct RProc* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,struct RClass**,int ) ;
 struct RProc* FUNC_5 (int *,int ) ;

__attribute__((used)) static struct RProc *
FUNC_6(mrb_state *VAR_0, struct RClass **VAR_1, mrb_sym VAR_2)
{
  mrb_method_t VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
  if (FUNC_3(VAR_3))
    return ((void*)0);
  if (FUNC_2(VAR_3))
    return FUNC_1(VAR_3);
  return FUNC_5(VAR_0, FUNC_0(VAR_3));
}
