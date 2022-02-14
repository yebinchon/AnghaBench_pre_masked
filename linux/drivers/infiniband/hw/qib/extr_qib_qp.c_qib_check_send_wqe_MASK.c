
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvt_swqe {int length; } ;
struct TYPE_2__ {int qp_type; } ;
struct rvt_qp {int pmtu; TYPE_1__ ibqp; } ;
struct rvt_ah {int log_pmtu; } ;


 int VAR_0 ;





 struct rvt_ah* FUNC_0 (struct rvt_swqe*) ;

int FUNC_1(struct rvt_qp *VAR_1,
         struct rvt_swqe *VAR_2, bool *VAR_3)
{
 struct rvt_ah *VAR_4;

 switch (VAR_1->ibqp.qp_type) {
 case 131:
 case 129:
  if (VAR_2->length > 0x80000000U)
   return -VAR_0;
  if (VAR_2->length > VAR_1->pmtu)
   *VAR_3 = 0;
  break;
 case 130:
 case 132:
 case 128:
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_2->length > (1 << VAR_4->log_pmtu))
   return -VAR_0;

  *VAR_3 = 1;
  break;
 default:
  break;
 }
 return 0;
}
