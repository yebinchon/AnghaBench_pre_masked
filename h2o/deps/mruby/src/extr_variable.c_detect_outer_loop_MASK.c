
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_state ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 struct RClass* FUNC_0 (int *,struct RClass*) ;

__attribute__((used)) static mrb_bool
FUNC_1(mrb_state *VAR_2, struct RClass *VAR_3)
{
  struct RClass *VAR_4 = VAR_3;
  struct RClass *VAR_5 = VAR_3;

  for (;;) {
    if (VAR_5 == ((void*)0)) return VAR_0;
    VAR_5 = FUNC_0(VAR_2, VAR_5);
    if (VAR_5 == ((void*)0)) return VAR_0;
    VAR_5 = FUNC_0(VAR_2, VAR_5);
    VAR_4 = FUNC_0(VAR_2, VAR_4);
    if (VAR_4 == VAR_5) return VAR_1;
  }
}
