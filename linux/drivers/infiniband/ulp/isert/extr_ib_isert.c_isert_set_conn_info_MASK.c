
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int src_addr; int dst_addr; } ;
struct rdma_route {TYPE_2__ addr; } ;
struct rdma_cm_id {struct rdma_route route; } ;
struct isert_conn {struct rdma_cm_id* cm_id; } ;
struct TYPE_3__ {int ss_family; } ;
struct iscsi_np {TYPE_1__ np_sockaddr; } ;
struct iscsi_conn {int local_sockaddr; int login_sockaddr; int login_family; } ;



__attribute__((used)) static void
FUNC_0(struct iscsi_np *VAR_0, struct iscsi_conn *VAR_1,
      struct isert_conn *VAR_2)
{
 struct rdma_cm_id *VAR_3 = VAR_2->cm_id;
 struct rdma_route *VAR_4 = &VAR_3->route;

 VAR_1->login_family = VAR_0->np_sockaddr.ss_family;

 VAR_1->login_sockaddr = VAR_4->addr.dst_addr;
 VAR_1->local_sockaddr = VAR_4->addr.src_addr;
}
