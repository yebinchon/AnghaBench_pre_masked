
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reap_task; int reap_list; } ;
struct ipoib_dev_priv {int lock; TYPE_1__ cm; int wq; } ;
struct ipoib_cm_tx {TYPE_2__* neigh; int list; int flags; int dev; } ;
struct TYPE_4__ {scalar_t__ daddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipoib_dev_priv*,char*,scalar_t__) ;
 struct ipoib_dev_priv* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct ipoib_cm_tx *VAR_1)
{
 struct ipoib_dev_priv *VAR_2 = FUNC_1(VAR_1->dev);
 unsigned long VAR_3;
 if (FUNC_6(VAR_0, &VAR_1->flags)) {
  FUNC_4(&VAR_2->lock, VAR_3);
  FUNC_2(&VAR_1->list, &VAR_2->cm.reap_list);
  FUNC_3(VAR_2->wq, &VAR_2->cm.reap_task);
  FUNC_0(VAR_2, "Reap connection for gid %pI6\n",
     VAR_1->neigh->daddr + 4);
  VAR_1->neigh = ((void*)0);
  FUNC_5(&VAR_2->lock, VAR_3);
 }
}
