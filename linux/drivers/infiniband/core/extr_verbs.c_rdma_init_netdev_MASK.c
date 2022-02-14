
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rdma_netdev_alloc_params {int (* initialize_rdma_netdev ) (struct ib_device*,int ,struct net_device*,int ) ;int param; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* rdma_netdev_get_params ) (struct ib_device*,int ,int,struct rdma_netdev_alloc_params*) ;} ;
struct ib_device {TYPE_1__ ops; } ;
typedef enum rdma_netdev_t { ____Placeholder_rdma_netdev_t } rdma_netdev_t ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int ,int,struct rdma_netdev_alloc_params*) ;
 int FUNC_1 (struct ib_device*,int ,struct net_device*,int ) ;

int FUNC_2(struct ib_device *VAR_1, u8 VAR_2,
       enum rdma_netdev_t VAR_3, const char *VAR_4,
       unsigned char VAR_5,
       void (*VAR_6)(struct net_device *),
       struct net_device *VAR_7)
{
 struct rdma_netdev_alloc_params VAR_8;
 int VAR_9;

 if (!VAR_1->ops.rdma_netdev_get_params)
  return -VAR_0;

 VAR_9 = VAR_1->ops.rdma_netdev_get_params(VAR_1, VAR_2, VAR_3,
      &VAR_8);
 if (VAR_9)
  return VAR_9;

 return VAR_8.initialize_rdma_netdev(VAR_1, VAR_2,
          VAR_7, VAR_8.param);
}
