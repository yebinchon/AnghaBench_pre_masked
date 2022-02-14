
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct thunderx_gpio {int lock; scalar_t__ register_base; int od_mask; int invert_mask; TYPE_1__* line_entries; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_2__ {int fil_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 struct thunderx_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct thunderx_gpio*,unsigned int) ;
 int FUNC_6 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct gpio_chip *VAR_4, unsigned int VAR_5,
     int VAR_6)
{
 struct thunderx_gpio *VAR_7 = FUNC_1(VAR_4);
 u64 VAR_8 = VAR_7->line_entries[VAR_5].fil_bits | VAR_3;

 if (!FUNC_5(VAR_7, VAR_5))
  return -VAR_0;

 FUNC_2(&VAR_7->lock);

 FUNC_6(VAR_4, VAR_5, VAR_6);

 if (FUNC_4(VAR_5, VAR_7->invert_mask))
  VAR_8 |= VAR_1;

 if (FUNC_4(VAR_5, VAR_7->od_mask))
  VAR_8 |= VAR_2;

 FUNC_7(VAR_8, VAR_7->register_base + FUNC_0(VAR_5));

 FUNC_3(&VAR_7->lock);
 return 0;
}
