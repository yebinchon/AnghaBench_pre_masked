
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct gpio_chip {int dummy; } ;
struct gen_74x164_chip {int registers; size_t* buffer; int lock; } ;


 struct gen_74x164_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct gen_74x164_chip *VAR_2 = FUNC_0(VAR_0);
 u8 VAR_3 = VAR_2->registers - 1 - VAR_1 / 8;
 u8 VAR_4 = VAR_1 % 8;
 int VAR_5;

 FUNC_1(&VAR_2->lock);
 VAR_5 = (VAR_2->buffer[VAR_3] >> VAR_4) & 0x1;
 FUNC_2(&VAR_2->lock);

 return VAR_5;
}
