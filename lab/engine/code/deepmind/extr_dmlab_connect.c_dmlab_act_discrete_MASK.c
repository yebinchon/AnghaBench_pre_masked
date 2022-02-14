
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* custom_action_discrete_apply ) (int ,int const*) ;int (* set_actions ) (int ,float,float,int,int,int,int) ;} ;
struct TYPE_6__ {int userdata; TYPE_1__ hooks; } ;
struct TYPE_5__ {int is_connecting; TYPE_3__* dm_ctx; scalar_t__ is_server; } ;
typedef TYPE_2__ GameContext ;
typedef TYPE_3__ DeepmindContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int const VAR_8 ;
 int FUNC_1 (int ,float,float,int,int,int,int) ;
 int FUNC_2 (int ,int const*) ;

__attribute__((used)) static void FUNC_3(void* VAR_9, const int VAR_10[]) {
  GameContext* VAR_11 = VAR_9;
  VAR_11->is_connecting = 0;
  if (VAR_11->is_server) return;
  DeepmindContext* VAR_12 = VAR_11->dm_ctx;
  int VAR_13 = VAR_10[VAR_7] * 127;
  int VAR_14 = VAR_10[VAR_6] * 127;
  float VAR_15 =
      -VAR_10[VAR_5] * VAR_8;
  float VAR_16 =
      VAR_10[VAR_4] * VAR_8;
  int VAR_17 = (VAR_10[VAR_3] - VAR_10[VAR_1]) * 127;
  int VAR_18 = VAR_10[VAR_2];

  VAR_12->hooks.set_actions(VAR_12->userdata, VAR_16, VAR_15, VAR_14, VAR_13,
                         VAR_17, VAR_18);
  VAR_12->hooks.custom_action_discrete_apply(VAR_12->userdata,
                                          VAR_10 + FUNC_0(VAR_0));
}
