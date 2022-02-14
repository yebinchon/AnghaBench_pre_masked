
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int dst_dev_addr; int network; int bound_dev_if; int net; } ;
struct rdma_addr {TYPE_3__ dev_addr; } ;
struct rdma_route {TYPE_4__* path_rec; struct rdma_addr addr; } ;
struct TYPE_5__ {int port_num; int device; struct rdma_route route; } ;
struct rdma_id_private {int gid_type; TYPE_1__ id; } ;
struct net_device {int dummy; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;
struct TYPE_6__ {int route_resolved; } ;
struct TYPE_8__ {TYPE_2__ roce; int rec_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long,int ) ;
 struct net_device* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int ) ;

__attribute__((used)) static struct net_device *
FUNC_6(struct rdma_id_private *VAR_1)
{
 struct rdma_route *VAR_2 = &VAR_1->id.route;
 enum ib_gid_type VAR_3 = VAR_0;
 struct rdma_addr *VAR_4 = &VAR_2->addr;
 unsigned long VAR_5;
 struct net_device *VAR_6;

 if (!VAR_4->dev_addr.bound_dev_if)
  return ((void*)0);

 VAR_6 = FUNC_1(VAR_4->dev_addr.net,
    VAR_4->dev_addr.bound_dev_if);
 if (!VAR_6)
  return ((void*)0);

 VAR_5 = FUNC_3(VAR_1->id.device,
          VAR_1->id.port_num);
 VAR_3 = FUNC_0(VAR_4->dev_addr.network,
          VAR_5,
          VAR_1->gid_type);

 if (VAR_3 < FUNC_2(VAR_4->dev_addr.network))
  VAR_3 = FUNC_2(VAR_4->dev_addr.network);
 VAR_2->path_rec->rec_type = FUNC_4(VAR_3);

 VAR_2->path_rec->roce.route_resolved = 1;
 FUNC_5(VAR_2->path_rec, VAR_4->dev_addr.dst_dev_addr);
 return VAR_6;
}
