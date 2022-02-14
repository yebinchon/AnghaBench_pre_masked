
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcpcb {int snd_ssthresh; int snd_cwnd; scalar_t__ t_fb_ptr; } ;
struct TYPE_2__ {int rc_ssthresh_at; int rc_cwnd_at; int rc_rsm_start; int rc_tmap; int rc_mtree; } ;
struct tcp_rack {TYPE_1__ r_ctl; } ;
struct rack_sendmap {int r_flags; size_t r_rtr_cnt; scalar_t__* r_tim_lastsent; int r_start; } ;
typedef size_t int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct rack_sendmap* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct tcp_rack*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct tcpcb*,int *,int ) ;
 struct rack_sendmap* FUNC_4 (struct tcp_rack*) ;
 scalar_t__ FUNC_5 (struct tcpcb*,struct tcp_rack*) ;

__attribute__((used)) static struct rack_sendmap *
FUNC_6(struct tcpcb *VAR_2, uint32_t VAR_3)
{





 struct tcp_rack *VAR_4;
 struct rack_sendmap *VAR_5;
 int32_t VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_4 = (struct tcp_rack *)VAR_2->t_fb_ptr;
 if (FUNC_0(&VAR_4->r_ctl.rc_mtree)) {
  return (((void*)0));
 }
 VAR_5 = FUNC_1(&VAR_4->r_ctl.rc_tmap);
 if (VAR_5 == ((void*)0))
  return (((void*)0));

 if (VAR_5->r_flags & VAR_1) {
  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5 == ((void*)0))
   return (((void*)0));
 }
 VAR_6 = VAR_5->r_rtr_cnt - 1;
 VAR_7 = FUNC_5(VAR_2, VAR_4);
 VAR_8 = FUNC_2(VAR_4, VAR_7, VAR_3);
 if (VAR_3 < VAR_5->r_tim_lastsent[VAR_6]) {
  return (((void*)0));
 }
 if ((VAR_3 - VAR_5->r_tim_lastsent[VAR_6]) < VAR_8) {
  return (((void*)0));
 }

 VAR_4->r_ctl.rc_rsm_start = VAR_5->r_start;
 VAR_4->r_ctl.rc_cwnd_at = VAR_2->snd_cwnd;
 VAR_4->r_ctl.rc_ssthresh_at = VAR_2->snd_ssthresh;
 FUNC_3(VAR_2, ((void*)0), VAR_0);
 return (VAR_5);
}
