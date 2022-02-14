
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_netdev_data {scalar_t__ net_dev; int work; int notifier; } ;
struct led_classdev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct led_netdev_data*) ;
 struct led_netdev_data* FUNC_3 (struct led_classdev*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct led_classdev *VAR_0)
{
 struct led_netdev_data *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(&VAR_1->notifier);

 FUNC_0(&VAR_1->work);

 if (VAR_1->net_dev)
  FUNC_1(VAR_1->net_dev);

 FUNC_2(VAR_1);
}
