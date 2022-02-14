
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {scalar_t__ snd_cwnd; scalar_t__ snd_ssthresh; int snd_una; int snd_recover; int t_flags; scalar_t__ t_fb_ptr; } ;
struct TYPE_2__ {scalar_t__ rc_rsm_start; scalar_t__ rc_cwnd_at; scalar_t__ rc_ssthresh_at; int rc_reorder_ts; } ;
struct tcp_rack {TYPE_1__ r_ctl; } ;
struct rack_sendmap {int r_flags; scalar_t__ r_start; int r_end; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_3(struct tcpcb *VAR_6, struct rack_sendmap *VAR_7,
    uint32_t VAR_8, uint32_t VAR_9)
{





 struct tcp_rack *VAR_10;

 if (VAR_7->r_flags & VAR_0) {





  return;
 }
 if (VAR_7->r_flags & VAR_1) {



  return;
 }
 VAR_10 = (struct tcp_rack *)VAR_6->t_fb_ptr;

 if (FUNC_1(VAR_6->t_flags)) {
  if (VAR_10->r_ctl.rc_rsm_start == VAR_7->r_start) {




   FUNC_0(VAR_6->t_flags);
   VAR_6->snd_recover = VAR_6->snd_una;
   if (VAR_10->r_ctl.rc_cwnd_at > VAR_6->snd_cwnd)
    VAR_6->snd_cwnd = VAR_10->r_ctl.rc_cwnd_at;
   if (VAR_10->r_ctl.rc_ssthresh_at > VAR_6->snd_ssthresh)
    VAR_6->snd_ssthresh = VAR_10->r_ctl.rc_ssthresh_at;
  }
 }
 if (VAR_7->r_flags & VAR_2) {




  FUNC_2(VAR_5, 1);
  VAR_10->r_ctl.rc_reorder_ts = VAR_9;
 }
 FUNC_2(VAR_3, 1);
 FUNC_2(VAR_4, (VAR_7->r_end - VAR_7->r_start));
}
