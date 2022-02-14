
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct rdma_ucm_query_route_resp {int num_paths; TYPE_2__* ib_route; } ;
struct rdma_dev_addr {int dummy; } ;
struct TYPE_3__ {struct rdma_dev_addr dev_addr; } ;
struct rdma_route {int num_paths; int * path_rec; TYPE_1__ addr; } ;
struct TYPE_4__ {int pkey; int sgid; int dgid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rdma_dev_addr*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (struct rdma_dev_addr*,union ib_gid*) ;
 int FUNC_4 (struct rdma_dev_addr*,union ib_gid*) ;

__attribute__((used)) static void FUNC_5(struct rdma_ucm_query_route_resp *VAR_0,
          struct rdma_route *VAR_1)
{
 struct rdma_dev_addr *VAR_2;

 VAR_0->num_paths = VAR_1->num_paths;
 switch (VAR_1->num_paths) {
 case 0:
  VAR_2 = &VAR_1->addr.dev_addr;
  FUNC_3(VAR_2,
       (union ib_gid *) &VAR_0->ib_route[0].dgid);
  FUNC_4(VAR_2,
       (union ib_gid *) &VAR_0->ib_route[0].sgid);
  VAR_0->ib_route[0].pkey = FUNC_0(FUNC_1(VAR_2));
  break;
 case 2:
  FUNC_2(&VAR_0->ib_route[1],
      &VAR_1->path_rec[1]);

 case 1:
  FUNC_2(&VAR_0->ib_route[0],
      &VAR_1->path_rec[0]);
  break;
 default:
  break;
 }
}
