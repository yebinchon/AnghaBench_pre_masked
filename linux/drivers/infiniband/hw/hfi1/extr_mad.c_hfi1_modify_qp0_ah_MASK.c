
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rvt_qp {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct rvt_ah {TYPE_2__ ibah; } ;
struct rdma_ah_attr {int type; } ;
struct TYPE_3__ {int * qp; } ;
struct hfi1_ibport {TYPE_1__ rvp; } ;
typedef int attr ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_ibport*,struct rdma_ah_attr*,int ) ;
 int FUNC_1 (struct rdma_ah_attr*,int ,int) ;
 struct rvt_qp* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,struct rdma_ah_attr*) ;

__attribute__((used)) static int FUNC_6(struct hfi1_ibport *VAR_1,
         struct rvt_ah *VAR_2, u32 VAR_3)
{
 struct rdma_ah_attr VAR_4;
 struct rvt_qp *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.type = VAR_2->ibah.type;
 FUNC_0(VAR_1, &VAR_4, VAR_3);
 FUNC_3();
 VAR_5 = FUNC_2(VAR_1->rvp.qp[0]);
 if (VAR_5)
  VAR_6 = FUNC_5(&VAR_2->ibah, &VAR_4);
 FUNC_4();
 return VAR_6;
}
