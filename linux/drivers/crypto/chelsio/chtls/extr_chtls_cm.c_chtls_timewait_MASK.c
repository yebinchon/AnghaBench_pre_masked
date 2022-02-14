
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ts_recent_stamp; } ;
struct tcp_sock {scalar_t__ srtt_us; TYPE_1__ rx_opt; int rcv_nxt; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct tcp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_1(VAR_1);

 VAR_2->rcv_nxt++;
 VAR_2->rx_opt.ts_recent_stamp = FUNC_0();
 VAR_2->srtt_us = 0;
 FUNC_2(VAR_1, VAR_0, 0);
}
