
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* platform_data; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_7__ {int ac_timer; TYPE_3__* dev; TYPE_1__* machinfo; int chrg_full_timer; scalar_t__ flags; int charge_mode; } ;
struct TYPE_6__ {scalar_t__ gpio_batfull; scalar_t__ batfull_irq; scalar_t__ gpio_fatal; scalar_t__ gpio_batlock; scalar_t__ gpio_acin; int (* init ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,char*,int) ;
 int FUNC_1 (TYPE_3__*,char*,int) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int,int ,int,char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;
 int VAR_16 ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_17)
{
 int VAR_18, VAR_19;

 if (!VAR_17->dev.platform_data)
  return -VAR_1;

 VAR_15.dev = &VAR_17->dev;
 VAR_15.machinfo = VAR_17->dev.platform_data;
 VAR_15.charge_mode = VAR_0;
 VAR_15.flags = 0;

 FUNC_12(&VAR_15.ac_timer, VAR_9, 0);

 FUNC_12(&VAR_15.chrg_full_timer, VAR_13, 0);

 FUNC_6("sharpsl-charge", &VAR_11);

 VAR_15.machinfo->init();

 FUNC_4(VAR_15.machinfo->gpio_acin, "AC IN");
 FUNC_3(VAR_15.machinfo->gpio_acin);
 FUNC_4(VAR_15.machinfo->gpio_batfull, "Battery Full");
 FUNC_3(VAR_15.machinfo->gpio_batfull);
 FUNC_4(VAR_15.machinfo->gpio_batlock, "Battery Lock");
 FUNC_3(VAR_15.machinfo->gpio_batlock);


 VAR_19 = FUNC_5(VAR_15.machinfo->gpio_acin);
 if (FUNC_9(VAR_19, VAR_8, VAR_3 | VAR_2, "AC Input Detect", VAR_8)) {
  FUNC_0(VAR_15.dev, "Could not get irq %d.\n", VAR_19);
 }

 VAR_19 = FUNC_5(VAR_15.machinfo->gpio_batlock);
 if (FUNC_9(VAR_19, VAR_14, VAR_2, "Battery Cover", VAR_14)) {
  FUNC_0(VAR_15.dev, "Could not get irq %d.\n", VAR_19);
 }

 if (VAR_15.machinfo->gpio_fatal) {
  VAR_19 = FUNC_5(VAR_15.machinfo->gpio_fatal);
  if (FUNC_9(VAR_19, VAR_14, VAR_2, "Fatal Battery", VAR_14)) {
   FUNC_0(VAR_15.dev, "Could not get irq %d.\n", VAR_19);
  }
 }

 if (VAR_15.machinfo->batfull_irq) {

  VAR_19 = FUNC_5(VAR_15.machinfo->gpio_batfull);
  if (FUNC_9(VAR_19, VAR_12, VAR_3, "CO", VAR_12)) {
   FUNC_0(VAR_15.dev, "Could not get irq %d.\n", VAR_19);
  }
 }

 VAR_18 = FUNC_2(&VAR_17->dev, &VAR_5);
 VAR_18 |= FUNC_2(&VAR_17->dev, &VAR_6);
 if (VAR_18 != 0)
  FUNC_1(&VAR_17->dev, "Failed to register attributes (%d)\n", VAR_18);

 VAR_4 = VAR_10;





 FUNC_7(&VAR_15.ac_timer, VAR_7 + FUNC_8(250));

 return 0;
}
