
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ib_cm_sidr_rep_event_param {int info_len; int * info; void* qpn; void* qkey; int status; } ;
struct TYPE_7__ {struct ib_cm_sidr_rep_event_param sidr_rep_rcvd; } ;
struct TYPE_8__ {int * private_data; TYPE_3__ param; } ;
struct cm_work {TYPE_4__ cm_event; TYPE_2__* mad_recv_wc; } ;
struct cm_sidr_rep_msg {int private_data; int info_length; int info; int qkey; int status; } ;
struct TYPE_5__ {scalar_t__ mad; } ;
struct TYPE_6__ {TYPE_1__ recv_buf; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct cm_sidr_rep_msg*) ;

__attribute__((used)) static void FUNC_2(struct cm_work *VAR_0)
{
 struct cm_sidr_rep_msg *VAR_1;
 struct ib_cm_sidr_rep_event_param *VAR_2;

 VAR_1 = (struct cm_sidr_rep_msg *)
    VAR_0->mad_recv_wc->recv_buf.mad;
 VAR_2 = &VAR_0->cm_event.param.sidr_rep_rcvd;
 VAR_2->status = VAR_1->status;
 VAR_2->qkey = FUNC_0(VAR_1->qkey);
 VAR_2->qpn = FUNC_0(FUNC_1(VAR_1));
 VAR_2->info = &VAR_1->info;
 VAR_2->info_len = VAR_1->info_length;
 VAR_0->cm_event.private_data = &VAR_1->private_data;
}
