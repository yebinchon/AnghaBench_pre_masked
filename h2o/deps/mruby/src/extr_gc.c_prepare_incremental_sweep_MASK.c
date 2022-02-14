
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_3__ {int live; int live_after_mark; int heaps; int sweeps; int state; } ;
typedef TYPE_1__ mrb_gc ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(mrb_state *VAR_1, mrb_gc *VAR_2)
{
  VAR_2->state = VAR_0;
  VAR_2->sweeps = VAR_2->heaps;
  VAR_2->live_after_mark = VAR_2->live;
}
