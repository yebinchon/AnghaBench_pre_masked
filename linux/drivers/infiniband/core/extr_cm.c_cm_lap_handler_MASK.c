
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct ib_mad_send_buf {scalar_t__ mad; } ;
struct ib_cm_lap_event_param {int * alternate_path; } ;
struct TYPE_14__ {struct ib_cm_lap_event_param lap_rcvd; } ;
struct TYPE_16__ {int * private_data; TYPE_1__ param; } ;
struct cm_work {int list; TYPE_10__* mad_recv_wc; TYPE_8__* port; TYPE_3__ cm_event; int * path; } ;
struct cm_mra_msg {int dummy; } ;
struct TYPE_20__ {int tid; } ;
struct cm_lap_msg {TYPE_7__ hdr; int private_data; int alt_local_gid; int local_comm_id; int remote_comm_id; } ;
struct TYPE_19__ {scalar_t__ state; int lap_state; } ;
struct cm_id_private {int lock; int work_list; int work_count; int tid; TYPE_6__ id; int alt_av; int av; int private_data_len; int private_data; int service_timeout; } ;
struct TYPE_21__ {TYPE_4__* counter_group; int port_num; TYPE_2__* cm_dev; } ;
struct TYPE_18__ {int grh; scalar_t__ mad; } ;
struct TYPE_17__ {int * counter; } ;
struct TYPE_15__ {int ib_device; } ;
struct TYPE_13__ {TYPE_5__ recv_buf; int wc; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_0 (struct ib_mad_send_buf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cm_id_private* FUNC_3 (int ,int ) ;
 struct ib_mad_send_buf* FUNC_4 (TYPE_8__*,TYPE_10__*) ;
 int FUNC_5 (TYPE_8__*,TYPE_10__*,struct ib_mad_send_buf*) ;
 int FUNC_6 (struct cm_id_private*) ;
 int FUNC_7 (struct cm_mra_msg*,struct cm_id_private*,int ,int ,int ,int ) ;
 int FUNC_8 (struct cm_id_private*,int *,struct cm_lap_msg*) ;
 int FUNC_9 (struct ib_mad_send_buf*) ;
 int FUNC_10 (int *,int *,int *,struct cm_id_private*) ;
 int FUNC_11 (TYPE_8__*,int ,int ,int *) ;
 int FUNC_12 (int ,int ,int *,int *) ;
 int FUNC_13 (struct cm_id_private*,struct cm_work*) ;
 int FUNC_14 (struct ib_mad_send_buf*,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int ,int) ;
 scalar_t__ FUNC_17 (int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct cm_work *VAR_5)
{
 struct cm_id_private *VAR_6;
 struct cm_lap_msg *VAR_7;
 struct ib_cm_lap_event_param *VAR_8;
 struct ib_mad_send_buf *VAR_9 = ((void*)0);
 int VAR_10;




 if (FUNC_17(VAR_5->port->cm_dev->ib_device,
          VAR_5->port->port_num))
  return -VAR_3;


 VAR_7 = (struct cm_lap_msg *)VAR_5->mad_recv_wc->recv_buf.mad;
 VAR_6 = FUNC_3(VAR_7->remote_comm_id,
       VAR_7->local_comm_id);
 if (!VAR_6)
  return -VAR_3;

 VAR_8 = &VAR_5->cm_event.param.lap_rcvd;
 FUNC_16(&VAR_5->path[0], 0, sizeof(VAR_5->path[1]));
 FUNC_12(VAR_5->port->cm_dev->ib_device,
        VAR_5->port->port_num,
        &VAR_5->path[0],
        &VAR_7->alt_local_gid);
 VAR_8->alternate_path = &VAR_5->path[0];
 FUNC_8(VAR_6, VAR_8->alternate_path, VAR_7);
 VAR_5->cm_event.private_data = &VAR_7->private_data;

 FUNC_18(&VAR_6->lock);
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
  FUNC_19(&VAR_6->lock);

  if (FUNC_5(VAR_5->port, VAR_5->mad_recv_wc, VAR_9) ||
      FUNC_14(VAR_9, ((void*)0)))
   FUNC_9(VAR_9);
  goto deref;
 case 130:
  FUNC_2(&VAR_5->port->counter_group[VAR_2].
    counter[VAR_0]);
  goto unlock;
 default:
  goto unlock;
 }

 VAR_10 = FUNC_11(VAR_5->port, VAR_5->mad_recv_wc->wc,
     VAR_5->mad_recv_wc->recv_buf.grh,
     &VAR_6->av);
 if (VAR_10)
  goto unlock;

 VAR_10 = FUNC_10(VAR_8->alternate_path, ((void*)0),
     &VAR_6->alt_av, VAR_6);
 if (VAR_10)
  goto unlock;

 VAR_6->id.lap_state = 130;
 VAR_6->tid = VAR_7->hdr.tid;
 VAR_10 = FUNC_1(&VAR_6->work_count);
 if (!VAR_10)
  FUNC_15(&VAR_5->list, &VAR_6->work_list);
 FUNC_19(&VAR_6->lock);

 if (VAR_10)
  FUNC_13(VAR_6, VAR_5);
 else
  FUNC_6(VAR_6);
 return 0;

unlock: FUNC_19(&VAR_6->lock);
deref: FUNC_6(VAR_6);
 return -VAR_3;
}
