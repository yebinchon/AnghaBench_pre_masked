
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int dummy; } ;
struct rvt_mcast_qp {struct rvt_qp* qp; } ;


 int FUNC_0 (struct rvt_mcast_qp*) ;
 int FUNC_1 (struct rvt_qp*) ;

__attribute__((used)) static void FUNC_2(struct rvt_mcast_qp *VAR_0)
{
 struct rvt_qp *VAR_1 = VAR_0->qp;


 FUNC_1(VAR_1);

 FUNC_0(VAR_0);
}
