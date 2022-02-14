
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* custom_action_discrete_bounds ) (int ,int,int*,int*) ;} ;
struct TYPE_6__ {int userdata; TYPE_1__ hooks; } ;
struct TYPE_5__ {TYPE_3__* dm_ctx; } ;
typedef TYPE_2__ GameContext ;
typedef TYPE_3__ DeepmindContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int*,int*) ;

__attribute__((used)) static void FUNC_2(
    void* VAR_4,
    int VAR_5, int* VAR_6, int* VAR_7) {
  if (VAR_5 < VAR_2) {
    *VAR_6 = -VAR_3;
    *VAR_7 = VAR_3;
  } else if (VAR_5 < VAR_1) {
    *VAR_6 = -1;
    *VAR_7 = 1;
  } else if (VAR_5 < FUNC_0(VAR_0)) {
    *VAR_6 = 0;
    *VAR_7 = 1;
  } else {
    GameContext* VAR_8 = VAR_4;
    DeepmindContext* VAR_9 = VAR_8->dm_ctx;
    VAR_9->hooks.custom_action_discrete_bounds(
        VAR_9->userdata, VAR_5 - FUNC_0(VAR_0), VAR_6,
        VAR_7);
  }
}
