
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_netdev_data {int interval; int work; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 struct led_netdev_data* FUNC_3 (struct device*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct led_netdev_data*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
         struct device_attribute *VAR_1, const char *VAR_2,
         size_t VAR_3)
{
 struct led_netdev_data *VAR_4 = FUNC_3(VAR_0);
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;


 if (VAR_5 >= 5 && VAR_5 <= 10000) {
  FUNC_1(&VAR_4->work);

  FUNC_0(&VAR_4->interval, FUNC_4(VAR_5));
  FUNC_5(VAR_4);
 }

 return VAR_3;
}
