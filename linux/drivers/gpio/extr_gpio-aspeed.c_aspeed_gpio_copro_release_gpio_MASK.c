
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_desc {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct aspeed_gpio_bank {int dummy; } ;
struct TYPE_2__ {int ngpio; } ;
struct aspeed_gpio {scalar_t__* cf_copro_bankmap; int lock; TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct aspeed_gpio*,struct aspeed_gpio_bank const*,int,int ) ;
 int FUNC_1 (struct gpio_desc*) ;
 struct aspeed_gpio* FUNC_2 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_3 (struct gpio_desc*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct aspeed_gpio_bank* FUNC_6 (int) ;

int FUNC_7(struct gpio_desc *VAR_4)
{
 struct gpio_chip *VAR_5 = FUNC_3(VAR_4);
 struct aspeed_gpio *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = 0, VAR_8, VAR_9 = FUNC_1(VAR_4);
 const struct aspeed_gpio_bank *VAR_10 = FUNC_6(VAR_9);
 unsigned long VAR_11;

 if (!VAR_6->cf_copro_bankmap)
  return -VAR_2;

 if (VAR_9 < 0 || VAR_9 > VAR_6->chip.ngpio)
  return -VAR_0;
 VAR_8 = VAR_9 >> 3;

 FUNC_4(&VAR_6->lock, VAR_11);


 if (VAR_6->cf_copro_bankmap[VAR_8] == 0) {
  VAR_7 = -VAR_1;
  goto bail;
 }
 VAR_6->cf_copro_bankmap[VAR_8]--;


 if (VAR_6->cf_copro_bankmap[VAR_8] == 0)
  FUNC_0(VAR_6, VAR_10, VAR_8,
           VAR_3);
 bail:
 FUNC_5(&VAR_6->lock, VAR_11);
 return VAR_7;
}
