
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {int neigh_reap_task; int ah_reap_task; int restart_task; int flush_heavy; int flush_normal; int flush_light; int carrier_on_task; int mcast_task; int multicast_list; int dead_ahs; int child_intfs; int path_list; int mcast_mutex; int vlan_rwsem; int lock; struct net_device* dev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ipoib_dev_priv* FUNC_4 (struct net_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_8)
{
 struct ipoib_dev_priv *VAR_9 = FUNC_4(VAR_8);

 VAR_9->dev = VAR_8;
 FUNC_6(&VAR_9->lock);
 FUNC_3(&VAR_9->vlan_rwsem);
 FUNC_5(&VAR_9->mcast_mutex);

 FUNC_1(&VAR_9->path_list);
 FUNC_1(&VAR_9->child_intfs);
 FUNC_1(&VAR_9->dead_ahs);
 FUNC_1(&VAR_9->multicast_list);

 FUNC_0(&VAR_9->mcast_task, VAR_4);
 FUNC_2(&VAR_9->carrier_on_task, VAR_3);
 FUNC_2(&VAR_9->flush_light, VAR_1);
 FUNC_2(&VAR_9->flush_normal, VAR_2);
 FUNC_2(&VAR_9->flush_heavy, VAR_0);
 FUNC_2(&VAR_9->restart_task, VAR_5);
 FUNC_0(&VAR_9->ah_reap_task, VAR_6);
 FUNC_0(&VAR_9->neigh_reap_task, VAR_7);
}
