
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct send_context {int dummy; } ;
struct TYPE_4__ {int qp_type; int qp_num; int device; } ;
struct rvt_qp {TYPE_2__ ibqp; } ;
struct hfi1_devdata {int qos_shift; TYPE_1__* vld; } ;
struct TYPE_3__ {struct send_context* sc; } ;



 struct hfi1_devdata* FUNC_0 (int ) ;
 struct send_context* FUNC_1 (struct hfi1_devdata*,int,int ) ;

struct send_context *FUNC_2(struct rvt_qp *VAR_0, u8 VAR_1)
{
 struct hfi1_devdata *VAR_2 = FUNC_0(VAR_0->ibqp.device);

 switch (VAR_0->ibqp.qp_type) {
 case 128:

  return VAR_2->vld[15].sc;
 default:
  break;
 }

 return FUNC_1(VAR_2, VAR_0->ibqp.qp_num >> VAR_2->qos_shift,
       VAR_1);
}
