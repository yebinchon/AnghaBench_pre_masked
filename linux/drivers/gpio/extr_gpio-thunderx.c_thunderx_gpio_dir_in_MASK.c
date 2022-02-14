
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thunderx_gpio {int lock; scalar_t__ register_base; TYPE_1__* line_entries; int od_mask; int invert_mask; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int fil_bits; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 struct thunderx_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct thunderx_gpio*,unsigned int) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct thunderx_gpio *VAR_3 = FUNC_2(VAR_1);

 if (!FUNC_5(VAR_3, VAR_2))
  return -VAR_0;

 FUNC_3(&VAR_3->lock);
 FUNC_1(VAR_2, VAR_3->invert_mask);
 FUNC_1(VAR_2, VAR_3->od_mask);
 FUNC_6(VAR_3->line_entries[VAR_2].fil_bits,
        VAR_3->register_base + FUNC_0(VAR_2));
 FUNC_4(&VAR_3->lock);
 return 0;
}
