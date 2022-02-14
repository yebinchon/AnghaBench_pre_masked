
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thunderx_line {int fil_bits; int line; } ;
struct thunderx_gpio {int lock; scalar_t__ register_base; int od_mask; int invert_mask; struct thunderx_line* line_entries; } ;
struct irq_data {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct thunderx_gpio* FUNC_2 (struct gpio_chip*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct gpio_chip* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*,int ) ;
 int FUNC_5 (struct irq_data*,unsigned int) ;
 size_t FUNC_6 (struct irq_data*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct irq_data *VAR_9,
          unsigned int VAR_10)
{
 struct gpio_chip *VAR_11 = FUNC_3(VAR_9);
 struct thunderx_gpio *VAR_12 = FUNC_2(VAR_11);
 struct thunderx_line *VAR_13 =
  &VAR_12->line_entries[FUNC_6(VAR_9)];
 u64 VAR_14;

 FUNC_5(VAR_9, VAR_10);

 VAR_14 = VAR_13->fil_bits | VAR_0;

 if (VAR_10 & VAR_4) {
  FUNC_4(VAR_9, VAR_7);
  VAR_14 |= VAR_1;
 } else {
  FUNC_4(VAR_9, VAR_8);
 }

 FUNC_7(&VAR_12->lock);
 if (VAR_10 & (VAR_5 | VAR_6)) {
  VAR_14 |= VAR_2;
  FUNC_9(VAR_13->line, VAR_12->invert_mask);
 } else {
  FUNC_1(VAR_13->line, VAR_12->invert_mask);
 }
 FUNC_1(VAR_13->line, VAR_12->od_mask);
 FUNC_10(VAR_14, VAR_12->register_base + FUNC_0(VAR_13->line));
 FUNC_8(&VAR_12->lock);

 return VAR_3;
}
