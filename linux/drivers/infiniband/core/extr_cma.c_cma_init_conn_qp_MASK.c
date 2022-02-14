
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int id; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_qp*,struct ib_qp_attr*,int) ;
 int FUNC_1 (int *,struct ib_qp_attr*,int*) ;

__attribute__((used)) static int FUNC_2(struct rdma_id_private *VAR_1, struct ib_qp *VAR_2)
{
 struct ib_qp_attr VAR_3;
 int VAR_4, VAR_5;

 VAR_3.qp_state = VAR_0;
 VAR_5 = FUNC_1(&VAR_1->id, &VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_2, &VAR_3, VAR_4);
}
