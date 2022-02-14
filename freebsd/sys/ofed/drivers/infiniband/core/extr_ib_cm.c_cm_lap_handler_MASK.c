
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct ib_mad_send_buf {scalar_t__ mad; } ;
struct ib_cm_lap_event_param {int * alternate_path; } ;
struct TYPE_12__ {struct ib_cm_lap_event_param lap_rcvd; } ;
struct TYPE_13__ {int * private_data; TYPE_1__ param; } ;
struct cm_work {int list; TYPE_9__* mad_recv_wc; TYPE_7__* port; TYPE_2__ cm_event; int * path; } ;
struct cm_mra_msg {int dummy; } ;
struct TYPE_16__ {int tid; } ;
struct cm_lap_msg {TYPE_5__ hdr; int private_data; int local_comm_id; int remote_comm_id; } ;
struct TYPE_15__ {scalar_t__ state; int lap_state; } ;
struct cm_id_private {int lock; int work_list; int work_count; int alt_av; int av; int tid; TYPE_4__ id; int private_data_len; int private_data; int service_timeout; } ;
struct TYPE_17__ {int grh; scalar_t__ mad; } ;
struct TYPE_19__ {TYPE_6__ recv_buf; int wc; } ;
struct TYPE_18__ {TYPE_3__* counter_group; } ;
struct TYPE_14__ {int * counter; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_0 (struct ib_mad_send_buf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cm_id_private* FUNC_3 (int ,int ) ;
 struct ib_mad_send_buf* FUNC_4 (TYPE_7__*,TYPE_9__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_9__*,struct ib_mad_send_buf*) ;
 int FUNC_6 (struct cm_id_private*) ;
 int FUNC_7 (struct cm_mra_msg*,struct cm_id_private*,int ,int ,int ,int ) ;
 int FUNC_8 (struct cm_id_private*,int *,struct cm_lap_msg*) ;
 int FUNC_9 (struct ib_mad_send_buf*) ;
 int FUNC_10 (int *,int *,struct cm_id_private*) ;
 int FUNC_11 (TYPE_7__*,int ,int ,int *) ;
 int FUNC_12 (struct cm_id_private*,struct cm_work*) ;
 int FUNC_13 (struct ib_mad_send_buf*,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct cm_work *VAR_5)
{
 struct cm_id_private *VAR_6;
 struct cm_lap_msg *VAR_7;
 struct ib_cm_lap_event_param *VAR_8;
 struct ib_mad_send_buf *VAR_9 = ((void*)0);
 int VAR_10;


 VAR_7 = (struct cm_lap_msg *)VAR_5->mad_recv_wc->recv_buf.mad;
 VAR_6 = FUNC_3(VAR_7->remote_comm_id,
       VAR_7->local_comm_id);
 if (!VAR_6)
  return -VAR_3;

 VAR_8 = &VAR_5->cm_event.param.lap_rcvd;
 VAR_8->alternate_path = &VAR_5->path[0];
 FUNC_8(VAR_6, VAR_8->alternate_path, VAR_7);
 VAR_5->cm_event.private_data = &VAR_7->private_data;

 FUNC_15(&VAR_6->lock);
 if (VAR_6->id.state != VAR_4)
  goto unlock;

 switch (VAR_6->id.lap_state) {
 case 129:
 case 131:
  break;
 case 128:
  FUNC_2(&VAR_5->port->counter_group[VAR_2].
    counter[VAR_0]);
  VAR_9 = FUNC_4(VAR_5->port, VAR_5->mad_recv_wc);
  if (FUNC_0(VAR_9))
   goto unlock;

  FUNC_7((struct cm_mra_msg *) VAR_9->mad, VAR_6,
         VAR_1,
         VAR_6->service_timeout,
         VAR_6->private_data,
         VAR_6->private_data_len);
  FUNC_16(&VAR_6->lock);

  if (FUNC_5(VAR_5->port, VAR_5->mad_recv_wc, VAR_9) ||
      FUNC_13(VAR_9, ((void*)0)))
   FUNC_9(VAR_9);
  goto deref;
 case 130:
  FUNC_2(&VAR_5->port->counter_group[VAR_2].
    counter[VAR_0]);
  goto unlock;
 default:
  goto unlock;
 }

 VAR_6->id.lap_state = 130;
 VAR_6->tid = VAR_7->hdr.tid;
 VAR_10 = FUNC_11(VAR_5->port, VAR_5->mad_recv_wc->wc,
          VAR_5->mad_recv_wc->recv_buf.grh,
          &VAR_6->av);
 if (VAR_10)
  goto unlock;
 VAR_10 = FUNC_10(VAR_8->alternate_path, &VAR_6->alt_av,
     VAR_6);
 if (VAR_10)
  goto unlock;
 VAR_10 = FUNC_1(&VAR_6->work_count);
 if (!VAR_10)
  FUNC_14(&VAR_5->list, &VAR_6->work_list);
 FUNC_16(&VAR_6->lock);

 if (VAR_10)
  FUNC_12(VAR_6, VAR_5);
 else
  FUNC_6(VAR_6);
 return 0;

unlock: FUNC_16(&VAR_6->lock);
deref: FUNC_6(VAR_6);
 return -VAR_3;
}
