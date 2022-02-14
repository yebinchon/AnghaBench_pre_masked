
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ groundEntityNum; int pm_flags; scalar_t__ pm_time; scalar_t__ viewheight; int velocity; int origin; } ;
struct TYPE_8__ {double walker; int ms; int viewangles; TYPE_1__ cur_ps; int thinktime; int client; int entitynum; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_9__ {int viewangles; int or_moveflags; int presencetype; int thinktime; int client; int entitynum; int * viewoffset; int velocity; int origin; } ;
typedef TYPE_3__ bot_initmove_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ,TYPE_3__*) ;

void FUNC_4(bot_state_t *VAR_10) {
 bot_initmove_t VAR_11;

 FUNC_2(&VAR_11, 0, sizeof(bot_initmove_t));
 FUNC_1(VAR_10->cur_ps.origin, VAR_11.origin);
 FUNC_1(VAR_10->cur_ps.velocity, VAR_11.velocity);
 FUNC_0(VAR_11.viewoffset);
 VAR_11.viewoffset[2] += VAR_10->cur_ps.viewheight;
 VAR_11.entitynum = VAR_10->entitynum;
 VAR_11.client = VAR_10->client;
 VAR_11.thinktime = VAR_10->thinktime;

 if (VAR_10->cur_ps.groundEntityNum != VAR_0) VAR_11.or_moveflags |= VAR_1;

 if ((VAR_10->cur_ps.pm_flags & VAR_6) && (VAR_10->cur_ps.pm_time > 0)) {
  VAR_11.or_moveflags |= VAR_2;
 }

 if ((VAR_10->cur_ps.pm_flags & VAR_7) && (VAR_10->cur_ps.pm_time > 0)) {
  VAR_11.or_moveflags |= VAR_4;
 }

 if (VAR_10->cur_ps.pm_flags & VAR_5) VAR_11.presencetype = VAR_8;
 else VAR_11.presencetype = VAR_9;

 if (VAR_10->walker > 0.5) VAR_11.or_moveflags |= VAR_3;

 FUNC_1(VAR_10->viewangles, VAR_11.viewangles);

 FUNC_3(VAR_10->ms, &VAR_11);
}
