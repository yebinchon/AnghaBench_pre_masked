
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct tcphdr {int th_ack; } ;
struct tcpcb {scalar_t__ snd_cwnd; scalar_t__ snd_wnd; scalar_t__ snd_ssthresh; scalar_t__ t_bytes_acked; TYPE_1__* ccv; int t_inpcb; } ;
struct TYPE_4__ {int (* ack_received ) (TYPE_1__*,scalar_t__) ;} ;
struct TYPE_3__ {int curack; int flags; int bytes_this_ack; scalar_t__ nsegs; } ;


 int FUNC_0 (struct tcpcb*,struct tcphdr*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_1 (struct tcpcb*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct tcpcb*) ;

void
FUNC_6(struct tcpcb *VAR_4, struct tcphdr *VAR_5, uint16_t VAR_6,
    uint16_t VAR_7)
{
 FUNC_2(VAR_4->t_inpcb);

 VAR_4->ccv->nsegs = VAR_6;
 VAR_4->ccv->bytes_this_ack = FUNC_0(VAR_4, VAR_5);
 if (VAR_4->snd_cwnd <= VAR_4->snd_wnd)
  VAR_4->ccv->flags |= VAR_1;
 else
  VAR_4->ccv->flags &= ~VAR_1;

 if (VAR_7 == VAR_2) {
  if (VAR_4->snd_cwnd > VAR_4->snd_ssthresh) {
   VAR_4->t_bytes_acked += FUNC_3(VAR_4->ccv->bytes_this_ack,
        VAR_6 * VAR_3 * FUNC_5(VAR_4));
   if (VAR_4->t_bytes_acked >= VAR_4->snd_cwnd) {
    VAR_4->t_bytes_acked -= VAR_4->snd_cwnd;
    VAR_4->ccv->flags |= VAR_0;
   }
  } else {
    VAR_4->ccv->flags &= ~VAR_0;
    VAR_4->t_bytes_acked = 0;
  }
 }

 if (FUNC_1(VAR_4)->ack_received != ((void*)0)) {

  VAR_4->ccv->curack = VAR_5->th_ack;
  FUNC_1(VAR_4)->ack_received(VAR_4->ccv, VAR_7);
 }
}
