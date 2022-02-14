
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct TYPE_3__ {scalar_t__ sack_bytes_rexmit; } ;
struct tcpcb {int t_maxseg; scalar_t__ snd_cwnd; scalar_t__ snd_nxt; scalar_t__ sack_newdata; scalar_t__ snd_ssthresh; TYPE_2__* t_fb; int t_flags; TYPE_1__ sackhint; scalar_t__ t_rtttime; int t_inpcb; } ;
struct TYPE_4__ {int (* tfb_tcp_output ) (struct tcpcb*) ;} ;


 int FUNC_0 (struct tcpcb*,struct tcphdr*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (struct tcpcb*,int ,int ) ;

void
FUNC_4(struct tcpcb *VAR_2, struct tcphdr *VAR_3)
{
 int VAR_4 = 1;

 FUNC_1(VAR_2->t_inpcb);
 FUNC_3(VAR_2, VAR_1, 0);
 VAR_2->t_rtttime = 0;

 if ((FUNC_0(VAR_2, VAR_3) / VAR_2->t_maxseg) >= 2)
  VAR_4 = 2;
 VAR_2->snd_cwnd = (VAR_2->sackhint.sack_bytes_rexmit +
     (VAR_2->snd_nxt - VAR_2->sack_newdata) + VAR_4 * VAR_2->t_maxseg);
 if (VAR_2->snd_cwnd > VAR_2->snd_ssthresh)
  VAR_2->snd_cwnd = VAR_2->snd_ssthresh;
 VAR_2->t_flags |= VAR_0;
 (void) VAR_2->t_fb->tfb_tcp_output(VAR_2);
}
