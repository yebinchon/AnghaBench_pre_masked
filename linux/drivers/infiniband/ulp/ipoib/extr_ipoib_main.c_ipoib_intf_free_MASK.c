
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_netdev {int * clnt_priv; } ;
struct net_device {int (* priv_destructor ) (struct net_device*) ;} ;
struct ipoib_dev_priv {int (* next_priv_destructor ) (struct net_device*) ;} ;


 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ipoib_dev_priv*) ;
 struct rdma_netdev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

void FUNC_4(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_0(VAR_0);
 struct rdma_netdev *VAR_2 = FUNC_2(VAR_0);

 VAR_0->priv_destructor = VAR_1->next_priv_destructor;
 if (VAR_0->priv_destructor)
  VAR_0->priv_destructor(VAR_0);





 VAR_0->priv_destructor = ((void*)0);


 VAR_2->clnt_priv = ((void*)0);

 FUNC_1(VAR_1);
}
