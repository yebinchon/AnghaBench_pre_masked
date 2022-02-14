
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int transport; } ;
struct TYPE_6__ {TYPE_5__ dev_addr; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;
struct TYPE_8__ {TYPE_2__ route; TYPE_4__* device; } ;
struct rdma_id_private {int list; TYPE_3__ id; scalar_t__ gid_type; struct cma_device* cma_dev; } ;
struct cma_device {int id_list; TYPE_4__* device; } ;
struct TYPE_9__ {int node_type; } ;


 int FUNC_0 (struct cma_device*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct rdma_id_private *VAR_0,
          struct cma_device *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_0->cma_dev = VAR_1;
 VAR_0->gid_type = 0;
 VAR_0->id.device = VAR_1->device;
 VAR_0->id.route.addr.dev_addr.transport =
  FUNC_2(VAR_1->device->node_type);
 FUNC_1(&VAR_0->list, &VAR_1->id_list);
}
