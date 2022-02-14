
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_ah {int log_pmtu; int attr; int vl; } ;
struct rdma_ah_attr {int dummy; } ;
struct qib_pportdata {int ibmtu; } ;
struct qib_ibport {int * sl_to_vl; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct qib_pportdata* FUNC_1 (struct qib_ibport*) ;
 int FUNC_2 (struct rdma_ah_attr*) ;
 size_t FUNC_3 (int *) ;
 struct qib_ibport* FUNC_4 (struct ib_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct ib_device *VAR_0,
         struct rdma_ah_attr *VAR_1,
         struct rvt_ah *VAR_2)
{
 struct qib_ibport *VAR_3;
 struct qib_pportdata *VAR_4;






 VAR_3 = FUNC_4(VAR_0, FUNC_2(VAR_1));
 VAR_4 = FUNC_1(VAR_3);
 VAR_2->vl = VAR_3->sl_to_vl[FUNC_3(&VAR_2->attr)];
 VAR_2->log_pmtu = FUNC_0(VAR_4->ibmtu);
}
