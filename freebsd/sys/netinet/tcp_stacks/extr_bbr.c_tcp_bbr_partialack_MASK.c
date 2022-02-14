
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {scalar_t__ snd_cwnd; int t_inpcb; scalar_t__ t_fb_ptr; } ;
struct TYPE_2__ {scalar_t__ rc_lost_bytes; scalar_t__ rc_sacked; } ;
struct tcp_bbr {int r_wanted_output; TYPE_1__ r_ctl; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tcpcb*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct tcpcb *VAR_0)
{
 struct tcp_bbr *VAR_1;

 VAR_1 = (struct tcp_bbr *)VAR_0->t_fb_ptr;
 FUNC_0(VAR_0->t_inpcb);
 if (FUNC_1(VAR_0,
  (VAR_1->r_ctl.rc_sacked + VAR_1->r_ctl.rc_lost_bytes)) <=
     VAR_0->snd_cwnd) {
  VAR_1->r_wanted_output = 1;
 }
}
