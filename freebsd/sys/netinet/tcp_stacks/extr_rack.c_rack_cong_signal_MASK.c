
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct tcphdr {int th_ack; } ;
struct tcpcb {int t_flags; int snd_ssthresh; int snd_cwnd; int snd_cwnd_prev; int snd_ssthresh_prev; TYPE_2__* ccv; int t_badrxtwin; scalar_t__ snd_max; scalar_t__ snd_nxt; scalar_t__ snd_recover_prev; scalar_t__ snd_recover; int snd_wnd; int t_bytes_acked; int t_dupacks; scalar_t__ snd_una; scalar_t__ t_fb_ptr; int t_inpcb; } ;
struct TYPE_4__ {int rc_prr_sndcnt; scalar_t__ rc_prr_recovery_fs; int rc_loss_count; int rc_prr_out; int rc_prr_delivered; int rc_tlp_rtx_out; } ;
struct tcp_rack {TYPE_1__ r_ctl; } ;
struct TYPE_6__ {int (* cong_signal ) (TYPE_2__*,int) ;} ;
struct TYPE_5__ {int curack; } ;


 TYPE_3__* FUNC_0 (struct tcpcb*) ;




 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct tcpcb*) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct tcp_rack*,int) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_13(struct tcpcb *VAR_6, struct tcphdr *VAR_7, uint32_t VAR_8)
{
 struct tcp_rack *VAR_9;

 FUNC_4(VAR_6->t_inpcb);

 VAR_9 = (struct tcp_rack *)VAR_6->t_fb_ptr;
 switch (VAR_8) {
 case 130:
  VAR_6->t_flags &= ~VAR_3;
  VAR_6->t_flags &= ~VAR_2;
  if (!FUNC_6(VAR_6->t_flags)) {
   VAR_9->r_ctl.rc_tlp_rtx_out = 0;
   VAR_9->r_ctl.rc_prr_delivered = 0;
   VAR_9->r_ctl.rc_prr_out = 0;
   VAR_9->r_ctl.rc_loss_count = 0;
   VAR_9->r_ctl.rc_prr_sndcnt = FUNC_8(VAR_6);
   FUNC_11(VAR_9, 2);
   VAR_9->r_ctl.rc_prr_recovery_fs = VAR_6->snd_max - VAR_6->snd_una;
   VAR_6->snd_recover = VAR_6->snd_max;
   if (VAR_6->t_flags & VAR_0)
    VAR_6->t_flags |= VAR_1;
  }
  break;
 case 131:
  if (!FUNC_5(VAR_6->t_flags)) {
   FUNC_7(VAR_4);
   VAR_6->snd_recover = VAR_6->snd_max;
   if (VAR_6->t_flags & VAR_0)
    VAR_6->t_flags |= VAR_1;
  }
  break;
 case 129:
  VAR_6->t_dupacks = 0;
  VAR_6->t_bytes_acked = 0;
  FUNC_3(VAR_6->t_flags);
  VAR_6->snd_ssthresh = FUNC_9(2, FUNC_10(VAR_6->snd_wnd, VAR_6->snd_cwnd) / 2 /
      FUNC_8(VAR_6)) * FUNC_8(VAR_6);
  VAR_6->snd_cwnd = FUNC_8(VAR_6);
  break;
 case 128:
  FUNC_7(VAR_5);

  VAR_6->snd_cwnd = VAR_6->snd_cwnd_prev;
  VAR_6->snd_ssthresh = VAR_6->snd_ssthresh_prev;
  VAR_6->snd_recover = VAR_6->snd_recover_prev;
  if (VAR_6->t_flags & VAR_3) {
   FUNC_2(VAR_6->t_flags);
   VAR_6->t_flags &= ~VAR_3;
  }
  if (VAR_6->t_flags & VAR_2) {
   FUNC_1(VAR_6->t_flags);
   VAR_6->t_flags &= ~VAR_2;
  }
  VAR_6->snd_nxt = VAR_6->snd_max;
  VAR_6->t_badrxtwin = 0;
  break;
 }

 if (FUNC_0(VAR_6)->cong_signal != ((void*)0)) {
  if (VAR_7 != ((void*)0))
   VAR_6->ccv->curack = VAR_7->th_ack;
  FUNC_0(VAR_6)->cong_signal(VAR_6->ccv, VAR_8);
 }
}
