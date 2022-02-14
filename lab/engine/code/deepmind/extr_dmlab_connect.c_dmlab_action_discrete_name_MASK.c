
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* (* custom_action_discrete_name ) (int ,int) ;} ;
struct TYPE_6__ {int userdata; TYPE_1__ hooks; } ;
struct TYPE_5__ {TYPE_3__* dm_ctx; } ;
typedef TYPE_2__ GameContext ;
typedef TYPE_3__ DeepmindContext ;


 int FUNC_0 (char const**) ;
 char const** VAR_0 ;
 char const* FUNC_1 (int ,int) ;

__attribute__((used)) static const char* FUNC_2(void* VAR_1, int VAR_2) {
  if (VAR_2 < FUNC_0(VAR_0)) {
    return VAR_0[VAR_2];
  } else {
    GameContext* VAR_3 = VAR_1;
    DeepmindContext* VAR_4 = VAR_3->dm_ctx;
    return VAR_4->hooks.custom_action_discrete_name(
        VAR_4->userdata, VAR_2 - FUNC_0(VAR_0));
  }
}
