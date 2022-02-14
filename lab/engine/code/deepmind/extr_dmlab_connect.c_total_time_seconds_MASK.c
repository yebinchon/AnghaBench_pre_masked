
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* context; } ;
struct TYPE_4__ {double total_engine_time_msec; } ;
typedef TYPE_1__ GameContext ;
typedef TYPE_2__ DeepmindContext ;


 TYPE_2__* FUNC_0 () ;
 double VAR_0 ;

__attribute__((used)) static double FUNC_1() {
  DeepmindContext* VAR_1 = FUNC_0();
  GameContext* VAR_2 = VAR_1->context;
  return VAR_2->total_engine_time_msec / (VAR_0 * 1000.0);
}
