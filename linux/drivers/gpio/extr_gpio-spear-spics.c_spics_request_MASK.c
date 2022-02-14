
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear_spics {int sw_enable_bit; int cs_value_bit; scalar_t__ perip_cfg; scalar_t__ base; int use_count; } ;
struct gpio_chip {int dummy; } ;


 struct spear_spics* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct spear_spics *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3;

 if (!VAR_2->use_count++) {
  VAR_3 = FUNC_1(VAR_2->base + VAR_2->perip_cfg);
  VAR_3 |= 0x1 << VAR_2->sw_enable_bit;
  VAR_3 |= 0x1 << VAR_2->cs_value_bit;
  FUNC_2(VAR_3, VAR_2->base + VAR_2->perip_cfg);
 }

 return 0;
}
