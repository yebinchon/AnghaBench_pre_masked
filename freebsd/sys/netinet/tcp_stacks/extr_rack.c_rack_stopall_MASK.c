
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_fb_ptr; } ;
struct tcp_rack {int t_timers_stopped; } ;



__attribute__((used)) static int
FUNC_0(struct tcpcb *VAR_0)
{
 struct tcp_rack *VAR_1;
 VAR_1 = (struct tcp_rack *)VAR_0->t_fb_ptr;
 VAR_1->t_timers_stopped = 1;
 return (0);
}
