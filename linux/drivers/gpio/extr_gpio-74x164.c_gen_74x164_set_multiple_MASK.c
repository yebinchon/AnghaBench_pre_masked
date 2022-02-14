
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct gpio_chip {int dummy; } ;
struct gen_74x164_chip {int registers; size_t* buffer; int lock; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct gen_74x164_chip*) ;
 struct gen_74x164_chip* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_1, unsigned long *VAR_2,
        unsigned long *VAR_3)
{
 struct gen_74x164_chip *VAR_4 = FUNC_1(VAR_1);
 unsigned int VAR_5, VAR_6, VAR_7;
 u8 VAR_8, VAR_9;

 FUNC_2(&VAR_4->lock);
 for (VAR_5 = 0, VAR_8 = VAR_4->registers - 1; VAR_5 < VAR_4->registers;
      VAR_5++, VAR_8--) {
  VAR_6 = VAR_5 / sizeof(*VAR_2);
  VAR_7 = VAR_5 % sizeof(*VAR_2) * VAR_0;
  VAR_9 = VAR_2[VAR_6] >> VAR_7;
  if (!VAR_9)
   continue;

  VAR_4->buffer[VAR_8] &= ~VAR_9;
  VAR_4->buffer[VAR_8] |= VAR_9 & (VAR_3[VAR_6] >> VAR_7);
 }
 FUNC_0(VAR_4);
 FUNC_3(&VAR_4->lock);
}
