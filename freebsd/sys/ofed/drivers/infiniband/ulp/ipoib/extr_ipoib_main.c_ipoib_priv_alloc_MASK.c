
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoib_dev_priv {int broadcastaddr; int ah_reap_task; int restart_task; int flush_heavy; int flush_normal; int flush_light; int carrier_on_task; int mcast_task; int pkey_poll_task; int multicast_list; int dead_ahs; int child_intfs; int path_list; int vlan_mutex; int drain_lock; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct ipoib_dev_priv* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct ipoib_dev_priv *
FUNC_7(void)
{
 struct ipoib_dev_priv *VAR_13;

 VAR_13 = FUNC_3(sizeof(struct ipoib_dev_priv), VAR_1, VAR_3|VAR_2);
 FUNC_6(&VAR_13->lock);
 FUNC_6(&VAR_13->drain_lock);
 FUNC_5(&VAR_13->vlan_mutex);
 FUNC_1(&VAR_13->path_list);
 FUNC_1(&VAR_13->child_intfs);
 FUNC_1(&VAR_13->dead_ahs);
 FUNC_1(&VAR_13->multicast_list);
 FUNC_0(&VAR_13->pkey_poll_task, VAR_10);
 FUNC_0(&VAR_13->mcast_task, VAR_8);
 FUNC_2(&VAR_13->carrier_on_task, VAR_7);
 FUNC_2(&VAR_13->flush_light, VAR_5);
 FUNC_2(&VAR_13->flush_normal, VAR_6);
 FUNC_2(&VAR_13->flush_heavy, VAR_4);
 FUNC_2(&VAR_13->restart_task, VAR_9);
 FUNC_0(&VAR_13->ah_reap_task, VAR_11);
 FUNC_4(VAR_13->broadcastaddr, VAR_12, VAR_0);

 return (VAR_13);
}
