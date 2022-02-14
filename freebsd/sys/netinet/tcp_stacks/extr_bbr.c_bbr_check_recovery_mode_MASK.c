
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {int t_flags; } ;
struct TYPE_2__ {int rc_lost_bytes; int rc_lost; int rc_tmap; int rc_map; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;
struct bbr_sendmap {int r_flags; size_t r_rtr_cnt; scalar_t__ r_dupack; scalar_t__ r_end; scalar_t__ r_start; int * r_tim_lastsent; } ;
typedef size_t int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct bbr_sendmap* FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (struct tcpcb*,int *,int ,struct bbr_sendmap*) ;
 struct bbr_sendmap* FUNC_4 (struct tcp_bbr*) ;
 scalar_t__ FUNC_5 (struct tcp_bbr*,struct bbr_sendmap*,int ) ;
 int FUNC_6 (char*,struct tcpcb*,struct tcp_bbr*,struct bbr_sendmap*) ;

__attribute__((used)) static struct bbr_sendmap *
FUNC_7(struct tcpcb *VAR_6, struct tcp_bbr *VAR_7, uint32_t VAR_8)
{






 struct bbr_sendmap *VAR_9;
 int32_t VAR_10;

 if (FUNC_1(&VAR_7->r_ctl.rc_map)) {

  return (((void*)0));
 }
 VAR_9 = FUNC_2(&VAR_7->r_ctl.rc_tmap);
 if (VAR_9 == ((void*)0)) {

  return (((void*)0));
 }
 if (VAR_6->t_flags & VAR_5) {

  return (((void*)0));
 }
 if (VAR_9->r_flags & VAR_0) {




  VAR_9 = FUNC_4(VAR_7);
  if (VAR_9 == ((void*)0))
   return (((void*)0));
 }
 VAR_10 = VAR_9->r_rtr_cnt - 1;
 if (FUNC_0(VAR_8, VAR_9->r_tim_lastsent[VAR_10])) {

  return (((void*)0));
 }

 if (FUNC_5(VAR_7, VAR_9, VAR_8) &&
     ((VAR_9->r_dupack >= VAR_4) ||
      (VAR_9->r_flags & VAR_2))) {
  if ((VAR_9->r_flags & VAR_1) == 0) {
   VAR_9->r_flags |= VAR_1;
   VAR_7->r_ctl.rc_lost += VAR_9->r_end - VAR_9->r_start;
   VAR_7->r_ctl.rc_lost_bytes += VAR_9->r_end - VAR_9->r_start;
  }
  FUNC_3(VAR_6, ((void*)0), VAR_3, VAR_9);




  return (VAR_9);
 }
 return (((void*)0));
}
