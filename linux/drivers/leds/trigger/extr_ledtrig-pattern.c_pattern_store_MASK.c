
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct led_classdev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct led_classdev*,char const*,int *,size_t,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct led_classdev *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_4, VAR_2, ((void*)0), VAR_3, 0);
}
