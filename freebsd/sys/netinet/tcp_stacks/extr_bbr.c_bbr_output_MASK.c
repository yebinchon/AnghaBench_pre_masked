
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct tcpcb {int t_inpcb; scalar_t__ t_fb_ptr; } ;
struct tcp_bbr {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tcpcb*,struct timeval*) ;
 int FUNC_2 (struct timeval*) ;

__attribute__((used)) static int
FUNC_3(struct tcpcb *VAR_0)
{
 int32_t VAR_1;
 struct timeval VAR_2;
 struct tcp_bbr *VAR_3;

 VAR_3 = (struct tcp_bbr *)VAR_0->t_fb_ptr;
 FUNC_0(VAR_0->t_inpcb);
 (void)FUNC_2(&VAR_2);
 VAR_1 = FUNC_1(VAR_0, &VAR_2);
 return (VAR_1);
}
