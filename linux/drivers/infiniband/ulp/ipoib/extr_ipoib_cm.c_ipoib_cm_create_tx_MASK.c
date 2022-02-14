
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_path {int dummy; } ;
struct ipoib_neigh {struct ipoib_cm_tx* cm; } ;
struct TYPE_2__ {int start_task; int start_list; } ;
struct ipoib_dev_priv {TYPE_1__ cm; int wq; } ;
struct ipoib_cm_tx {int flags; int list; struct net_device* dev; struct ipoib_neigh* neigh; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ipoib_dev_priv* FUNC_0 (struct net_device*) ;
 struct ipoib_cm_tx* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

struct ipoib_cm_tx *FUNC_5(struct net_device *VAR_2, struct ipoib_path *VAR_3,
           struct ipoib_neigh *VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_0(VAR_2);
 struct ipoib_cm_tx *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_4->cm = VAR_6;
 VAR_6->neigh = VAR_4;
 VAR_6->dev = VAR_2;
 FUNC_2(&VAR_6->list, &VAR_5->cm.start_list);
 FUNC_4(VAR_1, &VAR_6->flags);
 FUNC_3(VAR_5->wq, &VAR_5->cm.start_task);
 return VAR_6;
}
