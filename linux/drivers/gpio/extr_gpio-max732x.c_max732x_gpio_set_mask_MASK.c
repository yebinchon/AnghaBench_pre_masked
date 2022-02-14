
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct max732x_chip {int* reg_out; int lock; } ;
struct gpio_chip {int dummy; } ;


 struct max732x_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct max732x_chip*,unsigned int) ;
 int FUNC_2 (struct max732x_chip*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2,
      int VAR_3)
{
 struct max732x_chip *VAR_4 = FUNC_0(VAR_0);
 uint8_t VAR_5;
 int VAR_6;

 FUNC_3(&VAR_4->lock);

 VAR_5 = (VAR_1 > 7) ? VAR_4->reg_out[1] : VAR_4->reg_out[0];
 VAR_5 = (VAR_5 & ~VAR_2) | (VAR_3 & VAR_2);

 VAR_6 = FUNC_2(VAR_4, FUNC_1(VAR_4, VAR_1), VAR_5);
 if (VAR_6 < 0)
  goto out;


 if (VAR_1 > 7)
  VAR_4->reg_out[1] = VAR_5;
 else
  VAR_4->reg_out[0] = VAR_5;
out:
 FUNC_4(&VAR_4->lock);
}
