
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_netdev_data {char* device_name; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct led_netdev_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct led_netdev_data *VAR_3 = FUNC_0(VAR_0);
 ssize_t VAR_4;

 FUNC_1(&VAR_3->lock);
 VAR_4 = FUNC_3(VAR_2, "%s\n", VAR_3->device_name);
 FUNC_2(&VAR_3->lock);

 return VAR_4;
}
