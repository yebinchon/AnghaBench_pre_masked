
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnet {int dummy; } ;
struct TYPE_5__ {struct vnet* net; } ;
struct TYPE_6__ {TYPE_1__ dev_addr; } ;
struct TYPE_7__ {TYPE_2__ addr; } ;
struct TYPE_8__ {TYPE_3__ route; } ;
struct rdma_id_private {int node; TYPE_4__ id; struct rdma_bind_list* bind_list; } ;
struct rdma_bind_list {int port; int ps; int owners; } ;


 int FUNC_0 (struct vnet*,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct rdma_bind_list*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rdma_id_private *VAR_1)
{
 struct rdma_bind_list *VAR_2 = VAR_1->bind_list;
 struct vnet *VAR_3 = VAR_1->id.route.addr.dev_addr.net;

 if (!VAR_2)
  return;

 FUNC_4(&VAR_0);
 FUNC_1(&VAR_1->node);
 if (FUNC_2(&VAR_2->owners)) {
  FUNC_0(VAR_3, VAR_2->ps, VAR_2->port);
  FUNC_3(VAR_2);
 }
 FUNC_5(&VAR_0);
}
