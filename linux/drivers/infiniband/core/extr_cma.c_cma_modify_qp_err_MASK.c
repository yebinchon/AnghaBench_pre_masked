
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qp; } ;
struct rdma_id_private {int qp_mutex; TYPE_1__ id; } ;
struct ib_qp_attr {int qp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ib_qp_attr*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct rdma_id_private *VAR_2)
{
 struct ib_qp_attr VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->qp_mutex);
 if (!VAR_2->id.qp) {
  VAR_4 = 0;
  goto out;
 }

 VAR_3.qp_state = VAR_0;
 VAR_4 = FUNC_0(VAR_2->id.qp, &VAR_3, VAR_1);
out:
 FUNC_2(&VAR_2->qp_mutex);
 return VAR_4;
}
