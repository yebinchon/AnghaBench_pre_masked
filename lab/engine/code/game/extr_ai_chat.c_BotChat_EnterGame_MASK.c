
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ lastchat_time; int chatto; int client; int character; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_1__*,char*,int ,int ,char*,char*,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 () ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 float FUNC_8 () ;
 float FUNC_9 (int ,int ,int ,int) ;

int FUNC_10(bot_state_t *VAR_9) {
 char VAR_10[32];
 float VAR_11;

 if (VAR_5.integer) return VAR_7;
 if (VAR_9->lastchat_time > FUNC_6() - VAR_3) return VAR_7;

 if (FUNC_7()) return VAR_7;

 if (VAR_6 == VAR_2) return VAR_7;
 VAR_11 = FUNC_9(VAR_9->character, VAR_0, 0, 1);
 if (!VAR_4.integer) {
  if (FUNC_8() > VAR_11) return VAR_7;
 }
 if (FUNC_2() <= 1) return VAR_7;
 if (!FUNC_4(VAR_9)) return VAR_7;
 FUNC_0(VAR_9, "game_enter",
    FUNC_5(VAR_9->client, VAR_10, 32),
    FUNC_3(VAR_9),
    "[invalid var]",
    "[invalid var]",
    FUNC_1(),
    ((void*)0));
 VAR_9->lastchat_time = FUNC_6();
 VAR_9->chatto = VAR_1;
 return VAR_8;
}
