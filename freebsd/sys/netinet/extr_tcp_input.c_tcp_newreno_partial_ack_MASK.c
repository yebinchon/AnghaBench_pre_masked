
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
typedef int tcp_seq ;
struct tcphdr {int th_ack; } ;
struct tcpcb {scalar_t__ snd_cwnd; int snd_nxt; TYPE_1__* t_fb; int t_flags; scalar_t__ t_rtttime; int t_inpcb; } ;
struct TYPE_2__ {int (* tfb_tcp_output ) (struct tcpcb*) ;} ;


 scalar_t__ FUNC_0 (struct tcpcb*,struct tcphdr*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct tcpcb*) ;
 scalar_t__ FUNC_4 (struct tcpcb*) ;
 int FUNC_5 (struct tcpcb*,int ,int ) ;

void
FUNC_6(struct tcpcb *VAR_2, struct tcphdr *VAR_3)
{
 tcp_seq VAR_4 = VAR_2->snd_nxt;
 uint32_t VAR_5 = VAR_2->snd_cwnd;
 u_int VAR_6 = FUNC_4(VAR_2);

 FUNC_1(VAR_2->t_inpcb);

 FUNC_5(VAR_2, VAR_1, 0);
 VAR_2->t_rtttime = 0;
 VAR_2->snd_nxt = VAR_3->th_ack;




 VAR_2->snd_cwnd = VAR_6 + FUNC_0(VAR_2, VAR_3);
 VAR_2->t_flags |= VAR_0;
 (void) VAR_2->t_fb->tfb_tcp_output(VAR_2);
 VAR_2->snd_cwnd = VAR_5;
 if (FUNC_2(VAR_4, VAR_2->snd_nxt))
  VAR_2->snd_nxt = VAR_4;




 if (VAR_2->snd_cwnd > FUNC_0(VAR_2, VAR_3))
  VAR_2->snd_cwnd -= FUNC_0(VAR_2, VAR_3);
 else
  VAR_2->snd_cwnd = 0;
 VAR_2->snd_cwnd += VAR_6;
}
