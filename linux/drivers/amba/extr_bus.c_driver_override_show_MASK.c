
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct amba_device {char* driver_override; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,char*) ;
 struct amba_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct amba_device *VAR_3 = FUNC_3(VAR_0);
 ssize_t VAR_4;

 FUNC_0(VAR_0);
 VAR_4 = FUNC_2(VAR_2, "%s\n", VAR_3->driver_override);
 FUNC_1(VAR_0);
 return VAR_4;
}
