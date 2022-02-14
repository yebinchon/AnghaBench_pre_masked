
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_context {scalar_t__ irq; int reg_hdmi_en; TYPE_1__* regul_bulk; int hpd_gpio; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int supply; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,int ) ;
 int FUNC_6 (struct device*,int,TYPE_1__*) ;
 int FUNC_7 (struct device*,char*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct hdmi_context*) ;
 int FUNC_10 (struct hdmi_context*) ;
 int FUNC_11 (struct hdmi_context*,int) ;
 int FUNC_12 (int ) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_13(struct hdmi_context *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 int VAR_6, VAR_7;

 FUNC_1(VAR_5, "HDMI resource init\n");

 VAR_4->hpd_gpio = FUNC_5(VAR_5, "hpd", VAR_2);
 if (FUNC_3(VAR_4->hpd_gpio)) {
  FUNC_2(VAR_5, "cannot get hpd gpio property\n");
  return FUNC_4(VAR_4->hpd_gpio);
 }

 VAR_4->irq = FUNC_8(VAR_4->hpd_gpio);
 if (VAR_4->irq < 0) {
  FUNC_2(VAR_5, "failed to get GPIO irq\n");
  return VAR_4->irq;
 }

 VAR_7 = FUNC_10(VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_11(VAR_4, 0);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); ++VAR_6)
  VAR_4->regul_bulk[VAR_6].supply = VAR_3[VAR_6];

 VAR_7 = FUNC_6(VAR_5, FUNC_0(VAR_3), VAR_4->regul_bulk);
 if (VAR_7) {
  if (VAR_7 != -VAR_1)
   FUNC_2(VAR_5, "failed to get regulators\n");
  return VAR_7;
 }

 VAR_4->reg_hdmi_en = FUNC_7(VAR_5, "hdmi-en");

 if (FUNC_4(VAR_4->reg_hdmi_en) != -VAR_0) {
  if (FUNC_3(VAR_4->reg_hdmi_en))
   return FUNC_4(VAR_4->reg_hdmi_en);

  VAR_7 = FUNC_12(VAR_4->reg_hdmi_en);
  if (VAR_7) {
   FUNC_2(VAR_5,
          "failed to enable hdmi-en regulator\n");
   return VAR_7;
  }
 }

 return FUNC_9(VAR_4);
}
