
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina2xx_chip_info {unsigned int int_time_vbus; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int*,int*) ;

__attribute__((used)) static int FUNC_2(struct ina2xx_chip_info *VAR_1,
        unsigned int VAR_2, unsigned int *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6 = VAR_2;

 VAR_5 = FUNC_1(&VAR_6, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_1->int_time_vbus = VAR_6;

 *VAR_3 &= ~VAR_0;
 *VAR_3 |= FUNC_0(VAR_4) & VAR_0;

 return 0;
}
