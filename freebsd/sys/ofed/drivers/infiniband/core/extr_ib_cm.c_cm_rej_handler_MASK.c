
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cm_work {int list; TYPE_2__* mad_recv_wc; } ;
struct cm_rej_msg {int reason; } ;
struct TYPE_10__ {TYPE_4__* port; } ;
struct TYPE_8__ {int state; int lap_state; } ;
struct cm_id_private {int lock; int work_list; int work_count; int msg; TYPE_5__ av; TYPE_3__ id; } ;
struct TYPE_9__ {int mad_agent; } ;
struct TYPE_6__ {scalar_t__ mad; } ;
struct TYPE_7__ {TYPE_1__ recv_buf; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct cm_id_private* FUNC_2 (struct cm_rej_msg*) ;
 int FUNC_3 (struct cm_id_private*) ;
 int FUNC_4 (struct cm_id_private*) ;
 int FUNC_5 (struct cm_work*) ;
 int FUNC_6 (struct cm_id_private*,struct cm_work*) ;
 int FUNC_7 (struct cm_id_private*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct cm_work *VAR_4)
{
 struct cm_id_private *VAR_5;
 struct cm_rej_msg *VAR_6;
 int VAR_7;

 VAR_6 = (struct cm_rej_msg *)VAR_4->mad_recv_wc->recv_buf.mad;
 VAR_5 = FUNC_2(VAR_6);
 if (!VAR_5)
  return -VAR_0;

 FUNC_5(VAR_4);

 FUNC_10(&VAR_5->lock);
 switch (VAR_5->id.state) {
 case 128:
 case 133:
 case 130:
 case 135:
  FUNC_8(VAR_5->av.port->mad_agent, VAR_5->msg);

 case 129:
 case 132:
  if (FUNC_0(VAR_6->reason) == VAR_3)
   FUNC_4(VAR_5);
  else
   FUNC_7(VAR_5);
  break;
 case 137:
  FUNC_8(VAR_5->av.port->mad_agent, VAR_5->msg);

 case 131:
 case 134:
  FUNC_4(VAR_5);
  break;
 case 136:
  if (VAR_5->id.lap_state == VAR_2 ||
      VAR_5->id.lap_state == VAR_1) {
   if (VAR_5->id.lap_state == VAR_1)
    FUNC_8(VAR_5->av.port->mad_agent,
           VAR_5->msg);
   FUNC_4(VAR_5);
   break;
  }

 default:
  FUNC_11(&VAR_5->lock);
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_1(&VAR_5->work_count);
 if (!VAR_7)
  FUNC_9(&VAR_4->list, &VAR_5->work_list);
 FUNC_11(&VAR_5->lock);

 if (VAR_7)
  FUNC_6(VAR_5, VAR_4);
 else
  FUNC_3(VAR_5);
 return 0;
out:
 FUNC_3(VAR_5);
 return -VAR_0;
}
