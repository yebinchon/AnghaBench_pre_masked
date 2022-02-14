
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ipoib_dev_priv {int event_handler; TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct ipoib_dev_priv* FUNC_3 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2)
{
 struct ipoib_dev_priv *VAR_3 = FUNC_3(VAR_2);





 FUNC_4();
 FUNC_0(VAR_3->dev, VAR_3->dev->flags & ~VAR_0, ((void*)0));
 FUNC_5();


 FUNC_2(&VAR_3->event_handler);





 FUNC_1(VAR_1);
}
