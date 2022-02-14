
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int watchdog_timeo; int * netdev_ops; int irq; } ;
struct adm5120_if_priv {int napi; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (int) ;
 struct adm5120_if_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int *,int ,int) ;

__attribute__((used)) static struct net_device *FUNC_3(void)
{
 struct net_device *VAR_4;
 struct adm5120_if_priv *VAR_5;

 VAR_4 = FUNC_0(sizeof(*VAR_5));
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_4);
 VAR_5->dev = VAR_4;

 VAR_4->irq = VAR_0;
 VAR_4->netdev_ops = &VAR_3;
 VAR_4->watchdog_timeo = VAR_1;





 return VAR_4;
}
