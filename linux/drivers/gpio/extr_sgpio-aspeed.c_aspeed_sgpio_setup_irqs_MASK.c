
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct gpio_irq_chip {int* parents; int num_parents; struct aspeed_sgpio* parent_handler_data; int parent_handler; int default_type; int handler; int * chip; } ;
struct aspeed_sgpio_bank {int dummy; } ;
struct TYPE_2__ {struct gpio_irq_chip irq; } ;
struct aspeed_sgpio {int irq; TYPE_1__ chip; } ;


 int FUNC_0 (struct aspeed_sgpio_bank*) ;
 int VAR_0 ;
 struct aspeed_sgpio_bank* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct aspeed_sgpio*,struct aspeed_sgpio_bank const*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct platform_device*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_4(struct aspeed_sgpio *VAR_10,
       struct platform_device *VAR_11)
{
 int VAR_12, VAR_13;
 const struct aspeed_sgpio_bank *VAR_14;
 struct gpio_irq_chip *VAR_15;

 VAR_12 = FUNC_3(VAR_11, 0);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_10->irq = VAR_12;


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_1); VAR_13++) {
  VAR_14 = &VAR_1[VAR_13];

  FUNC_2(0x00000000, FUNC_1(VAR_10, VAR_14, VAR_5));

  FUNC_2(0xffffffff, FUNC_1(VAR_10, VAR_14, VAR_6));
 }

 VAR_15 = &VAR_10->chip.irq;
 VAR_15->chip = &VAR_3;
 VAR_15->handler = VAR_4;
 VAR_15->default_type = VAR_0;
 VAR_15->parent_handler = VAR_2;
 VAR_15->parent_handler_data = VAR_10;
 VAR_15->parents = &VAR_10->irq;
 VAR_15->num_parents = 1;


 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_1); VAR_13++) {
  VAR_14 = &VAR_1[VAR_13];

  FUNC_2(0x00000000, FUNC_1(VAR_10, VAR_14, VAR_7));

  FUNC_2(0x00000000, FUNC_1(VAR_10, VAR_14, VAR_8));

  FUNC_2(0xffffffff, FUNC_1(VAR_10, VAR_14, VAR_9));

  FUNC_2(0xffffffff, FUNC_1(VAR_10, VAR_14, VAR_5));
 }

 return 0;
}
