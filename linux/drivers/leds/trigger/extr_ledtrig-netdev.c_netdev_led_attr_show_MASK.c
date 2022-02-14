
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_netdev_data {int mode; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum netdev_led_attr { ____Placeholder_netdev_led_attr } netdev_led_attr ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct led_netdev_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4, char *VAR_5,
 enum netdev_led_attr VAR_6)
{
 struct led_netdev_data *VAR_7 = FUNC_0(VAR_4);
 int VAR_8;

 switch (VAR_6) {
 case 130:
  VAR_8 = VAR_1;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 case 129:
  VAR_8 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_5, "%u\n", FUNC_2(VAR_8, &VAR_7->mode));
}
