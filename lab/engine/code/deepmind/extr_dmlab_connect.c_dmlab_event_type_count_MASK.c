
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* type_count ) (int ) ;} ;
struct TYPE_6__ {TYPE_1__ events; } ;
struct TYPE_8__ {int userdata; TYPE_2__ hooks; } ;
struct TYPE_7__ {TYPE_4__* dm_ctx; } ;
typedef TYPE_3__ GameContext ;
typedef TYPE_4__ DeepmindContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(void* VAR_0) {
  GameContext* VAR_1 = VAR_0;
  DeepmindContext* VAR_2 = VAR_1->dm_ctx;
  return VAR_2->hooks.events.type_count(VAR_2->userdata);
}
