
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ kern_name; } ;
struct TYPE_8__ {int transport; } ;
struct TYPE_9__ {TYPE_1__ dev_addr; } ;
struct TYPE_10__ {TYPE_2__ addr; } ;
struct TYPE_12__ {TYPE_3__ route; TYPE_4__* device; } ;
struct rdma_id_private {TYPE_6__ res; int list; TYPE_5__ id; struct cma_device* cma_dev; } ;
struct cma_device {int id_list; TYPE_4__* device; } ;
struct TYPE_11__ {int node_type; } ;


 int FUNC_0 (struct cma_device*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_5(struct rdma_id_private *VAR_0,
          struct cma_device *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_0->cma_dev = VAR_1;
 VAR_0->id.device = VAR_1->device;
 VAR_0->id.route.addr.dev_addr.transport =
  FUNC_2(VAR_1->device->node_type);
 FUNC_1(&VAR_0->list, &VAR_1->id_list);
 if (VAR_0->res.kern_name)
  FUNC_3(&VAR_0->res);
 else
  FUNC_4(&VAR_0->res);
}
