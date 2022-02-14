
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max9611_dev {int shunt_resistor_uohm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 struct max9611_dev* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct max9611_dev *VAR_3 = FUNC_1(FUNC_0(VAR_0));
 unsigned int VAR_4, VAR_5;

 VAR_4 = VAR_3->shunt_resistor_uohm / 1000000;
 VAR_5 = VAR_3->shunt_resistor_uohm % 1000000;

 return FUNC_2(VAR_2, "%u.%06u\n", VAR_4, VAR_5);
}
