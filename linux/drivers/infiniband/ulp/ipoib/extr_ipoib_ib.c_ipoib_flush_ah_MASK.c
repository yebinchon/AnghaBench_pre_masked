
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int work; } ;
struct ipoib_dev_priv {TYPE_1__ ah_reap_task; int wq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 struct ipoib_dev_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct ipoib_dev_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->ah_reap_task);
 FUNC_1(VAR_1->wq);
 FUNC_3(&VAR_1->ah_reap_task.work);
}
