
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_4__ {int next_bpno; int xphase; int xm; } ;
typedef TYPE_1__ mrb_debug_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static mrb_debug_context*
FUNC_2(mrb_state *VAR_2)
{
  mrb_debug_context *VAR_3 = (mrb_debug_context*)FUNC_1(VAR_2, sizeof(mrb_debug_context));

  FUNC_0(VAR_3, 0, sizeof(mrb_debug_context));

  VAR_3->xm = VAR_0;
  VAR_3->xphase = VAR_1;
  VAR_3->next_bpno = 1;

  return VAR_3;
}
