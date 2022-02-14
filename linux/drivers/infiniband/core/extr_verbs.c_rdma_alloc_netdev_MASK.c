
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rdma_netdev_alloc_params {int rxqs; int txqs; int sizeof_priv; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* rdma_netdev_get_params ) (struct ib_device*,int ,int,struct rdma_netdev_alloc_params*) ;} ;
struct ib_device {TYPE_1__ ops; } ;
typedef enum rdma_netdev_t { ____Placeholder_rdma_netdev_t } rdma_netdev_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int) ;
 struct net_device* FUNC_1 (int ,char const*,unsigned char,void (*) (struct net_device*),int ,int ) ;
 int FUNC_2 (struct ib_device*,int ,int,struct rdma_netdev_alloc_params*) ;

struct net_device *FUNC_3(struct ib_device *VAR_2, u8 VAR_3,
         enum rdma_netdev_t VAR_4, const char *VAR_5,
         unsigned char VAR_6,
         void (*VAR_7)(struct net_device *))
{
 struct rdma_netdev_alloc_params VAR_8;
 struct net_device *VAR_9;
 int VAR_10;

 if (!VAR_2->ops.rdma_netdev_get_params)
  return FUNC_0(-VAR_1);

 VAR_10 = VAR_2->ops.rdma_netdev_get_params(VAR_2, VAR_3, VAR_4,
      &VAR_8);
 if (VAR_10)
  return FUNC_0(VAR_10);

 VAR_9 = FUNC_1(VAR_8.sizeof_priv, VAR_5, VAR_6,
      VAR_7, VAR_8.txqs, VAR_8.rxqs);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 return VAR_9;
}
