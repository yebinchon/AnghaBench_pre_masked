
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ib_cm_sidr_rep_event_param {int sgid_attr; int info_len; int * info; void* qpn; void* qkey; int status; } ;
struct TYPE_10__ {struct ib_cm_sidr_rep_event_param sidr_rep_rcvd; } ;
struct TYPE_14__ {int * private_data; TYPE_3__ param; } ;
struct cm_work {TYPE_7__ cm_event; TYPE_2__* mad_recv_wc; } ;
struct cm_sidr_rep_msg {int private_data; int info_length; int info; int qkey; int status; } ;
struct TYPE_11__ {int sgid_attr; } ;
struct TYPE_12__ {TYPE_4__ grh; } ;
struct TYPE_13__ {TYPE_5__ ah_attr; } ;
struct cm_id_private {TYPE_6__ av; } ;
struct TYPE_8__ {scalar_t__ mad; } ;
struct TYPE_9__ {TYPE_1__ recv_buf; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct cm_sidr_rep_msg*) ;

__attribute__((used)) static void FUNC_2(struct cm_work *VAR_0,
         const struct cm_id_private *VAR_1)
{
 struct cm_sidr_rep_msg *VAR_2;
 struct ib_cm_sidr_rep_event_param *VAR_3;

 VAR_2 = (struct cm_sidr_rep_msg *)
    VAR_0->mad_recv_wc->recv_buf.mad;
 VAR_3 = &VAR_0->cm_event.param.sidr_rep_rcvd;
 VAR_3->status = VAR_2->status;
 VAR_3->qkey = FUNC_0(VAR_2->qkey);
 VAR_3->qpn = FUNC_0(FUNC_1(VAR_2));
 VAR_3->info = &VAR_2->info;
 VAR_3->info_len = VAR_2->info_length;
 VAR_3->sgid_attr = VAR_1->av.ah_attr.grh.sgid_attr;
 VAR_0->cm_event.private_data = &VAR_2->private_data;
}
