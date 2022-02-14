
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {int allow_async_readout; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 struct ina2xx_chip_info* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct ina2xx_chip_info *VAR_3 = FUNC_1(FUNC_0(VAR_0));

 return FUNC_2(VAR_2, "%d\n", VAR_3->allow_async_readout);
}
