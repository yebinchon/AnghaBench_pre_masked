
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rdma_dev_addr {scalar_t__ bound_dev_if; int src_dev_addr; int net; } ;
struct TYPE_5__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;
struct TYPE_8__ {TYPE_2__ route; } ;
struct rdma_id_private {int refcount; TYPE_4__ id; } ;
struct net_device {scalar_t__ ifindex; int name; int addr_len; int dev_addr; } ;
struct TYPE_7__ {int event; } ;
struct cma_ndev_work {int work; TYPE_3__ event; struct rdma_id_private* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct net_device*) ;
 struct cma_ndev_work* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ,TYPE_4__*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5, struct rdma_id_private *VAR_6)
{
 struct rdma_dev_addr *VAR_7;
 struct cma_ndev_work *VAR_8;

 VAR_7 = &VAR_6->id.route.addr.dev_addr;

 if ((VAR_7->bound_dev_if == VAR_5->ifindex) &&
     (FUNC_5(FUNC_2(VAR_5), VAR_7->net)) &&
     FUNC_4(VAR_7->src_dev_addr, VAR_5->dev_addr, VAR_5->addr_len)) {
  FUNC_6("RDMA CM addr change for ndev %s used by id %p\n",
   VAR_5->name, &VAR_6->id);
  VAR_8 = FUNC_3(sizeof *VAR_8, VAR_1);
  if (!VAR_8)
   return -VAR_0;

  FUNC_0(&VAR_8->work, VAR_3);
  VAR_8->id = VAR_6;
  VAR_8->event.event = VAR_2;
  FUNC_1(&VAR_6->refcount);
  FUNC_7(VAR_4, &VAR_8->work);
 }

 return 0;
}
