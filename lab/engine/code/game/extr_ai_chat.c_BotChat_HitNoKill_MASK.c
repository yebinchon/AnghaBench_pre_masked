
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int name ;
struct TYPE_11__ {scalar_t__ lastchat_time; size_t enemy; int chatto; int character; } ;
typedef TYPE_2__ bot_state_t ;
typedef int aas_entityinfo_t ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {TYPE_1__* client; } ;
struct TYPE_10__ {int lasthurt_mod; } ;


 int FUNC_0 (TYPE_2__*,char*,char*,char*,int *) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 char* FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (size_t,char*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 () ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 float FUNC_10 () ;
 float FUNC_11 (int ,int ,int ,int) ;

int FUNC_12(bot_state_t *VAR_10) {
 char VAR_11[32], *VAR_12;
 float VAR_13;
 aas_entityinfo_t VAR_14;

 if (VAR_5.integer) return VAR_8;
 if (VAR_10->lastchat_time > FUNC_8() - VAR_3) return VAR_8;
 if (FUNC_2() <= 1) return VAR_8;
 VAR_13 = FUNC_11(VAR_10->character, VAR_0, 0, 1);

 if (FUNC_9()) return VAR_8;

 if (VAR_7 == VAR_2) return VAR_8;

 if (!VAR_4.integer) {
  if (FUNC_10() > VAR_13 * 0.5) return VAR_8;
 }
 if (!FUNC_3(VAR_10)) return VAR_8;

 if (FUNC_4(VAR_10)) return VAR_8;

 FUNC_1(VAR_10->enemy, &VAR_14);
 if (FUNC_7(&VAR_14)) return VAR_8;

 FUNC_6(VAR_10->enemy, VAR_11, sizeof(VAR_11));
 VAR_12 = FUNC_5(VAR_6[VAR_10->enemy].client->lasthurt_mod);

 FUNC_0(VAR_10, "hit_nokill", VAR_11, VAR_12, ((void*)0));
 VAR_10->lastchat_time = FUNC_8();
 VAR_10->chatto = VAR_1;
 return VAR_9;
}
