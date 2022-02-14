
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcphdr {int th_ack; } ;
struct tcpcb {int snd_cwnd; scalar_t__ snd_ssthresh; int t_flags; int snd_una; int snd_recover; TYPE_2__* ccv; scalar_t__ t_fb_ptr; int t_inpcb; } ;
struct TYPE_4__ {int rc_prop_rate; int rc_loss_count; scalar_t__ rc_prr_sndcnt; scalar_t__ rc_prop_reduce; } ;
struct tcp_rack {TYPE_1__ r_ctl; } ;
typedef int int32_t ;
struct TYPE_6__ {int (* post_recovery ) (TYPE_2__*) ;} ;
struct TYPE_5__ {int curack; } ;


 TYPE_3__* FUNC_0 (struct tcpcb*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tcp_rack*,int) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(struct tcpcb *VAR_0, struct tcphdr *VAR_1)
{
 struct tcp_rack *VAR_2;

 FUNC_2(VAR_0->t_inpcb);
 VAR_2 = (struct tcp_rack *)VAR_0->t_fb_ptr;
 if (FUNC_0(VAR_0)->post_recovery != ((void*)0)) {
  VAR_0->ccv->curack = VAR_1->th_ack;
  FUNC_0(VAR_0)->post_recovery(VAR_0->ccv);
 }





 if (VAR_2->r_ctl.rc_prop_reduce && VAR_2->r_ctl.rc_prop_rate) {
  int32_t VAR_3;

  VAR_3 = (VAR_2->r_ctl.rc_loss_count * VAR_2->r_ctl.rc_prop_rate);
  if (VAR_3 > 50) {
   VAR_3 = 50;
  }
  VAR_0->snd_cwnd -= ((VAR_3 * VAR_0->snd_cwnd) / 100);
 } else {
  if (VAR_0->snd_cwnd > VAR_0->snd_ssthresh) {

   VAR_0->snd_cwnd = VAR_0->snd_ssthresh;
  }
 }
 if (VAR_2->r_ctl.rc_prr_sndcnt > 0) {

  VAR_0->snd_cwnd += VAR_2->r_ctl.rc_prr_sndcnt;
  VAR_2->r_ctl.rc_prr_sndcnt = 0;
  FUNC_3(VAR_2, 1);
 }
 VAR_0->snd_recover = VAR_0->snd_una;
 FUNC_1(VAR_0->t_flags);


}
