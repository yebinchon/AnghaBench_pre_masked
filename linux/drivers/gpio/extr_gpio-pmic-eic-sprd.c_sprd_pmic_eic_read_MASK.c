
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct sprd_pmic_eic {scalar_t__ offset; int map; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 struct sprd_pmic_eic* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int ,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0, unsigned int VAR_1,
         u16 VAR_2)
{
 struct sprd_pmic_eic *VAR_3 = FUNC_2(VAR_0);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3->map, VAR_3->offset + VAR_2, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return !!(VAR_4 & FUNC_0(FUNC_1(VAR_1)));
}
