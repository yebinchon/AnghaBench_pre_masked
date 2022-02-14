
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
struct TYPE_4__ {scalar_t__ qp_type; int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct rvt_qp {scalar_t__ port_num; size_t state; TYPE_2__ ibqp; int r_lock; int s_hlock; int s_lock; int remote_ah_attr; } ;
struct TYPE_3__ {TYPE_2__* qp; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;
struct hfi1_pportdata {scalar_t__ port; } ;
struct hfi1_ibport {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 struct hfi1_pportdata* FUNC_0 (struct hfi1_ibport*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct rvt_qp*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ib_event*,int ) ;
 struct hfi1_ibport* FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct rvt_qp *VAR_6, u64 VAR_7)
{
 int VAR_8;
 struct ib_event VAR_9;
 struct hfi1_ibport *VAR_10 =
  FUNC_8(VAR_6->ibqp.device, VAR_6->port_num);
 struct hfi1_pportdata *VAR_11 = FUNC_0(VAR_10);
 u8 VAR_12 = (u8)VAR_7;

 if (VAR_6->port_num != VAR_11->port ||
     (VAR_6->ibqp.qp_type != VAR_2 &&
      VAR_6->ibqp.qp_type != VAR_1) ||
     FUNC_1(&VAR_6->remote_ah_attr) != VAR_12 ||
     !(VAR_5[VAR_6->state] & VAR_4))
  return;

 FUNC_4(&VAR_6->r_lock);
 FUNC_3(&VAR_6->s_hlock);
 FUNC_3(&VAR_6->s_lock);
 VAR_8 = FUNC_2(VAR_6, VAR_3);
 FUNC_5(&VAR_6->s_lock);
 FUNC_5(&VAR_6->s_hlock);
 FUNC_6(&VAR_6->r_lock);
 if (VAR_8) {
  VAR_9.device = VAR_6->ibqp.device;
  VAR_9.element.qp = &VAR_6->ibqp;
  VAR_9.event = VAR_0;
  VAR_6->ibqp.event_handler(&VAR_9, VAR_6->ibqp.qp_context);
 }
}
