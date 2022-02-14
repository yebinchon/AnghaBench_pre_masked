
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qp_type; } ;
struct bnxt_re_qp {TYPE_1__ ib_qp; } ;
struct bnxt_re_dev {struct bnxt_re_qp* qp1_sqp; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct bnxt_re_dev *VAR_1,
     struct bnxt_re_qp *VAR_2)
{
 return (VAR_2->ib_qp.qp_type == VAR_0) || (VAR_2 == VAR_1->qp1_sqp);
}
