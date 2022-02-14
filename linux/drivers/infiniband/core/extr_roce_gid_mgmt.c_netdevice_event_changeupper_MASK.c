
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_notifier_changeupper_info {scalar_t__ linking; } ;
struct netdev_event_work_cmd {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct netdev_notifier_changeupper_info*,struct netdev_event_work_cmd*) ;
 int FUNC_1 (struct netdev_notifier_changeupper_info*,struct netdev_event_work_cmd*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
  struct netdev_notifier_changeupper_info *VAR_1,
  struct netdev_event_work_cmd *VAR_2)
{
 if (VAR_1->linking)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
}
