
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rvt_swqe {int length; } ;
struct TYPE_3__ {int qp_type; int device; } ;
struct rvt_qp {int pmtu; TYPE_1__ ibqp; int port_num; } ;
struct rvt_ah {int log_pmtu; int attr; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_ibport {int* sl_to_sc; } ;
struct hfi1_devdata {TYPE_2__* vld; } ;
struct TYPE_4__ {int mtu; } ;


 int VAR_0 ;





 struct hfi1_devdata* FUNC_0 (struct hfi1_pportdata*) ;
 int FUNC_1 (struct rvt_qp*,struct rvt_swqe*) ;
 scalar_t__ VAR_1 ;
 struct hfi1_pportdata* FUNC_2 (struct hfi1_ibport*) ;
 size_t FUNC_3 (int *) ;
 struct rvt_ah* FUNC_4 (struct rvt_swqe*) ;
 struct hfi1_ibport* FUNC_5 (int ,int ) ;

int FUNC_6(struct rvt_qp *VAR_2, struct rvt_swqe *VAR_3, bool *VAR_4)
{
 struct hfi1_ibport *VAR_5 = FUNC_5(VAR_2->ibqp.device, VAR_2->port_num);
 struct rvt_ah *VAR_6;
 struct hfi1_pportdata *VAR_7;
 struct hfi1_devdata *VAR_8;

 switch (VAR_2->ibqp.qp_type) {
 case 131:
  FUNC_1(VAR_2, VAR_3);

 case 129:
  if (VAR_3->length > 0x80000000U)
   return -VAR_0;
  if (VAR_3->length > VAR_2->pmtu)
   *VAR_4 = 0;
  break;
 case 130:







  VAR_7 = FUNC_2(VAR_5);
  VAR_8 = FUNC_0(VAR_7);
  if (VAR_3->length > VAR_8->vld[15].mtu)
   return -VAR_0;
  break;
 case 132:
 case 128:
  VAR_6 = FUNC_4(VAR_3);
  if (VAR_3->length > (1 << VAR_6->log_pmtu))
   return -VAR_0;
  if (VAR_5->sl_to_sc[FUNC_3(&VAR_6->attr)] == 0xf)
   return -VAR_0;
 default:
  break;
 }





 if (VAR_3->length <= VAR_1)
  *VAR_4 = 1;
 return 0;
}
