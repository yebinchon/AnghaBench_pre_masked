
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_netdev {struct ipoib_dev_priv* clnt_priv; } ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {int dummy; } ;


 struct rdma_netdev* FUNC_0 (struct net_device const*) ;

__attribute__((used)) static inline struct ipoib_dev_priv *FUNC_1(const struct net_device *VAR_0)
{
 struct rdma_netdev *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->clnt_priv;
}
