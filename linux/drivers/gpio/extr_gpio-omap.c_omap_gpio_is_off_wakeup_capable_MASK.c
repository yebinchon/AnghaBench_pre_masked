
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_bank {int non_wakeup_gpios; } ;



__attribute__((used)) static bool FUNC_0(struct gpio_bank *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0->non_wakeup_gpios;

 if (VAR_2)
  return !!(~VAR_2 & VAR_1);

 return 0;
}
