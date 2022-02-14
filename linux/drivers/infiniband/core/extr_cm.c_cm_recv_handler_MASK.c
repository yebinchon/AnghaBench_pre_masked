
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


typedef size_t u16 ;
struct ib_mad_send_buf {int dummy; } ;
struct TYPE_10__ {TYPE_2__* mad; } ;
struct ib_mad_recv_wc {TYPE_3__ recv_buf; } ;
struct ib_mad_agent {struct cm_port* context; } ;
struct TYPE_12__ {int event; } ;
struct cm_work {int work; struct cm_port* port; struct ib_mad_recv_wc* mad_recv_wc; TYPE_5__ cm_event; } ;
struct cm_req_msg {int dummy; } ;
struct cm_port {TYPE_6__* cm_dev; TYPE_4__* counter_group; } ;
typedef enum ib_cm_event_type { ____Placeholder_ib_cm_event_type } ib_cm_event_type ;
struct TYPE_14__ {int lock; int wq; } ;
struct TYPE_13__ {int going_down; } ;
struct TYPE_11__ {int * counter; } ;
struct TYPE_8__ {int attr_id; } ;
struct TYPE_9__ {TYPE_1__ mad_hdr; } ;



 size_t VAR_0 ;




 size_t VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int) ;
 TYPE_7__ VAR_14 ;
 int FUNC_3 (struct cm_req_msg*) ;
 int VAR_15 ;
 int FUNC_4 (struct ib_mad_recv_wc*) ;
 int FUNC_5 (struct cm_work*) ;
 struct cm_work* FUNC_6 (int ,int ) ;
 int VAR_16 ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct cm_work*,int ,int) ;

__attribute__((used)) static void FUNC_11(struct ib_mad_agent *VAR_17,
       struct ib_mad_send_buf *VAR_18,
       struct ib_mad_recv_wc *VAR_19)
{
 struct cm_port *VAR_20 = VAR_17->context;
 struct cm_work *VAR_21;
 enum ib_cm_event_type VAR_22;
 bool VAR_23 = 0;
 u16 VAR_24;
 int VAR_25 = 0;
 int VAR_26 = 0;

 switch (VAR_19->recv_buf.mad->mad_hdr.attr_id) {
 case 131:
  VAR_23 = FUNC_3((struct cm_req_msg *)
      VAR_19->recv_buf.mad);
  VAR_25 = 1 + (VAR_23 != 0);
  VAR_22 = VAR_10;
  break;
 case 134:
  VAR_22 = VAR_7;
  break;
 case 133:
  VAR_22 = VAR_8;
  break;
 case 132:
  VAR_22 = VAR_9;
  break;
 case 130:
  VAR_22 = VAR_11;
  break;
 case 136:
  VAR_22 = VAR_5;
  break;
 case 137:
  VAR_22 = VAR_4;
  break;
 case 128:
  VAR_22 = VAR_13;
  break;
 case 129:
  VAR_22 = VAR_12;
  break;
 case 135:
  VAR_25 = 1;
  VAR_22 = VAR_6;
  break;
 case 138:
  VAR_22 = VAR_3;
  break;
 default:
  FUNC_4(VAR_19);
  return;
 }

 VAR_24 = FUNC_2(VAR_19->recv_buf.mad->mad_hdr.attr_id);
 FUNC_1(&VAR_20->counter_group[VAR_1].
   counter[VAR_24 - VAR_0]);

 VAR_21 = FUNC_6(FUNC_10(VAR_21, VAR_16, VAR_25), VAR_2);
 if (!VAR_21) {
  FUNC_4(VAR_19);
  return;
 }

 FUNC_0(&VAR_21->work, VAR_15);
 VAR_21->cm_event.event = VAR_22;
 VAR_21->mad_recv_wc = VAR_19;
 VAR_21->port = VAR_20;


 FUNC_8(&VAR_14.lock);
 if (!VAR_20->cm_dev->going_down)
  FUNC_7(VAR_14.wq, &VAR_21->work, 0);
 else
  VAR_26 = 1;
 FUNC_9(&VAR_14.lock);

 if (VAR_26) {
  FUNC_5(VAR_21);
  FUNC_4(VAR_19);
 }
}
