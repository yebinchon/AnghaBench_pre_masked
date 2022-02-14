
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rdma_netdev {struct ipoib_dev_priv* clnt_priv; struct ib_device* hca; int detach_mcast; int attach_mcast; int send; } ;
struct net_device {int * priv_destructor; int * netdev_ops; } ;
struct ipoib_dev_priv {int * next_priv_destructor; int * rn_ops; int port; struct ib_device* ca; } ;
struct TYPE_2__ {int device_cap_flags; } ;
struct ib_device {TYPE_1__ attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ipoib_dev_priv*) ;
 struct ipoib_dev_priv* FUNC_2 (int,int ) ;
 struct rdma_netdev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ib_device*,int ,int ,char const*,int ,int ,struct net_device*) ;

int FUNC_5(struct ib_device *VAR_13, u8 VAR_14, const char *VAR_15,
      struct net_device *VAR_16)
{
 struct rdma_netdev *VAR_17 = FUNC_3(VAR_16);
 struct ipoib_dev_priv *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_0;

 VAR_18->ca = VAR_13;
 VAR_18->port = VAR_14;

 VAR_19 = FUNC_4(VAR_13, VAR_14, VAR_5, VAR_15,
         VAR_4, VAR_12, VAR_16);
 if (VAR_19) {
  if (VAR_19 != -VAR_1)
   goto out;

  VAR_16->netdev_ops = &VAR_8;
  VAR_17->send = VAR_11;
  VAR_17->attach_mcast = VAR_6;
  VAR_17->detach_mcast = VAR_7;
  VAR_17->hca = VAR_13;
 }

 VAR_18->rn_ops = VAR_16->netdev_ops;

 if (VAR_13->attrs.device_cap_flags & VAR_3)
  VAR_16->netdev_ops = &VAR_10;
 else
  VAR_16->netdev_ops = &VAR_9;

 VAR_17->clnt_priv = VAR_18;





 VAR_18->next_priv_destructor = VAR_16->priv_destructor;
 VAR_16->priv_destructor = ((void*)0);

 FUNC_0(VAR_16);

 return 0;

out:
 FUNC_1(VAR_18);
 return VAR_19;
}
