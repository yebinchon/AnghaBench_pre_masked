
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (struct led_classdev*,int ,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 int VAR_5;
 struct led_classdev *VAR_6 = FUNC_0(VAR_1);
 unsigned long VAR_7;

 VAR_5 = FUNC_1(VAR_3, 10, &VAR_7);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_6, VAR_0, VAR_7);

 return VAR_4;
}
