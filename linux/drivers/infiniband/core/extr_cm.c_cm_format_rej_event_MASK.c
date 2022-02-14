
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_cm_rej_event_param {int reason; int ari_length; int ari; } ;
struct TYPE_8__ {struct ib_cm_rej_event_param rej_rcvd; } ;
struct TYPE_7__ {int * private_data; TYPE_4__ param; } ;
struct cm_work {TYPE_3__ cm_event; TYPE_2__* mad_recv_wc; } ;
struct cm_rej_msg {int private_data; int reason; int ari; } ;
struct TYPE_5__ {scalar_t__ mad; } ;
struct TYPE_6__ {TYPE_1__ recv_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cm_rej_msg*) ;

__attribute__((used)) static void FUNC_2(struct cm_work *VAR_0)
{
 struct cm_rej_msg *VAR_1;
 struct ib_cm_rej_event_param *VAR_2;

 VAR_1 = (struct cm_rej_msg *)VAR_0->mad_recv_wc->recv_buf.mad;
 VAR_2 = &VAR_0->cm_event.param.rej_rcvd;
 VAR_2->ari = VAR_1->ari;
 VAR_2->ari_length = FUNC_1(VAR_1);
 VAR_2->reason = FUNC_0(VAR_1->reason);
 VAR_0->cm_event.private_data = &VAR_1->private_data;
}
