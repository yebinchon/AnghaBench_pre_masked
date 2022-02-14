
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdmi_platform_config {int hpd_reg_cnt; int * hpd_reg_names; } ;
struct hdmi_connector {struct hdmi* hdmi; } ;
struct hdmi {int * hpd_regs; TYPE_1__* pdev; struct hdmi_platform_config* config; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (struct hdmi*,int) ;
 int FUNC_2 (struct hdmi*,int) ;
 int FUNC_3 (struct hdmi*,int ,int ) ;
 int FUNC_4 (struct hdmi*,int) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct hdmi_connector *VAR_1)
{
 struct hdmi *VAR_2 = VAR_1->hdmi;
 const struct hdmi_platform_config *VAR_3 = VAR_2->config;
 struct device *VAR_4 = &VAR_2->pdev->dev;
 int VAR_5, VAR_6 = 0;


 FUNC_3(VAR_2, VAR_0, 0);

 FUNC_4(VAR_2, 0);

 FUNC_1(VAR_2, 0);
 FUNC_6(VAR_4);

 VAR_6 = FUNC_2(VAR_2, 0);
 if (VAR_6)
  FUNC_0(VAR_4, "failed to unconfigure GPIOs: %d\n", VAR_6);

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6)
  FUNC_0(VAR_4, "pinctrl state chg failed: %d\n", VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_3->hpd_reg_cnt; VAR_5++) {
  VAR_6 = FUNC_7(VAR_2->hpd_regs[VAR_5]);
  if (VAR_6)
   FUNC_0(VAR_4, "failed to disable hpd regulator: %s (%d)\n",
     VAR_3->hpd_reg_names[VAR_5], VAR_6);
 }
}
