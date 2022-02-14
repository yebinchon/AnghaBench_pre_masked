
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int priority; int notifier_call; } ;
struct led_netdev_data {TYPE_1__ notifier; scalar_t__ last_activity; int interval; scalar_t__ mode; scalar_t__* device_name; int * net_dev; struct led_classdev* led_cdev; int work; int lock; } ;
struct led_classdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct led_netdev_data*) ;
 struct led_netdev_data* FUNC_3 (int,int ) ;
 int FUNC_4 (struct led_classdev*,struct led_netdev_data*) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct led_classdev *VAR_4)
{
 struct led_netdev_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof(struct led_netdev_data), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_7(&VAR_5->lock);

 VAR_5->notifier.notifier_call = VAR_2;
 VAR_5->notifier.priority = 10;

 FUNC_0(&VAR_5->work, VAR_3);

 VAR_5->led_cdev = VAR_4;
 VAR_5->net_dev = ((void*)0);
 VAR_5->device_name[0] = 0;

 VAR_5->mode = 0;
 FUNC_1(&VAR_5->interval, FUNC_5(50));
 VAR_5->last_activity = 0;

 FUNC_4(VAR_4, VAR_5);

 VAR_6 = FUNC_6(&VAR_5->notifier);
 if (VAR_6)
  FUNC_2(VAR_5);

 return VAR_6;
}
