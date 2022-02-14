
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {int th_ack; } ;
struct tcpcb {scalar_t__ t_bytes_acked; TYPE_1__* ccv; int t_inpcb; } ;
struct TYPE_4__ {int (* post_recovery ) (TYPE_1__*) ;} ;
struct TYPE_3__ {int curack; } ;


 TYPE_2__* FUNC_0 (struct tcpcb*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void inline
FUNC_3(struct tcpcb *VAR_0, struct tcphdr *VAR_1)
{
 FUNC_1(VAR_0->t_inpcb);



 if (FUNC_0(VAR_0)->post_recovery != ((void*)0)) {
  VAR_0->ccv->curack = VAR_1->th_ack;
  FUNC_0(VAR_0)->post_recovery(VAR_0->ccv);
 }

 VAR_0->t_bytes_acked = 0;
}
