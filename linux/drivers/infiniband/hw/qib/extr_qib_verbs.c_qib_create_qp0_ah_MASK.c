
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {int pd; } ;
struct rvt_qp {TYPE_4__ ibqp; } ;
struct rdma_ah_attr {int type; } ;
struct qib_pportdata {int port; } ;
struct TYPE_7__ {int * qp; } ;
struct qib_ibport {TYPE_3__ rvp; } ;
struct TYPE_5__ {int ibdev; } ;
struct TYPE_6__ {TYPE_1__ rdi; } ;
struct qib_devdata {TYPE_2__ verbs_dev; } ;
struct ib_ah {int dummy; } ;
typedef int attr ;


 int VAR_0 ;
 struct ib_ah* FUNC_0 (int ) ;
 struct qib_devdata* FUNC_1 (struct qib_pportdata*) ;
 int FUNC_2 (struct rdma_ah_attr*,int ,int) ;
 struct qib_pportdata* FUNC_3 (struct qib_ibport*) ;
 struct rvt_qp* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct rdma_ah_attr*,int ) ;
 int FUNC_9 (struct rdma_ah_attr*,int ) ;
 struct ib_ah* FUNC_10 (int ,struct rdma_ah_attr*,int ) ;

struct ib_ah *FUNC_11(struct qib_ibport *VAR_1, u16 VAR_2)
{
 struct rdma_ah_attr VAR_3;
 struct ib_ah *VAR_4 = FUNC_0(-VAR_0);
 struct rvt_qp *VAR_5;
 struct qib_pportdata *VAR_6 = FUNC_3(VAR_1);
 struct qib_devdata *VAR_7 = FUNC_1(VAR_6);
 u8 VAR_8 = VAR_6->port;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.type = FUNC_7(&VAR_7->verbs_dev.rdi.ibdev, VAR_8);
 FUNC_8(&VAR_3, VAR_2);
 FUNC_9(&VAR_3, VAR_8);
 FUNC_5();
 VAR_5 = FUNC_4(VAR_1->rvp.qp[0]);
 if (VAR_5)
  VAR_4 = FUNC_10(VAR_5->ibqp.pd, &VAR_3, 0);
 FUNC_6();
 return VAR_4;
}
