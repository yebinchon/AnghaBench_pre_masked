
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct in_ifaddr {TYPE_1__* ifa_dev; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_2, unsigned long VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = ((struct in_ifaddr *)VAR_4)->ifa_dev->dev;

 if (VAR_5 && (VAR_3 == VAR_0)) {
  FUNC_0(VAR_5);
 }

 return VAR_1;
}
