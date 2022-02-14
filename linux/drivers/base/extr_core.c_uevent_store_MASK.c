
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int kobj; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_0->kobj, VAR_2, VAR_3);

 if (VAR_4) {
  FUNC_0(VAR_0, "uevent: failed to send synthetic uevent\n");
  return VAR_4;
 }

 return VAR_3;
}
