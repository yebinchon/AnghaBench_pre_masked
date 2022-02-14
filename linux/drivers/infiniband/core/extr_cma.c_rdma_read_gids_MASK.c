
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
struct sockaddr {int dummy; } ;
struct rdma_addr {int dev_addr; int dst_addr; int src_addr; } ;
struct TYPE_2__ {struct rdma_addr addr; } ;
struct rdma_cm_id {int port_num; int device; TYPE_1__ route; } ;


 int FUNC_0 (union ib_gid*,int ,int) ;
 int FUNC_1 (int *,union ib_gid*) ;
 int FUNC_2 (int *,union ib_gid*) ;
 int FUNC_3 (struct sockaddr*,union ib_gid*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

void FUNC_5(struct rdma_cm_id *VAR_0, union ib_gid *VAR_1,
      union ib_gid *VAR_2)
{
 struct rdma_addr *VAR_3 = &VAR_0->route.addr;

 if (!VAR_0->device) {
  if (VAR_1)
   FUNC_0(VAR_1, 0, sizeof(*VAR_1));
  if (VAR_2)
   FUNC_0(VAR_2, 0, sizeof(*VAR_2));
  return;
 }

 if (FUNC_4(VAR_0->device, VAR_0->port_num)) {
  if (VAR_1)
   FUNC_3((struct sockaddr *)&VAR_3->src_addr, VAR_1);
  if (VAR_2)
   FUNC_3((struct sockaddr *)&VAR_3->dst_addr, VAR_2);
 } else {
  if (VAR_1)
   FUNC_2(&VAR_3->dev_addr, VAR_1);
  if (VAR_2)
   FUNC_1(&VAR_3->dev_addr, VAR_2);
 }
}
