
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct inet6_ifaddr {TYPE_1__* idev; int addr; } ;
struct TYPE_2__ {struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct notifier_block*,unsigned long,struct sockaddr*,struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_1, unsigned long VAR_2,
      void *VAR_3)
{
 struct sockaddr_in6 VAR_4;
 struct net_device *VAR_5;
 struct inet6_ifaddr *VAR_6 = VAR_3;

 VAR_4 = VAR_0;
 VAR_4 = VAR_6->addr;
 VAR_5 = VAR_6->idev->dev;

 return FUNC_0(VAR_1, VAR_2, (struct sockaddr *)&VAR_4, VAR_5);
}
