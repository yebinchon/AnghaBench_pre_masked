
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ rcv_nxt; scalar_t__ rcv_adv; int rcv_wnd; } ;
struct socket {int so_rcv; } ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int *) ;

void
FUNC_2(struct socket *VAR_0, struct tcpcb *VAR_1)
{
 int32_t VAR_2;






 VAR_2 = FUNC_1(&VAR_0->so_rcv);
 if (VAR_2 < 0)
  VAR_2 = 0;
 VAR_1->rcv_wnd = FUNC_0(VAR_2, (int)(VAR_1->rcv_adv - VAR_1->rcv_nxt));
}
