
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcpcb {scalar_t__ t_fb_ptr; } ;
struct tcp_bbr {int rc_all_timers_stopped; } ;



__attribute__((used)) static void
FUNC_0(struct tcpcb *VAR_0, uint32_t VAR_1)
{
 struct tcp_bbr *VAR_2;

 VAR_2 = (struct tcp_bbr *)VAR_0->t_fb_ptr;
 VAR_2->rc_all_timers_stopped = 1;
 return;
}
