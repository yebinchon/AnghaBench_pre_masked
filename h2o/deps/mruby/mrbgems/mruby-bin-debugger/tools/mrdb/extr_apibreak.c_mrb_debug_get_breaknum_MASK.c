
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_3__ {int bpnum; } ;
typedef TYPE_1__ mrb_debug_context ;
typedef int int32_t ;


 int VAR_0 ;

int32_t
FUNC_0(mrb_state *VAR_1, mrb_debug_context *VAR_2)
{
  if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0))) {
    return VAR_0;
  }

  return VAR_2->bpnum;
}
