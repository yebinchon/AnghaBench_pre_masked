
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 struct sensor_device_attribute* FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
        struct device_attribute *VAR_3, char *VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_1(VAR_3);

 return FUNC_0(VAR_4, VAR_0, "%s\n",
   VAR_1[VAR_5->index]);
}
