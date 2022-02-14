
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ib_cm_sidr_req_event_param {int sgid_attr; int port; int bth_pkey; int service_id; struct ib_cm_id* listen_id; int pkey; } ;
struct ib_cm_id {int dummy; } ;
struct TYPE_11__ {struct ib_cm_sidr_req_event_param sidr_req_rcvd; } ;
struct TYPE_16__ {int * private_data; TYPE_3__ param; } ;
struct cm_work {TYPE_8__ cm_event; TYPE_4__* port; TYPE_2__* mad_recv_wc; } ;
struct cm_sidr_req_msg {int private_data; int service_id; int pkey; } ;
struct TYPE_13__ {int sgid_attr; } ;
struct TYPE_14__ {TYPE_5__ grh; } ;
struct TYPE_15__ {TYPE_6__ ah_attr; } ;
struct cm_id_private {TYPE_7__ av; } ;
struct TYPE_12__ {int port_num; } ;
struct TYPE_9__ {scalar_t__ mad; } ;
struct TYPE_10__ {TYPE_1__ recv_buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct cm_work*) ;

__attribute__((used)) static void FUNC_2(struct cm_work *VAR_0,
         const struct cm_id_private *VAR_1,
         struct ib_cm_id *VAR_2)
{
 struct cm_sidr_req_msg *VAR_3;
 struct ib_cm_sidr_req_event_param *VAR_4;

 VAR_3 = (struct cm_sidr_req_msg *)
    VAR_0->mad_recv_wc->recv_buf.mad;
 VAR_4 = &VAR_0->cm_event.param.sidr_req_rcvd;
 VAR_4->pkey = FUNC_0(VAR_3->pkey);
 VAR_4->listen_id = VAR_2;
 VAR_4->service_id = VAR_3->service_id;
 VAR_4->bth_pkey = FUNC_1(VAR_0);
 VAR_4->port = VAR_0->port->port_num;
 VAR_4->sgid_attr = VAR_1->av.ah_attr.grh.sgid_attr;
 VAR_0->cm_event.private_data = &VAR_3->private_data;
}
