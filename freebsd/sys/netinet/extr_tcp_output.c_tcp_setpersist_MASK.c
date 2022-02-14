
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_srtt; int t_rttvar; size_t t_rxtshift; int t_flags; } ;


 int FUNC_0 (int,int,int ,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct tcpcb*,int ,int) ;
 scalar_t__ FUNC_3 (struct tcpcb*,int ) ;

void
FUNC_4(struct tcpcb *VAR_7)
{
 int VAR_8 = ((VAR_7->t_srtt >> 2) + VAR_7->t_rttvar) >> 1;
 int VAR_9;

 VAR_7->t_flags &= ~VAR_1;
 if (FUNC_3(VAR_7, VAR_3))
  FUNC_1("tcp_setpersist: retransmit pending");



 FUNC_0(VAR_9, VAR_8 * VAR_4[VAR_7->t_rxtshift],
        VAR_6, VAR_5);
 FUNC_2(VAR_7, VAR_2, VAR_9);
 if (VAR_7->t_rxtshift < VAR_0)
  VAR_7->t_rxtshift++;
}
