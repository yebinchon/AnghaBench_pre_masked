
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {int shunt_resistor_uohm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,int,int*) ;
 struct ina2xx_chip_info* FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct ina2xx_chip_info *VAR_4 = FUNC_2(FUNC_0(VAR_1));
 int VAR_5[2] = { VAR_4->shunt_resistor_uohm, 1000000 };

 return FUNC_1(VAR_3, VAR_0, 1, VAR_5);
}
