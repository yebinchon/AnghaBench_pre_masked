
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct gpio_desc {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct aspeed_gpio_bank {int rdata_reg; int val_regs; } ;
struct TYPE_2__ {int ngpio; } ;
struct aspeed_gpio {int* cf_copro_bankmap; int lock; TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct aspeed_gpio*,struct aspeed_gpio_bank const*,int,int ) ;
 int FUNC_2 (struct gpio_desc*) ;
 struct aspeed_gpio* FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_4 (struct gpio_desc*) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct aspeed_gpio_bank* FUNC_8 (int) ;

int FUNC_9(struct gpio_desc *VAR_5,
    u16 *VAR_6, u16 *VAR_7, u8 *VAR_8)
{
 struct gpio_chip *VAR_9 = FUNC_4(VAR_5);
 struct aspeed_gpio *VAR_10 = FUNC_3(VAR_9);
 int VAR_11 = 0, VAR_12, VAR_13 = FUNC_2(VAR_5);
 const struct aspeed_gpio_bank *VAR_14 = FUNC_8(VAR_13);
 unsigned long VAR_15;

 if (!VAR_10->cf_copro_bankmap)
  VAR_10->cf_copro_bankmap = FUNC_5(VAR_10->chip.ngpio >> 3, VAR_3);
 if (!VAR_10->cf_copro_bankmap)
  return -VAR_2;
 if (VAR_13 < 0 || VAR_13 > VAR_10->chip.ngpio)
  return -VAR_0;
 VAR_12 = VAR_13 >> 3;

 FUNC_6(&VAR_10->lock, VAR_15);


 if (VAR_10->cf_copro_bankmap[VAR_12] == 0xff) {
  VAR_11 = -VAR_1;
  goto bail;
 }
 VAR_10->cf_copro_bankmap[VAR_12]++;


 if (VAR_10->cf_copro_bankmap[VAR_12] == 1)
  FUNC_1(VAR_10, VAR_14, VAR_12,
           VAR_4);

 if (VAR_6)
  *VAR_6 = VAR_14->val_regs;
 if (VAR_7)
  *VAR_7 = VAR_14->rdata_reg;
 if (VAR_8)
  *VAR_8 = FUNC_0(VAR_13);
 bail:
 FUNC_7(&VAR_10->lock, VAR_15);
 return VAR_11;
}
