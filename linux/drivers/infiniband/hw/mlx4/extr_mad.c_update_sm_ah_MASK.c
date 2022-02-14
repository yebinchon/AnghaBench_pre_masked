
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rdma_ah_attr {int type; } ;
struct mlx4_ib_dev {int sm_lock; struct ib_ah** sm_ah; TYPE_2__*** send_agent; int ib_dev; } ;
struct ib_ah {int dummy; } ;
struct TYPE_4__ {TYPE_1__* qp; } ;
struct TYPE_3__ {int pd; } ;


 scalar_t__ FUNC_0 (struct ib_ah*) ;
 int FUNC_1 (struct rdma_ah_attr*,int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct rdma_ah_attr*,int ) ;
 int FUNC_4 (struct rdma_ah_attr*,int) ;
 int FUNC_5 (struct rdma_ah_attr*,int) ;
 struct ib_ah* FUNC_6 (int ,struct rdma_ah_attr*,int ) ;
 int FUNC_7 (struct ib_ah*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct mlx4_ib_dev *VAR_0, u8 VAR_1, u16 VAR_2, u8 VAR_3)
{
 struct ib_ah *VAR_4;
 struct rdma_ah_attr VAR_5;
 unsigned long VAR_6;

 if (!VAR_0->send_agent[VAR_1 - 1][0])
  return;

 FUNC_1(&VAR_5, 0, sizeof VAR_5);
 VAR_5.type = FUNC_2(&VAR_0->ib_dev, VAR_1);
 FUNC_3(&VAR_5, VAR_2);
 FUNC_5(&VAR_5, VAR_3);
 FUNC_4(&VAR_5, VAR_1);

 VAR_4 = FUNC_6(VAR_0->send_agent[VAR_1 - 1][0]->qp->pd,
    &VAR_5, 0);
 if (FUNC_0(VAR_4))
  return;

 FUNC_8(&VAR_0->sm_lock, VAR_6);
 if (VAR_0->sm_ah[VAR_1 - 1])
  FUNC_7(VAR_0->sm_ah[VAR_1 - 1], 0);
 VAR_0->sm_ah[VAR_1 - 1] = VAR_4;
 FUNC_9(&VAR_0->sm_lock, VAR_6);
}
