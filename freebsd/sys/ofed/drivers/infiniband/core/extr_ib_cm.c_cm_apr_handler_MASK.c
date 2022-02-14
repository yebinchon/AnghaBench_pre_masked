
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


struct TYPE_11__ {int info_len; int * apr_info; int ap_status; } ;
struct TYPE_12__ {TYPE_3__ apr_rcvd; } ;
struct TYPE_13__ {int * private_data; TYPE_4__ param; } ;
struct cm_work {int list; TYPE_5__ cm_event; TYPE_2__* mad_recv_wc; } ;
struct TYPE_16__ {TYPE_7__* port; } ;
struct TYPE_14__ {scalar_t__ state; scalar_t__ lap_state; } ;
struct cm_id_private {int lock; int work_list; int work_count; int * msg; TYPE_8__ av; TYPE_6__ id; } ;
struct cm_apr_msg {int private_data; int info_length; int info; int ap_status; int local_comm_id; int remote_comm_id; } ;
struct TYPE_15__ {int mad_agent; } ;
struct TYPE_9__ {scalar_t__ mad; } ;
struct TYPE_10__ {TYPE_1__ recv_buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 struct cm_id_private* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cm_id_private*) ;
 int FUNC_3 (struct cm_id_private*,struct cm_work*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct cm_work *VAR_5)
{
 struct cm_id_private *VAR_6;
 struct cm_apr_msg *VAR_7;
 int VAR_8;

 VAR_7 = (struct cm_apr_msg *)VAR_5->mad_recv_wc->recv_buf.mad;
 VAR_6 = FUNC_1(VAR_7->remote_comm_id,
       VAR_7->local_comm_id);
 if (!VAR_6)
  return -VAR_0;

 VAR_5->cm_event.param.apr_rcvd.ap_status = VAR_7->ap_status;
 VAR_5->cm_event.param.apr_rcvd.apr_info = &VAR_7->info;
 VAR_5->cm_event.param.apr_rcvd.info_len = VAR_7->info_length;
 VAR_5->cm_event.private_data = &VAR_7->private_data;

 FUNC_6(&VAR_6->lock);
 if (VAR_6->id.state != VAR_1 ||
     (VAR_6->id.lap_state != VAR_3 &&
      VAR_6->id.lap_state != VAR_4)) {
  FUNC_7(&VAR_6->lock);
  goto out;
 }
 VAR_6->id.lap_state = VAR_2;
 FUNC_4(VAR_6->av.port->mad_agent, VAR_6->msg);
 VAR_6->msg = ((void*)0);

 VAR_8 = FUNC_0(&VAR_6->work_count);
 if (!VAR_8)
  FUNC_5(&VAR_5->list, &VAR_6->work_list);
 FUNC_7(&VAR_6->lock);

 if (VAR_8)
  FUNC_3(VAR_6, VAR_5);
 else
  FUNC_2(VAR_6);
 return 0;
out:
 FUNC_2(VAR_6);
 return -VAR_0;
}
