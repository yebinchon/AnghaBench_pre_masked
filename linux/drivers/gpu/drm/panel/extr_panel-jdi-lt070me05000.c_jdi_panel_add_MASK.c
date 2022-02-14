
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct device* dev; int * funcs; } ;
struct jdi_panel {TYPE_1__ base; TYPE_2__* dsi; void* backlight; void* dcdc_en_gpio; void* reset_gpio; void* enable_gpio; TYPE_4__* supplies; int * mode; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int supply; } ;
struct TYPE_7__ {struct device dev; } ;


 unsigned int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_2 ;
 int FUNC_3 (struct device*,char*,int) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct device*,unsigned int,TYPE_4__*) ;
 int FUNC_6 (TYPE_1__*) ;
 void* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_9(struct jdi_panel *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dsi->dev;
 int VAR_7;
 unsigned int VAR_8;

 VAR_5->mode = &VAR_2;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->supplies); VAR_8++)
  VAR_5->supplies[VAR_8].supply = VAR_4[VAR_8];

 VAR_7 = FUNC_5(VAR_6, FUNC_0(VAR_5->supplies),
          VAR_5->supplies);
 if (VAR_7 < 0) {
  FUNC_3(VAR_6, "failed to init regulator, ret=%d\n", VAR_7);
  return VAR_7;
 }

 VAR_5->enable_gpio = FUNC_4(VAR_6, "enable", VAR_1);
 if (FUNC_1(VAR_5->enable_gpio)) {
  VAR_7 = FUNC_2(VAR_5->enable_gpio);
  FUNC_3(VAR_6, "cannot get enable-gpio %d\n", VAR_7);
  return VAR_7;
 }

 VAR_5->reset_gpio = FUNC_4(VAR_6, "reset", VAR_0);
 if (FUNC_1(VAR_5->reset_gpio)) {
  VAR_7 = FUNC_2(VAR_5->reset_gpio);
  FUNC_3(VAR_6, "cannot get reset-gpios %d\n", VAR_7);
  return VAR_7;
 }

 VAR_5->dcdc_en_gpio = FUNC_4(VAR_6, "dcdc-en", VAR_1);
 if (FUNC_1(VAR_5->dcdc_en_gpio)) {
  VAR_7 = FUNC_2(VAR_5->dcdc_en_gpio);
  FUNC_3(VAR_6, "cannot get dcdc-en-gpio %d\n", VAR_7);
  return VAR_7;
 }

 VAR_5->backlight = FUNC_7(VAR_5->dsi);
 if (FUNC_1(VAR_5->backlight)) {
  VAR_7 = FUNC_2(VAR_5->backlight);
  FUNC_3(VAR_6, "failed to register backlight %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_8(&VAR_5->base);
 VAR_5->base.funcs = &VAR_3;
 VAR_5->base.dev = &VAR_5->dsi->dev;

 VAR_7 = FUNC_6(&VAR_5->base);

 return VAR_7;
}
