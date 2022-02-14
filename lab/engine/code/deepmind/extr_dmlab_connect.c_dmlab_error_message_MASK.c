
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* (* error_message ) (int ) ;} ;
struct TYPE_6__ {int userdata; TYPE_1__ hooks; } ;
struct TYPE_5__ {TYPE_3__* dm_ctx; } ;
typedef TYPE_2__ GameContext ;
typedef TYPE_3__ DeepmindContext ;


 char const* FUNC_0 (int ) ;

__attribute__((used)) static const char* FUNC_1(void* VAR_0) {
  GameContext* VAR_1 = VAR_0;
  DeepmindContext* VAR_2 = VAR_1->dm_ctx;
  return VAR_2->hooks.error_message(VAR_2->userdata);
}
