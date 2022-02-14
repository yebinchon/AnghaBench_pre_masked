
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcpcb {int t_flags; } ;
struct TYPE_2__ {int rc_tmap; int rc_mtree; } ;
struct tcp_rack {scalar_t__ sack_attack_disable; TYPE_1__ r_ctl; } ;
struct rack_sendmap {int r_flags; size_t r_rtr_cnt; scalar_t__* r_tim_lastsent; scalar_t__ r_dupack; } ;
typedef size_t int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 struct rack_sendmap* FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct tcp_rack*,scalar_t__,scalar_t__) ;
 struct rack_sendmap* FUNC_4 (struct tcp_rack*) ;
 scalar_t__ FUNC_5 (struct tcpcb*,struct tcp_rack*) ;
 int FUNC_6 (struct tcp_rack*,struct rack_sendmap*,scalar_t__,scalar_t__,int) ;

struct rack_sendmap *
FUNC_7(struct tcpcb *VAR_4, struct tcp_rack *VAR_5, uint32_t VAR_6)
{
 struct rack_sendmap *VAR_7 = ((void*)0);
 int32_t VAR_8;
 uint32_t VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;


 if (FUNC_0(&VAR_5->r_ctl.rc_mtree)) {
  return (((void*)0));
 }
 if (VAR_4->t_flags & VAR_3) {

  return (((void*)0));
 }

 VAR_7 = FUNC_1(&VAR_5->r_ctl.rc_tmap);
 if (VAR_7 && ((VAR_7->r_flags & VAR_1) == 0)) {
  goto check_it;
 }
 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 == ((void*)0)) {
  return (((void*)0));
 }
check_it:
 if (VAR_7->r_flags & VAR_1) {
  return (((void*)0));
 }
 if ((VAR_7->r_flags & VAR_2) == 0) {

  return (((void*)0));
 }
 VAR_9 = FUNC_5(VAR_4, VAR_5);
 VAR_8 = VAR_7->r_rtr_cnt - 1;
 VAR_11 = VAR_7->r_tim_lastsent[VAR_8];
 VAR_10 = FUNC_3(VAR_5, VAR_9, VAR_6);
 if ((VAR_6 == VAR_11) ||
     (FUNC_2(VAR_6, VAR_11))) {

  return (((void*)0));
 }
 if ((VAR_6 - VAR_11) < VAR_10) {

  return (((void*)0));
 }
 if ((VAR_7->r_dupack >= VAR_0) ||
     ((VAR_7->r_flags & VAR_2) &&
      (VAR_5->sack_attack_disable == 0))) {
  FUNC_6(VAR_5, VAR_7, (VAR_6 - VAR_11), VAR_10, 1);
  return (VAR_7);
 }
 return (((void*)0));
}
