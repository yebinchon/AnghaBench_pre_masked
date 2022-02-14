
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct RProc {int * c; } ;
struct TYPE_3__ {scalar_t__ no_exec; scalar_t__ dump_result; } ;
typedef TYPE_1__ mrbc_context ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_irep ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct RProc*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct RProc*) ;
 struct RProc* FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct RProc*,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static mrb_value
FUNC_8(mrb_state *VAR_0, mrb_irep *VAR_1, mrbc_context *VAR_2)
{
  struct RProc *VAR_3;

  if (!VAR_1) {
    FUNC_0(VAR_0);
    return FUNC_3();
  }
  VAR_3 = FUNC_5(VAR_0, VAR_1);
  VAR_3->c = ((void*)0);
  FUNC_2(VAR_0, VAR_1);
  if (VAR_2 && VAR_2->dump_result) FUNC_1(VAR_0, VAR_3);
  if (VAR_2 && VAR_2->no_exec) return FUNC_4(VAR_3);
  return FUNC_6(VAR_0, VAR_3, FUNC_7(VAR_0), 0);
}
