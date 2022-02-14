
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct idi_48_gpio {unsigned int* irq_mask; unsigned int cos_enb; int lock; scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 unsigned int FUNC_0 (unsigned int const) ;
 struct idi_48_gpio* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 unsigned int FUNC_3 (struct irq_data*) ;
 int FUNC_4 (unsigned int,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_2(VAR_0);
 struct idi_48_gpio *const VAR_2 = FUNC_1(VAR_1);
 const unsigned VAR_3 = FUNC_3(VAR_0);
 unsigned VAR_4;
 unsigned VAR_5;
 unsigned VAR_6;
 unsigned VAR_7;
 unsigned long VAR_8;

 for (VAR_4 = 0; VAR_4 < 48; VAR_4 += 8)
  if (VAR_3 < VAR_4 + 8) {
   VAR_5 = FUNC_0(VAR_3 - VAR_4);
   VAR_6 = VAR_4 / 8;
   VAR_7 = VAR_2->irq_mask[VAR_6];

   VAR_2->irq_mask[VAR_6] |= VAR_5;

   if (!VAR_7) {
    VAR_2->cos_enb |= FUNC_0(VAR_6);

    FUNC_5(&VAR_2->lock, VAR_8);

    FUNC_4(VAR_2->cos_enb, VAR_2->base + 7);

    FUNC_6(&VAR_2->lock,
                 VAR_8);
   }

   return;
  }
}
