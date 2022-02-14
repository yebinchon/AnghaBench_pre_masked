
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct rdma_ucm_query_route_resp {TYPE_2__* ib_route; } ;
struct rdma_dev_addr {int dummy; } ;
struct TYPE_3__ {struct rdma_dev_addr dev_addr; } ;
struct rdma_route {TYPE_1__ addr; } ;
struct TYPE_4__ {int sgid; int dgid; } ;


 int FUNC_0 (struct rdma_dev_addr*,union ib_gid*) ;
 int FUNC_1 (struct rdma_dev_addr*,union ib_gid*) ;

__attribute__((used)) static void FUNC_2(struct rdma_ucm_query_route_resp *VAR_0,
          struct rdma_route *VAR_1)
{
 struct rdma_dev_addr *VAR_2;

 VAR_2 = &VAR_1->addr.dev_addr;
 FUNC_0(VAR_2, (union ib_gid *) &VAR_0->ib_route[0].dgid);
 FUNC_1(VAR_2, (union ib_gid *) &VAR_0->ib_route[0].sgid);
}
