
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_dev_priv {int local_gid; TYPE_1__* dev; int flags; int max_ib_mtu; struct net_device* parent; } ;
struct TYPE_2__ {int * dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_0(VAR_2);
 struct ipoib_dev_priv *VAR_4 = FUNC_0(VAR_3->parent);

 VAR_3->max_ib_mtu = VAR_4->max_ib_mtu;
 FUNC_2(VAR_1, &VAR_3->flags);
 FUNC_1(VAR_3->dev->dev_addr, VAR_4->dev->dev_addr, VAR_0);
 FUNC_1(&VAR_3->local_gid, &VAR_4->local_gid, sizeof(VAR_3->local_gid));
}
