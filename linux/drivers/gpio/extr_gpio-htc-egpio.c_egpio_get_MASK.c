
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {scalar_t__ base; } ;
struct egpio_info {int bus_shift; int base_addr; } ;
struct egpio_chip {int reg_start; int cached_values; int is_out; int dev; } ;


 struct egpio_info* FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct egpio_info*,unsigned int) ;
 int FUNC_2 (struct egpio_info*,unsigned int) ;
 int FUNC_3 (struct egpio_info*,int) ;
 struct egpio_chip* FUNC_4 (struct gpio_chip*) ;
 int FUNC_5 (char*,int ,...) ;
 scalar_t__ FUNC_6 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 struct egpio_chip *VAR_2;
 struct egpio_info *VAR_3;
 unsigned VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_5("egpio_get_value(%d)\n", VAR_0->base + VAR_1);

 VAR_2 = FUNC_4(VAR_0);
 VAR_3 = FUNC_0(VAR_2->dev);
 VAR_4 = FUNC_1(VAR_3, VAR_1);
 VAR_5 = VAR_2->reg_start + FUNC_2(VAR_3, VAR_1);

 if (FUNC_6(VAR_1, &VAR_2->is_out)) {
  return !!(VAR_2->cached_values & (1 << VAR_1));
 } else {
  VAR_6 = FUNC_3(VAR_3, VAR_5);
  FUNC_5("readw(%p + %x) = %x\n",
    VAR_3->base_addr, VAR_5 << VAR_3->bus_shift, VAR_6);
  return !!(VAR_6 & VAR_4);
 }
}
