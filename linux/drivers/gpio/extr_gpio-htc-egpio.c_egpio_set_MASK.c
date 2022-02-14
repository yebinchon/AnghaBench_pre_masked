
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {scalar_t__ base; int label; } ;
struct egpio_info {int reg_shift; int reg_mask; int lock; } ;
struct egpio_chip {int reg_start; int cached_values; int dev; } ;


 struct egpio_info* FUNC_0 (int ) ;
 int FUNC_1 (struct egpio_info*,unsigned int) ;
 int FUNC_2 (int,struct egpio_info*,int) ;
 struct egpio_chip* FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (char*,char*,int,int,...) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 struct egpio_chip *VAR_4;
 struct egpio_info *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_4("egpio_set(%s, %d(%d), %d)\n",
   VAR_0->label, VAR_1, VAR_1+VAR_0->base, VAR_2);

 VAR_4 = FUNC_3(VAR_0);
 VAR_5 = FUNC_0(VAR_4->dev);
 VAR_6 = FUNC_1(VAR_5, VAR_1);
 VAR_7 = VAR_4->reg_start + VAR_6;
 VAR_8 = VAR_6 << VAR_5->reg_shift;

 FUNC_4("egpio %s: reg %d = 0x%04x\n", VAR_2 ? "set" : "clear",
   VAR_7, (VAR_4->cached_values >> VAR_8) & VAR_5->reg_mask);

 FUNC_5(&VAR_5->lock, VAR_3);
 if (VAR_2)
  VAR_4->cached_values |= (1 << VAR_1);
 else
  VAR_4->cached_values &= ~(1 << VAR_1);
 FUNC_2((VAR_4->cached_values >> VAR_8) & VAR_5->reg_mask, VAR_5, VAR_7);
 FUNC_6(&VAR_5->lock, VAR_3);
}
