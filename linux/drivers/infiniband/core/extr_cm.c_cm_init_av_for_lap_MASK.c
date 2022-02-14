
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_ah_attr {int dummy; } ;
struct ib_wc {int pkey_index; } ;
struct ib_grh {int dummy; } ;
struct cm_port {int port_num; TYPE_1__* cm_dev; } ;
struct cm_av {int ah_attr; int pkey_index; struct cm_port* port; } ;
struct TYPE_2__ {int ib_device; } ;


 int FUNC_0 (int ,int ,struct ib_wc*,struct ib_grh*,struct rdma_ah_attr*) ;
 int FUNC_1 (int *,struct rdma_ah_attr*) ;

__attribute__((used)) static int FUNC_2(struct cm_port *VAR_0, struct ib_wc *VAR_1,
         struct ib_grh *VAR_2, struct cm_av *VAR_3)
{
 struct rdma_ah_attr VAR_4;
 int VAR_5;

 VAR_3->port = VAR_0;
 VAR_3->pkey_index = VAR_1->pkey_index;
 VAR_5 = FUNC_0(VAR_0->cm_dev->ib_device,
          VAR_0->port_num, VAR_1,
          VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_1(&VAR_3->ah_attr, &VAR_4);
 return 0;
}
