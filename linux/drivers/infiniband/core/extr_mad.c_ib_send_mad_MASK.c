
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


struct list_head {int dummy; } ;
struct ib_sge {int length; void* addr; } ;
struct TYPE_9__ {int done; } ;
struct TYPE_12__ {int list; TYPE_2__ cqe; TYPE_6__* mad_queue; } ;
struct TYPE_14__ {TYPE_2__* wr_cqe; } ;
struct TYPE_11__ {TYPE_7__ wr; } ;
struct TYPE_10__ {int mad; struct ib_mad_agent* mad_agent; } ;
struct ib_mad_send_wr_private {void* payload_mapping; void* header_mapping; TYPE_5__ mad_list; TYPE_4__ send_wr; TYPE_3__ send_buf; struct ib_sge* sg_list; TYPE_1__* mad_agent_priv; } ;
struct TYPE_13__ {scalar_t__ count; scalar_t__ max_active; int lock; struct list_head list; } ;
struct ib_mad_qp_info {TYPE_6__ send_queue; struct list_head overflow_list; } ;
struct ib_mad_agent {int device; int qp; } ;
struct TYPE_8__ {struct ib_mad_qp_info* qp_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*,int ,int ) ;
 int FUNC_3 (struct ib_mad_send_wr_private*) ;
 int VAR_2 ;
 int FUNC_4 (int ,TYPE_7__*,int *) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct ib_mad_send_wr_private*,struct ib_mad_qp_info*) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(struct ib_mad_send_wr_private *VAR_3)
{
 struct ib_mad_qp_info *VAR_4;
 struct list_head *VAR_5;
 struct ib_mad_agent *VAR_6;
 struct ib_sge *VAR_7;
 unsigned long VAR_8;
 int VAR_9;


 VAR_4 = VAR_3->mad_agent_priv->qp_info;
 VAR_3->mad_list.mad_queue = &VAR_4->send_queue;
 VAR_3->mad_list.cqe.done = VAR_2;
 VAR_3->send_wr.wr.wr_cqe = &VAR_3->mad_list.cqe;

 VAR_6 = VAR_3->send_buf.mad_agent;
 VAR_7 = VAR_3->sg_list;
 VAR_7[0].addr = FUNC_0(VAR_6->device,
     VAR_3->send_buf.mad,
     VAR_7[0].length,
     VAR_0);
 if (FUNC_9(FUNC_1(VAR_6->device, VAR_7[0].addr)))
  return -VAR_1;

 VAR_3->header_mapping = VAR_7[0].addr;

 VAR_7[1].addr = FUNC_0(VAR_6->device,
     FUNC_3(VAR_3),
     VAR_7[1].length,
     VAR_0);
 if (FUNC_9(FUNC_1(VAR_6->device, VAR_7[1].addr))) {
  FUNC_2(VAR_6->device,
        VAR_3->header_mapping,
        VAR_7[0].length, VAR_0);
  return -VAR_1;
 }
 VAR_3->payload_mapping = VAR_7[1].addr;

 FUNC_6(&VAR_4->send_queue.lock, VAR_8);
 if (VAR_4->send_queue.count < VAR_4->send_queue.max_active) {
  FUNC_8(VAR_3, VAR_4);
  VAR_9 = FUNC_4(VAR_6->qp, &VAR_3->send_wr.wr,
       ((void*)0));
  VAR_5 = &VAR_4->send_queue.list;
 } else {
  VAR_9 = 0;
  VAR_5 = &VAR_4->overflow_list;
 }

 if (!VAR_9) {
  VAR_4->send_queue.count++;
  FUNC_5(&VAR_3->mad_list.list, VAR_5);
 }
 FUNC_7(&VAR_4->send_queue.lock, VAR_8);
 if (VAR_9) {
  FUNC_2(VAR_6->device,
        VAR_3->header_mapping,
        VAR_7[0].length, VAR_0);
  FUNC_2(VAR_6->device,
        VAR_3->payload_mapping,
        VAR_7[1].length, VAR_0);
 }
 return VAR_9;
}
