
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cm_id; } ;
struct srpt_rdma_ch {TYPE_1__ ib_cm; int using_rdma_cm; } ;
struct ib_qp_attr {int max_dest_rd_atomic; int qp_state; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ib_qp_attr*,int*) ;
 int FUNC_2 (struct ib_qp*,struct ib_qp_attr*,int) ;

__attribute__((used)) static int FUNC_3(struct srpt_rdma_ch *VAR_1, struct ib_qp *VAR_2)
{
 struct ib_qp_attr VAR_3;
 int VAR_4;
 int VAR_5;

 FUNC_0(VAR_1->using_rdma_cm);

 VAR_3.qp_state = VAR_0;
 VAR_5 = FUNC_1(VAR_1->ib_cm.cm_id, &VAR_3, &VAR_4);
 if (VAR_5)
  goto out;

 VAR_3.max_dest_rd_atomic = 4;

 VAR_5 = FUNC_2(VAR_2, &VAR_3, VAR_4);

out:
 return VAR_5;
}
