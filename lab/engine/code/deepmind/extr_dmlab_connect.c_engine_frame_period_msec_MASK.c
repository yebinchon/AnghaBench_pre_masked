
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* context; } ;
struct TYPE_4__ {int engine_frame_period_msec; } ;
typedef TYPE_1__ GameContext ;
typedef TYPE_2__ DeepmindContext ;


 TYPE_2__* FUNC_0 () ;

__attribute__((used)) static int FUNC_1() {
  DeepmindContext* VAR_0 = FUNC_0();
  GameContext* VAR_1 = VAR_0->context;
  return VAR_1->engine_frame_period_msec;
}
