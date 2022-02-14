
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int id; } ;
struct ib_qp_attr {scalar_t__ sq_psn; int qp_state; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ib_qp*,struct ib_qp_attr*,int) ;
 int FUNC_1 (int *,struct ib_qp_attr*,int*) ;

__attribute__((used)) static int FUNC_2(struct rdma_id_private *VAR_5, struct ib_qp *VAR_6)
{
 struct ib_qp_attr VAR_7;
 int VAR_8, VAR_9;

 VAR_7.qp_state = VAR_0;
 VAR_9 = FUNC_1(&VAR_5->id, &VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_6, &VAR_7, VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_7.qp_state = VAR_1;
 VAR_9 = FUNC_0(VAR_6, &VAR_7, VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_7.qp_state = VAR_2;
 VAR_7.sq_psn = 0;
 VAR_9 = FUNC_0(VAR_6, &VAR_7, VAR_4 | VAR_3);

 return VAR_9;
}
