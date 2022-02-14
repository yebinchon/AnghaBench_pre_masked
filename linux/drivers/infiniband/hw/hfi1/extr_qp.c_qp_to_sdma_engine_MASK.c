
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdma_engine {int dummy; } ;
struct TYPE_2__ {int qp_type; int qp_num; int device; } ;
struct rvt_qp {TYPE_1__ ibqp; } ;
struct hfi1_devdata {int flags; int qos_shift; } ;


 int VAR_0 ;

 struct hfi1_devdata* FUNC_0 (int ) ;
 struct sdma_engine* FUNC_1 (struct hfi1_devdata*,int,int ) ;

struct sdma_engine *FUNC_2(struct rvt_qp *VAR_1, u8 VAR_2)
{
 struct hfi1_devdata *VAR_3 = FUNC_0(VAR_1->ibqp.device);
 struct sdma_engine *VAR_4;

 if (!(VAR_3->flags & VAR_0))
  return ((void*)0);
 switch (VAR_1->ibqp.qp_type) {
 case 128:
  return ((void*)0);
 default:
  break;
 }
 VAR_4 = FUNC_1(VAR_3, VAR_1->ibqp.qp_num >> VAR_3->qos_shift, VAR_2);
 return VAR_4;
}
