
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_softerror; scalar_t__ t_rxtshift; } ;
struct tcp_bbr {int dummy; } ;
typedef int int32_t ;



__attribute__((used)) static void
FUNC_0(struct tcpcb *VAR_0, struct tcp_bbr *VAR_1, int32_t VAR_2)
{



 VAR_0->t_rxtshift = 0;
 VAR_0->t_softerror = 0;
}
