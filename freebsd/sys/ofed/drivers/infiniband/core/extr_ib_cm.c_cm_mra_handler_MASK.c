
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_16__ {int service_timeout; } ;
struct TYPE_17__ {TYPE_3__ mra_rcvd; } ;
struct TYPE_18__ {TYPE_4__ param; int * private_data; } ;
struct cm_work {int list; TYPE_9__* port; TYPE_5__ cm_event; TYPE_2__* mad_recv_wc; } ;
struct cm_mra_msg {int private_data; } ;
struct TYPE_12__ {int state; int lap_state; } ;
struct TYPE_20__ {TYPE_6__* port; int timeout; } ;
struct cm_id_private {int lock; int work_list; int work_count; TYPE_10__ id; TYPE_11__* msg; TYPE_7__ av; } ;
struct TYPE_22__ {TYPE_8__* counter_group; } ;
struct TYPE_21__ {int * counter; } ;
struct TYPE_19__ {int mad_agent; } ;
struct TYPE_14__ {scalar_t__ mad; } ;
struct TYPE_15__ {TYPE_1__ recv_buf; } ;
struct TYPE_13__ {void** context; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct cm_id_private* FUNC_2 (struct cm_mra_msg*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct cm_id_private*) ;
 int FUNC_5 (struct cm_mra_msg*) ;
 int FUNC_6 (struct cm_mra_msg*) ;
 int FUNC_7 (struct cm_id_private*,struct cm_work*) ;
 int FUNC_8 (int ,TYPE_11__*,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct cm_work *VAR_8)
{
 struct cm_id_private *VAR_9;
 struct cm_mra_msg *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = (struct cm_mra_msg *)VAR_8->mad_recv_wc->recv_buf.mad;
 VAR_9 = FUNC_2(VAR_10);
 if (!VAR_9)
  return -VAR_5;

 VAR_8->cm_event.private_data = &VAR_10->private_data;
 VAR_8->cm_event.param.mra_rcvd.service_timeout =
     FUNC_6(VAR_10);
 VAR_11 = FUNC_3(FUNC_6(VAR_10)) +
    FUNC_3(VAR_9->av.timeout);

 FUNC_10(&VAR_9->lock);
 switch (VAR_9->id.state) {
 case 128:
  if (FUNC_5(VAR_10) != VAR_3 ||
      FUNC_8(VAR_9->av.port->mad_agent,
      VAR_9->msg, VAR_11))
   goto out;
  VAR_9->id.state = 130;
  break;
 case 129:
  if (FUNC_5(VAR_10) != VAR_2 ||
      FUNC_8(VAR_9->av.port->mad_agent,
      VAR_9->msg, VAR_11))
   goto out;
  VAR_9->id.state = 131;
  break;
 case 132:
  if (FUNC_5(VAR_10) != VAR_1 ||
      VAR_9->id.lap_state != VAR_6 ||
      FUNC_8(VAR_9->av.port->mad_agent,
      VAR_9->msg, VAR_11)) {
   if (VAR_9->id.lap_state == VAR_7)
    FUNC_1(&VAR_8->port->
      counter_group[VAR_4].
      counter[VAR_0]);
   goto out;
  }
  VAR_9->id.lap_state = VAR_7;
  break;
 case 130:
 case 131:
  FUNC_1(&VAR_8->port->counter_group[VAR_4].
    counter[VAR_0]);

 default:
  goto out;
 }

 VAR_9->msg->context[1] = (void *) (unsigned long)
          VAR_9->id.state;
 VAR_12 = FUNC_0(&VAR_9->work_count);
 if (!VAR_12)
  FUNC_9(&VAR_8->list, &VAR_9->work_list);
 FUNC_11(&VAR_9->lock);

 if (VAR_12)
  FUNC_7(VAR_9, VAR_8);
 else
  FUNC_4(VAR_9);
 return 0;
out:
 FUNC_11(&VAR_9->lock);
 FUNC_4(VAR_9);
 return -VAR_5;
}
