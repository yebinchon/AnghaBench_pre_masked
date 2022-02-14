
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev_addr; } ;
struct TYPE_5__ {TYPE_1__ addr; } ;
struct TYPE_6__ {TYPE_2__ route; } ;
struct rdma_id_private {int cma_dev; TYPE_3__ id; } ;
typedef enum rdma_cm_state { ____Placeholder_rdma_cm_state } rdma_cm_state ;





 int FUNC_0 (int ) ;
 int FUNC_1 (struct rdma_id_private*) ;
 int FUNC_2 (struct rdma_id_private*) ;
 int FUNC_3 (struct rdma_id_private*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rdma_id_private *VAR_0,
     enum rdma_cm_state VAR_1)
{
 switch (VAR_1) {
 case 130:
  FUNC_4(&VAR_0->id.route.addr.dev_addr);
  break;
 case 128:
  FUNC_2(VAR_0);
  break;
 case 129:
  if (FUNC_0(FUNC_3(VAR_0)) && !VAR_0->cma_dev)
   FUNC_1(VAR_0);
  break;
 default:
  break;
 }
}
