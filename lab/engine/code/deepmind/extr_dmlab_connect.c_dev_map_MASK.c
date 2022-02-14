
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* (* next_map ) (int ) ;int (* add_bots ) (int ) ;} ;
struct TYPE_8__ {int userdata; TYPE_1__ hooks; } ;
struct TYPE_7__ {char const* engine_frame_period_msec; TYPE_3__* dm_ctx; } ;
typedef TYPE_2__ GameContext ;
typedef TYPE_3__ DeepmindContext ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (char*,char const*) ;

__attribute__((used)) static void FUNC_9(GameContext* VAR_0) {
  DeepmindContext* VAR_1 = VAR_0->dm_ctx;
  FUNC_2("fixedtime", FUNC_8("%d", VAR_0->engine_frame_period_msec));
  const char* VAR_2 = VAR_1->hooks.next_map(VAR_1->userdata);
  if (VAR_2[0] == '\0') {
    FUNC_0("map_restart 0");
    FUNC_0("updatecustomitems");
    FUNC_1();
  } else {
    if (!FUNC_4(VAR_0, VAR_2)) {
      FUNC_5(FUNC_8("Didn't find map '%s'\n", VAR_2));
      FUNC_3(1);
    }
    FUNC_0(FUNC_8("devmap \"%s\"", VAR_2));
    FUNC_1();
    VAR_1->hooks.add_bots(VAR_1->userdata);
  }
}
