
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct tcpcb {int t_srtt; } ;
struct tcp_rack {scalar_t__ rc_rack_rtt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct tcpcb *VAR_2, struct tcp_rack *VAR_3)
{
 if (VAR_3->rc_rack_rtt)
  return(VAR_3->rc_rack_rtt);
 else if (VAR_2->t_srtt == 0)
  return(VAR_0);
 return (FUNC_0(VAR_2->t_srtt >> VAR_1));
}
