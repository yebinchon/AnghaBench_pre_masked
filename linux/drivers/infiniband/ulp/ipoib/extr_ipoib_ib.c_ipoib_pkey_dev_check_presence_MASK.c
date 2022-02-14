
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_netdev {int (* set_id ) (struct net_device*,int ) ;} ;
struct net_device {int dummy; } ;
struct ipoib_dev_priv {int pkey; int flags; int pkey_index; int port; int ca; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int,int *) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 struct rdma_netdev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct net_device*,int ) ;

void FUNC_6(struct net_device *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_2(VAR_1);
 struct rdma_netdev *VAR_3 = FUNC_3(VAR_1);

 if (!(VAR_2->pkey & 0x7fff) ||
     FUNC_1(VAR_2->ca, VAR_2->port, VAR_2->pkey,
    &VAR_2->pkey_index)) {
  FUNC_0(VAR_0, &VAR_2->flags);
 } else {
  if (VAR_3->set_id)
   VAR_3->set_id(VAR_1, VAR_2->pkey_index);
  FUNC_4(VAR_0, &VAR_2->flags);
 }
}
