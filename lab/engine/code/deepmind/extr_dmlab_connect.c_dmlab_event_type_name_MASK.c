
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* (* type_name ) (int ,int) ;} ;
struct TYPE_6__ {TYPE_1__ events; } ;
struct TYPE_8__ {int userdata; TYPE_2__ hooks; } ;
struct TYPE_7__ {TYPE_4__* dm_ctx; } ;
typedef TYPE_3__ GameContext ;
typedef TYPE_4__ DeepmindContext ;


 char const* FUNC_0 (int ,int) ;

__attribute__((used)) static const char* FUNC_1(void* VAR_0, int VAR_1) {
  GameContext* VAR_2 = VAR_0;
  DeepmindContext* VAR_3 = VAR_2->dm_ctx;
  return VAR_3->hooks.events.type_name(VAR_3->userdata, VAR_1);
}
