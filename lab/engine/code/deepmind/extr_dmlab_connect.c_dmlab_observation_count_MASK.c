
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* custom_observation_count ) (int ) ;} ;
struct TYPE_6__ {int userdata; TYPE_1__ hooks; } ;
struct TYPE_5__ {TYPE_3__* dm_ctx; } ;
typedef TYPE_2__ GameContext ;
typedef TYPE_3__ DeepmindContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void* VAR_1) {
  GameContext* VAR_2 = VAR_1;
  DeepmindContext* VAR_3 = VAR_2->dm_ctx;
  return FUNC_0(VAR_0) +
         VAR_3->hooks.custom_observation_count(VAR_3->userdata);
}
