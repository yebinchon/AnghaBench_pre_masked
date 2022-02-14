
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gpio_chip {int dummy; } ;
struct creg_layout {int* on; int* off; int* shift; int* bit_per_gpio; } ;
struct creg_gpio {int lock; int regs; struct creg_layout* layout; } ;


 int FUNC_0 (int,int ) ;
 struct creg_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct gpio_chip *VAR_0, unsigned int VAR_1, int VAR_2)
{
 struct creg_gpio *VAR_3 = FUNC_1(VAR_0);
 const struct creg_layout *VAR_4 = VAR_3->layout;
 u32 VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 VAR_7 = VAR_2 ? VAR_3->layout->on[VAR_1] : VAR_3->layout->off[VAR_1];

 VAR_6 = VAR_4->shift[VAR_1];
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  VAR_6 += VAR_4->bit_per_gpio[VAR_9] + VAR_4->shift[VAR_9];

 FUNC_3(&VAR_3->lock, VAR_8);
 VAR_5 = FUNC_2(VAR_3->regs);
 VAR_5 &= ~(FUNC_0(VAR_4->bit_per_gpio[VAR_9] - 1, 0) << VAR_6);
 VAR_5 |= (VAR_7 << VAR_6);
 FUNC_5(VAR_5, VAR_3->regs);
 FUNC_4(&VAR_3->lock, VAR_8);
}
