
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int th_ack; } ;
struct tcpcb {scalar_t__ t_state; int t_flags; int snd_max; int snd_una; } ;
struct mbuf {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mbuf*,struct tcpcb*,struct tcphdr*,int ,int) ;
 int FUNC_2 (struct mbuf*) ;

void
FUNC_3(struct mbuf *VAR_4, struct tcpcb *VAR_5, struct tcphdr *VAR_6, int32_t VAR_7, int32_t VAR_8, int32_t * VAR_9)
{
 if (VAR_5->t_state == VAR_1 && (VAR_7 & VAR_3) &&
     (FUNC_0(VAR_5->snd_una, VAR_6->th_ack) ||
     FUNC_0(VAR_6->th_ack, VAR_5->snd_max))) {
  *VAR_9 = 1;
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_0, VAR_8);
  return;
 } else
  *VAR_9 = 0;
 VAR_5->t_flags |= VAR_2;
 if (VAR_4)
  FUNC_2(VAR_4);
}
