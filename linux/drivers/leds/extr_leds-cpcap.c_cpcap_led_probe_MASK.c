
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct TYPE_11__ {int brightness_set_blocking; int max_brightness; int name; } ;
struct cpcap_led {TYPE_2__* dev; TYPE_5__ led; TYPE_1__* info; int update_lock; int regmap; int vdd; } ;
struct TYPE_9__ {int reg; int limit; int init_val; scalar_t__ init_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_2__*,char*,int *) ;
 struct cpcap_led* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (int *) ;
 struct of_device_id* FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct platform_device*,struct cpcap_led*) ;
 int FUNC_12 (int ,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_6)
{
 const struct of_device_id *VAR_7;
 struct cpcap_led *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_9(FUNC_10(VAR_4), &VAR_6->dev);
 if (!VAR_7 || !VAR_7->data)
  return -VAR_0;

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;
 FUNC_11(VAR_6, VAR_8);
 VAR_8->info = VAR_7->data;
 VAR_8->dev = &VAR_6->dev;

 if (VAR_8->info->reg == 0x0000) {
  FUNC_2(VAR_8->dev, "Unsupported LED");
  return -VAR_1;
 }

 VAR_8->regmap = FUNC_3(VAR_6->dev.parent, ((void*)0));
 if (!VAR_8->regmap)
  return -VAR_1;

 VAR_8->vdd = FUNC_7(&VAR_6->dev, "vdd");
 if (FUNC_0(VAR_8->vdd)) {
  VAR_9 = FUNC_1(VAR_8->vdd);
  FUNC_2(VAR_8->dev, "Couldn't get regulator: %d", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_4(&VAR_6->dev, "label", &VAR_8->led.name);
 if (VAR_9) {
  FUNC_2(VAR_8->dev, "Couldn't read LED label: %d", VAR_9);
  return VAR_9;
 }

 if (VAR_8->info->init_mask) {
  VAR_9 = FUNC_12(VAR_8->regmap, VAR_8->info->reg,
   VAR_8->info->init_mask, VAR_8->info->init_val);
  if (VAR_9) {
   FUNC_2(VAR_8->dev, "regmap failed: %d", VAR_9);
   return VAR_9;
  }
 }

 FUNC_8(&VAR_8->update_lock);

 VAR_8->led.max_brightness = VAR_8->info->limit;
 VAR_8->led.brightness_set_blocking = VAR_5;
 VAR_9 = FUNC_6(&VAR_6->dev, &VAR_8->led);
 if (VAR_9) {
  FUNC_2(VAR_8->dev, "Couldn't register LED: %d", VAR_9);
  return VAR_9;
 }

 return 0;
}
