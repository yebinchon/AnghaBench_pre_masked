
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sprd_pmic_eic {unsigned int offset; int map; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct sprd_pmic_eic* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,unsigned int,unsigned int*) ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2,
          unsigned int VAR_3,
          unsigned int VAR_4)
{
 struct sprd_pmic_eic *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = VAR_0 + FUNC_0(VAR_3) * 0x4;
 VAR_8 = FUNC_2(VAR_5->map, VAR_5->offset + VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7 &= ~VAR_1;
 VAR_7 |= (VAR_4 / 1000) & VAR_1;
 return FUNC_3(VAR_5->map, VAR_5->offset + VAR_6, VAR_7);
}
