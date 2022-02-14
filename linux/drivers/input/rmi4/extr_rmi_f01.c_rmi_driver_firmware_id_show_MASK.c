
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rmi_driver_data {TYPE_1__* f01_container; } ;
struct TYPE_4__ {int firmware_id; } ;
struct f01_data {TYPE_2__ properties; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 void* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct rmi_driver_data *VAR_4 = FUNC_0(VAR_1);
 struct f01_data *VAR_5 = FUNC_0(&VAR_4->f01_container->dev);

 return FUNC_1(VAR_3, VAR_0, "%d\n", VAR_5->properties.firmware_id);
}
