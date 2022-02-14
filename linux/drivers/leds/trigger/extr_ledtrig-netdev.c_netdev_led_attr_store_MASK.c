
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_netdev_data {int mode; int work; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum netdev_led_attr { ____Placeholder_netdev_led_attr } netdev_led_attr ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 struct led_netdev_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct led_netdev_data*) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4, const char *VAR_5,
 size_t VAR_6, enum netdev_led_attr VAR_7)
{
 struct led_netdev_data *VAR_8 = FUNC_3(VAR_4);
 unsigned long VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_5, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 switch (VAR_7) {
 case 130:
  VAR_11 = VAR_1;
  break;
 case 128:
  VAR_11 = VAR_3;
  break;
 case 129:
  VAR_11 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(&VAR_8->work);

 if (VAR_9)
  FUNC_5(VAR_11, &VAR_8->mode);
 else
  FUNC_1(VAR_11, &VAR_8->mode);

 FUNC_4(VAR_8);

 return VAR_6;
}
