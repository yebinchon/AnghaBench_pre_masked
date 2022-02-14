
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* show_name ) (struct device*,struct device_attribute*,char*) ;} ;
struct abx500_temp {TYPE_1__ ops; } ;
typedef int ssize_t ;


 struct abx500_temp* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct device_attribute*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct abx500_temp *VAR_3 = FUNC_0(VAR_0);

 return VAR_3->ops.show_name(VAR_0, VAR_1, VAR_2);
}
