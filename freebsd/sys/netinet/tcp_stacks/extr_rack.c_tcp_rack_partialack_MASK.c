
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct tcpcb {int t_inpcb; scalar_t__ t_fb_ptr; } ;
struct TYPE_2__ {scalar_t__ rc_prr_sndcnt; } ;
struct tcp_rack {int r_wanted_output; TYPE_1__ r_ctl; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct tcpcb *VAR_0, struct tcphdr *VAR_1)
{
 struct tcp_rack *VAR_2;

 VAR_2 = (struct tcp_rack *)VAR_0->t_fb_ptr;
 FUNC_0(VAR_0->t_inpcb);
 if (VAR_2->r_ctl.rc_prr_sndcnt > 0)
  VAR_2->r_wanted_output++;
}
