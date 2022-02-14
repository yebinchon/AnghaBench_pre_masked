
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; } ;
struct msm_vibrator {int enabled; TYPE_2__* input; int worker; int mutex; int base; int clk; int enable_gpio; int vcc; } ;
struct TYPE_7__ {int bustype; } ;
struct TYPE_8__ {char* name; int close; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ) ;
 TYPE_2__* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;
 struct msm_vibrator* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (TYPE_2__*,int *,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 int FUNC_13 (TYPE_2__*,struct msm_vibrator*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (int *) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct msm_vibrator*) ;
 int FUNC_17 (struct resource*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_12)
{
 struct msm_vibrator *VAR_13;
 struct resource *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_8(&VAR_12->dev, sizeof(*VAR_13), VAR_6);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->input = FUNC_6(&VAR_12->dev);
 if (!VAR_13->input)
  return -VAR_2;

 VAR_13->vcc = FUNC_9(&VAR_12->dev, "vcc");
 if (FUNC_1(VAR_13->vcc)) {
  if (FUNC_2(VAR_13->vcc) != -VAR_3)
   FUNC_3(&VAR_12->dev, "Failed to get regulator: %ld\n",
    FUNC_2(VAR_13->vcc));
  return FUNC_2(VAR_13->vcc);
 }

 VAR_13->enable_gpio = FUNC_5(&VAR_12->dev, "enable",
            VAR_7);
 if (FUNC_1(VAR_13->enable_gpio)) {
  if (FUNC_2(VAR_13->enable_gpio) != -VAR_3)
   FUNC_3(&VAR_12->dev, "Failed to get enable gpio: %ld\n",
    FUNC_2(VAR_13->enable_gpio));
  return FUNC_2(VAR_13->enable_gpio);
 }

 VAR_13->clk = FUNC_4(&VAR_12->dev, "pwm");
 if (FUNC_1(VAR_13->clk)) {
  if (FUNC_2(VAR_13->clk) != -VAR_3)
   FUNC_3(&VAR_12->dev, "Failed to lookup pwm clock: %ld\n",
    FUNC_2(VAR_13->clk));
  return FUNC_2(VAR_13->clk);
 }

 VAR_14 = FUNC_15(VAR_12, VAR_8, 0);
 if (!VAR_14) {
  FUNC_3(&VAR_12->dev, "Failed to get platform resource\n");
  return -VAR_1;
 }

 VAR_13->base = FUNC_7(&VAR_12->dev, VAR_14->start,
         FUNC_17(VAR_14));
 if (!VAR_13->base) {
  FUNC_3(&VAR_12->dev, "Failed to iomap resource.\n");
  return -VAR_2;
 }

 VAR_13->enabled = 0;
 FUNC_14(&VAR_13->mutex);
 FUNC_0(&VAR_13->worker, VAR_11);

 VAR_13->input->name = "msm-vibrator";
 VAR_13->input->id.bustype = VAR_0;
 VAR_13->input->close = VAR_9;

 FUNC_13(VAR_13->input, VAR_13);
 FUNC_12(VAR_13->input, VAR_4, VAR_5);

 VAR_15 = FUNC_10(VAR_13->input, ((void*)0),
          VAR_10);
 if (VAR_15) {
  FUNC_3(&VAR_12->dev, "Failed to create ff memless: %d", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_11(VAR_13->input);
 if (VAR_15) {
  FUNC_3(&VAR_12->dev, "Failed to register input device: %d", VAR_15);
  return VAR_15;
 }

 FUNC_16(VAR_12, VAR_13);

 return 0;
}
