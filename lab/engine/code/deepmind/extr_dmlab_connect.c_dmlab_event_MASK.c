
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void (* export_event ) (int ,int,int *) ;} ;
struct TYPE_6__ {TYPE_1__ events; } ;
struct TYPE_8__ {int userdata; TYPE_2__ hooks; } ;
struct TYPE_7__ {TYPE_4__* dm_ctx; } ;
typedef TYPE_3__ GameContext ;
typedef int EnvCApi_Event ;
typedef TYPE_4__ DeepmindContext ;


 void FUNC_0 (int ,int,int *) ;

__attribute__((used)) static void FUNC_1(void* VAR_0, int VAR_1, EnvCApi_Event* VAR_2) {
  GameContext* VAR_3 = VAR_0;
  DeepmindContext* VAR_4 = VAR_3->dm_ctx;
  return VAR_4->hooks.events.export_event(VAR_4->userdata, VAR_1, VAR_2);
}
