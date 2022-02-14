
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csym_arg {scalar_t__ sym; struct RClass* c; } ;
struct RClass {int iv; } ;
typedef scalar_t__ mrb_sym ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,struct csym_arg*) ;

__attribute__((used)) static mrb_sym
FUNC_1(mrb_state *VAR_1, struct RClass *VAR_2, struct RClass *VAR_3)
{
  struct csym_arg VAR_4;

  if (!VAR_2) return 0;
  if (VAR_2 == VAR_3) return 0;
  VAR_4.c = VAR_3;
  VAR_4.sym = 0;
  FUNC_0(VAR_1, VAR_2->iv, VAR_0, &VAR_4);
  return VAR_4.sym;
}
