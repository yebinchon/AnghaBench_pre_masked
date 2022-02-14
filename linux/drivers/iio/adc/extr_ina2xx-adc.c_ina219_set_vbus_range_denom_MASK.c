
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {int range_vbus; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct ina2xx_chip_info *VAR_2,
           unsigned int VAR_3,
           unsigned int *VAR_4)
{
 if (VAR_3 == 1)
  VAR_2->range_vbus = 32;
 else if (VAR_3 == 2)
  VAR_2->range_vbus = 16;
 else
  return -VAR_0;

 *VAR_4 &= ~VAR_1;
 *VAR_4 |= FUNC_0(VAR_3 == 1 ? 1 : 0) & VAR_1;

 return 0;
}
