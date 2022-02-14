
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int name ;
struct TYPE_10__ {scalar_t__ lastchat_time; scalar_t__ ltgtype; double thinktime; scalar_t__ lastkilledplayer; scalar_t__ client; int chatto; int character; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_12__ {int integer; } ;
struct TYPE_11__ {scalar_t__ integer; } ;


 int FUNC_0 (TYPE_1__*,char*,int ,char*,char*,char*,int ,int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_10 () ;
 TYPE_3__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 double FUNC_11 () ;
 int FUNC_12 (char*,int ) ;
 double FUNC_13 (int ,int ,int ,int) ;
 int FUNC_14 (scalar_t__,char*) ;

int FUNC_15(bot_state_t *VAR_13) {
 float VAR_14;
 char VAR_15[32];

 if (VAR_9.integer) return VAR_11;
 if (FUNC_1(VAR_13)) return VAR_11;
 if (VAR_13->lastchat_time > FUNC_9() - VAR_7) return VAR_11;

 if (VAR_10 == VAR_3) return VAR_11;

 if (VAR_13->ltgtype == VAR_6 ||
  VAR_13->ltgtype == VAR_5 ||
  VAR_13->ltgtype == VAR_4) return VAR_11;

 VAR_14 = FUNC_13(VAR_13->character, VAR_1, 0, 1);
 if (FUNC_11() > VAR_13->thinktime * 0.1) return VAR_11;
 if (!VAR_8.integer) {
  if (FUNC_11() > VAR_14) return VAR_11;
  if (FUNC_11() > 0.25) return VAR_11;
 }
 if (FUNC_3() <= 1) return VAR_11;

 if (!FUNC_6(VAR_13)) return VAR_11;

 if (FUNC_7(VAR_13)) return VAR_11;

 if (VAR_13->lastkilledplayer == VAR_13->client) {
  FUNC_12(VAR_15, FUNC_4(VAR_13));
 }
 else {
  FUNC_8(VAR_13->lastkilledplayer, VAR_15, sizeof(VAR_15));
 }
 if (FUNC_10()) {



  return VAR_11;
 }

 if (FUNC_11() < FUNC_13(VAR_13->character, VAR_0, 0, 1)) {
  FUNC_0(VAR_13, "random_misc",
     FUNC_4(VAR_13),
     VAR_15,
     "[invalid var]",
     "[invalid var]",
     FUNC_2(),
     FUNC_5(),
     ((void*)0));
 }
 else {
  FUNC_0(VAR_13, "random_insult",
     FUNC_4(VAR_13),
     VAR_15,
     "[invalid var]",
     "[invalid var]",
     FUNC_2(),
     FUNC_5(),
     ((void*)0));
 }
 VAR_13->lastchat_time = FUNC_9();
 VAR_13->chatto = VAR_2;
 return VAR_12;
}
