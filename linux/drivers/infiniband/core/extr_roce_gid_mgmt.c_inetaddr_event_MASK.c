
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;
struct in_ifaddr {TYPE_2__* ifa_dev; int ifa_address; } ;
struct TYPE_4__ {struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct notifier_block*,unsigned long,struct sockaddr*,struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_1, unsigned long VAR_2,
     void *VAR_3)
{
 struct sockaddr_in VAR_4;
 struct net_device *VAR_5;
 struct in_ifaddr *VAR_6 = VAR_3;

 VAR_4.sin_family = VAR_0;
 VAR_4.sin_addr.s_addr = VAR_6->ifa_address;
 VAR_5 = VAR_6->ifa_dev->dev;

 return FUNC_0(VAR_1, VAR_2, (struct sockaddr *)&VAR_4, VAR_5);
}
