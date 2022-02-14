
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {unsigned int shunt_resistor_uohm; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ina2xx_chip_info *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 == 0 || VAR_3 > VAR_1)
  return -VAR_0;

 VAR_2->shunt_resistor_uohm = VAR_3;

 return 0;
}
