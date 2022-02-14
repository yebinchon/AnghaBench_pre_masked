
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef long long ssize_t ;


 int VAR_0 ;
 long long FUNC_0 (struct device*,int ) ;
 long long FUNC_1 (char*,int ,char*,long long) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_2(VAR_2);
 long long VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_4->index);
 if (VAR_5 < 0)
  return VAR_5;
 return FUNC_1(VAR_3, VAR_0, "%lld\n", VAR_5);
}
