
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct gpio_chip {int dummy; } ;
struct gen_74x164_chip {int registers; int* buffer; int lock; } ;


 int FUNC_0 (struct gen_74x164_chip*) ;
 struct gen_74x164_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0,
  unsigned VAR_1, int VAR_2)
{
 struct gen_74x164_chip *VAR_3 = FUNC_1(VAR_0);
 u8 VAR_4 = VAR_3->registers - 1 - VAR_1 / 8;
 u8 VAR_5 = VAR_1 % 8;

 FUNC_2(&VAR_3->lock);
 if (VAR_2)
  VAR_3->buffer[VAR_4] |= (1 << VAR_5);
 else
  VAR_3->buffer[VAR_4] &= ~(1 << VAR_5);

 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->lock);
}
