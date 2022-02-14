
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int state; int lock; } ;
typedef enum rdma_cm_state { ____Placeholder_rdma_cm_state } rdma_cm_state ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static enum rdma_cm_state FUNC_2(struct rdma_id_private *VAR_0,
       enum rdma_cm_state VAR_1)
{
 unsigned long VAR_2;
 enum rdma_cm_state VAR_3;

 FUNC_0(&VAR_0->lock, VAR_2);
 VAR_3 = VAR_0->state;
 VAR_0->state = VAR_1;
 FUNC_1(&VAR_0->lock, VAR_2);
 return VAR_3;
}
