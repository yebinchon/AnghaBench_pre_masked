
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct spear_spics {unsigned int last_off; unsigned int cs_enable_mask; unsigned int cs_enable_shift; int cs_value_bit; scalar_t__ perip_cfg; scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 struct spear_spics* FUNC_0 (struct gpio_chip*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct spear_spics *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4;


 VAR_4 = FUNC_1(VAR_3->base + VAR_3->perip_cfg);
 if (VAR_3->last_off != VAR_1) {
  VAR_3->last_off = VAR_1;
  VAR_4 &= ~(VAR_3->cs_enable_mask << VAR_3->cs_enable_shift);
  VAR_4 |= VAR_1 << VAR_3->cs_enable_shift;
 }


 VAR_4 &= ~(0x1 << VAR_3->cs_value_bit);
 VAR_4 |= VAR_2 << VAR_3->cs_value_bit;
 FUNC_2(VAR_4, VAR_3->base + VAR_3->perip_cfg);
}
