
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rdma_dev_addr {scalar_t__ bound_dev_if; int net; } ;
struct TYPE_10__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_11__ {TYPE_4__ addr; } ;
struct TYPE_12__ {TYPE_5__ route; } ;
struct rdma_id_private {TYPE_6__ id; } ;
struct net_device {int dummy; } ;
struct TYPE_9__ {TYPE_2__* ib; } ;
struct cma_multicast {int mcref; TYPE_3__ multicast; } ;
struct TYPE_7__ {int mgid; } ;
struct TYPE_8__ {TYPE_1__ rec; } ;


 int FUNC_0 (struct net_device*,int *,int) ;
 struct net_device* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct rdma_id_private *VAR_1,
        struct cma_multicast *VAR_2)
{
 struct rdma_dev_addr *VAR_3 = &VAR_1->id.route.addr.dev_addr;
 struct net_device *VAR_4 = ((void*)0);

 if (VAR_3->bound_dev_if)
  VAR_4 = FUNC_1(VAR_3->net, VAR_3->bound_dev_if);
 if (VAR_4) {
  FUNC_0(VAR_4, &VAR_2->multicast.ib->rec.mgid, 0);
  FUNC_2(VAR_4);
 }
 FUNC_3(&VAR_2->mcref, VAR_0);
}
