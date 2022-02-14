
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bound_dev_if; int net; } ;
struct TYPE_4__ {scalar_t__ ss_family; } ;
struct rdma_addr {TYPE_2__ dev_addr; TYPE_1__ src_addr; } ;
struct TYPE_6__ {struct rdma_addr addr; } ;
struct rdma_cm_id {scalar_t__ port_num; TYPE_3__ route; } ;
struct net_device {scalar_t__ ifindex; } ;
struct cma_req_info {scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cma_req_info const*) ;
 int FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(const struct rdma_cm_id *VAR_1,
         const struct net_device *VAR_2,
         const struct cma_req_info *VAR_3)
{
 const struct rdma_addr *VAR_4 = &VAR_1->route.addr;

 if (!VAR_2)

  return (!VAR_1->port_num || VAR_1->port_num == VAR_3->port) &&
         (VAR_4->src_addr.ss_family == VAR_0);





 if (!FUNC_0(VAR_3))
  return 1;




 if (FUNC_2(FUNC_1(VAR_2), VAR_4->dev_addr.net) &&
     (!!VAR_4->dev_addr.bound_dev_if ==
      (VAR_4->dev_addr.bound_dev_if == VAR_2->ifindex)))
  return 1;
 else
  return 0;
}
