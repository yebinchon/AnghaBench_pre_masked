
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_netdev_data {int interval; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct led_netdev_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct led_netdev_data *VAR_3 = FUNC_2(VAR_0);

 return FUNC_3(VAR_2, "%u\n",
         FUNC_1(FUNC_0(&VAR_3->interval)));
}
