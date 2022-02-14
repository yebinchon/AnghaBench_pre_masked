
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int neigh_priv_len; int* broadcast; int max_mtu; int mtu; } ;
struct ipoib_neigh {int dummy; } ;
struct ipoib_dev_priv {int pkey; int vlan_rwsem; int child_intfs; int list; struct net_device* parent; int port; TYPE_2__* dev; TYPE_1__* ca; int flags; int admin_mtu; int mcast_mtu; int max_ib_mtu; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ipoib_dev_priv*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (char*,int ,int ,int ,int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_6(VAR_2);
 int VAR_4;

 if (VAR_3->parent) {
  FUNC_3(VAR_2);
 } else {
  VAR_4 = FUNC_5(VAR_2);
  if (VAR_4)
   return VAR_4;
 }


 VAR_2->mtu = FUNC_0(VAR_3->max_ib_mtu);
 VAR_3->mcast_mtu = VAR_3->admin_mtu = VAR_2->mtu;
 VAR_2->max_mtu = VAR_0;

 VAR_2->neigh_priv_len = sizeof(struct ipoib_neigh);





 VAR_3->pkey |= 0x8000;

 VAR_2->broadcast[8] = VAR_3->pkey >> 8;
 VAR_2->broadcast[9] = VAR_3->pkey & 0xff;
 FUNC_10(VAR_1, &VAR_3->flags);

 FUNC_7(VAR_3);

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4) {
  FUNC_9("%s: failed to initialize device: %s port %d (ret = %d)\n",
   VAR_3->ca->name, VAR_3->dev->name, VAR_3->port, VAR_4);
  return VAR_4;
 }

 if (VAR_3->parent) {
  struct ipoib_dev_priv *VAR_5 = FUNC_6(VAR_3->parent);

  FUNC_1(VAR_3->parent);

  FUNC_2(&VAR_5->vlan_rwsem);
  FUNC_8(&VAR_3->list, &VAR_5->child_intfs);
  FUNC_11(&VAR_5->vlan_rwsem);
 }

 return 0;
}
