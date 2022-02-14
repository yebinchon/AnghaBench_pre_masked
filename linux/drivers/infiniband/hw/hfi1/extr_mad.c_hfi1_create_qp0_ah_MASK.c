
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int pd; } ;
struct rvt_qp {TYPE_4__ ibqp; } ;
struct rdma_ah_attr {int type; } ;
struct ib_ah {int dummy; } ;
struct hfi1_pportdata {int port; } ;
struct TYPE_7__ {int * qp; } ;
struct hfi1_ibport {TYPE_3__ rvp; } ;
struct TYPE_5__ {int ibdev; } ;
struct TYPE_6__ {TYPE_1__ rdi; } ;
struct hfi1_devdata {TYPE_2__ verbs_dev; } ;
typedef int attr ;


 int VAR_0 ;
 struct ib_ah* FUNC_0 (int ) ;
 struct hfi1_devdata* FUNC_1 (struct hfi1_pportdata*) ;
 int FUNC_2 (struct hfi1_ibport*,struct rdma_ah_attr*,int ) ;
 int FUNC_3 (struct rdma_ah_attr*,int ,int) ;
 struct hfi1_pportdata* FUNC_4 (struct hfi1_ibport*) ;
 struct rvt_qp* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 struct ib_ah* FUNC_9 (int ,struct rdma_ah_attr*,int ) ;

__attribute__((used)) static struct ib_ah *FUNC_10(struct hfi1_ibport *VAR_1, u32 VAR_2)
{
 struct rdma_ah_attr VAR_3;
 struct ib_ah *VAR_4 = FUNC_0(-VAR_0);
 struct rvt_qp *VAR_5;
 struct hfi1_pportdata *VAR_6 = FUNC_4(VAR_1);
 struct hfi1_devdata *VAR_7 = FUNC_1(VAR_6);
 u8 VAR_8 = VAR_6->port;

 FUNC_3(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.type = FUNC_8(&VAR_7->verbs_dev.rdi.ibdev, VAR_8);
 FUNC_2(VAR_1, &VAR_3, VAR_2);
 FUNC_6();
 VAR_5 = FUNC_5(VAR_1->rvp.qp[0]);
 if (VAR_5)
  VAR_4 = FUNC_9(VAR_5->ibqp.pd, &VAR_3, 0);
 FUNC_7();
 return VAR_4;
}
