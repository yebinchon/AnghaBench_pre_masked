
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int cmos; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct platform_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 VAR_5 = VAR_4->id;
 return FUNC_0(VAR_3, "%X\n", VAR_0->cmos);
}
