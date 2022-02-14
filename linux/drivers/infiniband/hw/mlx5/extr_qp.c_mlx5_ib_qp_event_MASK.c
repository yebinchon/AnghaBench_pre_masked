
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_core_qp {int qpn; } ;
struct ib_qp {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct TYPE_5__ {struct ib_qp* qp; } ;
struct ib_event {int event; TYPE_2__ element; int device; } ;
struct TYPE_4__ {int alt_port; } ;
struct TYPE_6__ {TYPE_1__ trans_qp; int port; struct ib_qp ibqp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct ib_event*,int ) ;
 TYPE_3__* FUNC_2 (struct mlx5_core_qp*) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_qp *VAR_8, int VAR_9)
{
 struct ib_qp *VAR_10 = &FUNC_2(VAR_8)->ibqp;
 struct ib_event VAR_11;

 if (VAR_9 == 134) {

  FUNC_2(VAR_8)->port = FUNC_2(VAR_8)->trans_qp.alt_port;
 }

 if (VAR_10->event_handler) {
  VAR_11.device = VAR_10->device;
  VAR_11.element.qp = VAR_10;
  switch (VAR_9) {
  case 134:
   VAR_11.event = VAR_1;
   break;
  case 135:
   VAR_11.event = VAR_0;
   break;
  case 132:
   VAR_11.event = VAR_7;
   break;
  case 131:
   VAR_11.event = VAR_5;
   break;
  case 129:
   VAR_11.event = VAR_4;
   break;
  case 133:
   VAR_11.event = VAR_2;
   break;
  case 128:
   VAR_11.event = VAR_6;
   break;
  case 130:
   VAR_11.event = VAR_3;
   break;
  default:
   FUNC_0("mlx5_ib: Unexpected event type %d on QP %06x\n", VAR_9, VAR_8->qpn);
   return;
  }

  VAR_10->event_handler(&VAR_11, VAR_10->qp_context);
 }
}
