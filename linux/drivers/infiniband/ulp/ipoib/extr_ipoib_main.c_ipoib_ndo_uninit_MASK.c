
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipoib_dev_priv {struct net_device* parent; int * wq; int vlan_rwsem; int list; int child_intfs; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 struct ipoib_dev_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_8(VAR_0);

 FUNC_0();





 FUNC_1(!FUNC_10(&VAR_1->child_intfs));

 if (VAR_1->parent) {
  struct ipoib_dev_priv *VAR_2 = FUNC_8(VAR_1->parent);

  FUNC_4(&VAR_2->vlan_rwsem);
  FUNC_9(&VAR_1->list);
  FUNC_11(&VAR_2->vlan_rwsem);
 }

 FUNC_7(VAR_0);

 FUNC_6(VAR_0);


 if (VAR_1->wq) {
  FUNC_5(VAR_1->wq);
  FUNC_2(VAR_1->wq);
  VAR_1->wq = ((void*)0);
 }

 if (VAR_1->parent)
  FUNC_3(VAR_1->parent);
}
