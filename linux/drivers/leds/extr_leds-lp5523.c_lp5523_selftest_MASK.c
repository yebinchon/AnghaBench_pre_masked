
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct lp55xx_platform_data {scalar_t__ clock_mode; TYPE_1__* led_config; } ;
struct lp55xx_led {int led_current; struct lp55xx_chip* chip; } ;
struct lp55xx_chip {int lock; struct lp55xx_platform_data* pdata; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int led_current; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 struct lp55xx_led* FUNC_0 (int ) ;
 int FUNC_1 (struct lp55xx_chip*,int ,scalar_t__*) ;
 int FUNC_2 (struct lp55xx_chip*,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_11,
          struct device_attribute *VAR_12,
          char *VAR_13)
{
 struct lp55xx_led *VAR_14 = FUNC_0(FUNC_6(VAR_11));
 struct lp55xx_chip *VAR_15 = VAR_14->chip;
 struct lp55xx_platform_data *VAR_16 = VAR_15->pdata;
 int VAR_17, VAR_18, VAR_19 = 0;
 u8 VAR_20, VAR_21, VAR_22;

 FUNC_3(&VAR_15->lock);

 VAR_18 = FUNC_1(VAR_15, VAR_9, &VAR_20);
 if (VAR_18 < 0)
  goto fail;


 if (VAR_16->clock_mode == VAR_10) {
  if ((VAR_20 & VAR_2) == 0)
   goto fail;
 }


 FUNC_2(VAR_15, VAR_8, VAR_1 | 16);
 FUNC_7(3000, 6000);
 VAR_18 = FUNC_1(VAR_15, VAR_9, &VAR_20);
 if (VAR_18 < 0)
  goto fail;

 if (!(VAR_20 & VAR_3))
  FUNC_7(3000, 6000);

 VAR_18 = FUNC_1(VAR_15, VAR_7, &VAR_22);
 if (VAR_18 < 0)
  goto fail;

 VAR_22--;

 for (VAR_17 = 0; VAR_17 < VAR_4; VAR_17++) {

  if (VAR_16->led_config[VAR_17].led_current == 0)
   continue;


  FUNC_2(VAR_15, VAR_5 + VAR_17,
   VAR_16->led_config[VAR_17].led_current);

  FUNC_2(VAR_15, VAR_6 + VAR_17, 0xff);

  FUNC_7(2000, 4000);
  FUNC_2(VAR_15, VAR_8,
        VAR_1 | VAR_17);

  FUNC_7(3000, 6000);
  VAR_18 = FUNC_1(VAR_15, VAR_9, &VAR_20);
  if (VAR_18 < 0)
   goto fail;

  if (!(VAR_20 & VAR_3))
   FUNC_7(3000, 6000);

  VAR_18 = FUNC_1(VAR_15, VAR_7, &VAR_21);
  if (VAR_18 < 0)
   goto fail;

  if (VAR_21 >= VAR_22 || VAR_21 < VAR_0)
   VAR_19 += FUNC_5(VAR_13 + VAR_19, "LED %d FAIL\n", VAR_17);

  FUNC_2(VAR_15, VAR_6 + VAR_17, 0x00);


  FUNC_2(VAR_15, VAR_5 + VAR_17,
   VAR_14->led_current);
  VAR_14++;
 }
 if (VAR_19 == 0)
  VAR_19 = FUNC_5(VAR_13, "OK\n");
 goto release_lock;
fail:
 VAR_19 = FUNC_5(VAR_13, "FAIL\n");

release_lock:
 FUNC_4(&VAR_15->lock);

 return VAR_19;
}
