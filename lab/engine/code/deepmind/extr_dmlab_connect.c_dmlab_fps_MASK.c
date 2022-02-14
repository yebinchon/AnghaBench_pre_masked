
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double engine_frame_period_msec; } ;
typedef TYPE_1__ GameContext ;


 double VAR_0 ;

__attribute__((used)) static int FUNC_0(void* VAR_1) {
  GameContext* VAR_2 = VAR_1;
  if (VAR_2->engine_frame_period_msec > 0) {
    return (1000.0 * VAR_0) / VAR_2->engine_frame_period_msec;
  } else {
    return 0;
  }
}
