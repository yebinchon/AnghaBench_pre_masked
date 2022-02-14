
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ lastchat_time; scalar_t__ enemy; int chatto; int character; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_1__*,char*,char*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 () ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 float FUNC_7 () ;
 int FUNC_8 (char*,char*) ;
 float FUNC_9 (int ,int ,int ,int) ;

int FUNC_10(bot_state_t *VAR_9) {
 char VAR_10[32];
 float VAR_11;

 if (VAR_5.integer) return VAR_7;
 if (VAR_9->lastchat_time > FUNC_5() - VAR_3) return VAR_7;
 if (FUNC_1() <= 1) return VAR_7;

 VAR_11 = FUNC_9(VAR_9->character, VAR_0, 0, 1);

 if (FUNC_6()) return VAR_7;

 if (VAR_6 == VAR_2) return VAR_7;

 if (!VAR_4.integer) {
  if (FUNC_7() > VAR_11) return VAR_7;
 }
 if (!FUNC_2(VAR_9)) return VAR_7;

 if (FUNC_3(VAR_9)) return VAR_7;

 if (VAR_9->enemy >= 0) FUNC_4(VAR_9->enemy, VAR_10, 32);
 else FUNC_8(VAR_10, "");
 FUNC_0(VAR_9, "enemy_suicide", VAR_10, ((void*)0));
 VAR_9->lastchat_time = FUNC_5();
 VAR_9->chatto = VAR_1;
 return VAR_8;
}
