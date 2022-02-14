
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qp_type; } ;
struct rvt_qp {TYPE_1__ ibqp; scalar_t__ r_adefered; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rvt_qp*) ;
 int FUNC_1 (struct rvt_qp*) ;
 int FUNC_2 (struct rvt_qp*) ;

void FUNC_3(struct rvt_qp *VAR_1)
{
 FUNC_1(VAR_1);
 VAR_1->r_adefered = 0;
 FUNC_0(VAR_1);


 if (VAR_1->ibqp.qp_type == VAR_0)
  FUNC_2(VAR_1);
}
