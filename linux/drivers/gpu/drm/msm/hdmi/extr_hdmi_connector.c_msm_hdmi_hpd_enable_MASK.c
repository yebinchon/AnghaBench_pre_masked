
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct hdmi_platform_config {int hpd_reg_cnt; int * hpd_reg_names; } ;
struct hdmi_connector {struct hdmi* hdmi; } ;
struct hdmi {int reg_lock; int * hpd_regs; TYPE_1__* pdev; struct hdmi_platform_config* config; } ;
struct drm_connector {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct hdmi*,int) ;
 int FUNC_3 (struct hdmi*,int) ;
 int FUNC_4 (struct hdmi*,int ) ;
 int FUNC_5 (struct hdmi*,int ,int) ;
 int FUNC_6 (struct hdmi*) ;
 int FUNC_7 (struct hdmi*,int) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 struct hdmi_connector* FUNC_13 (struct drm_connector*) ;

int FUNC_14(struct drm_connector *VAR_6)
{
 struct hdmi_connector *VAR_7 = FUNC_13(VAR_6);
 struct hdmi *VAR_8 = VAR_7->hdmi;
 const struct hdmi_platform_config *VAR_9 = VAR_8->config;
 struct device *VAR_10 = &VAR_8->pdev->dev;
 uint32_t VAR_11;
 int VAR_12, VAR_13;
 unsigned long VAR_14;

 for (VAR_12 = 0; VAR_12 < VAR_9->hpd_reg_cnt; VAR_12++) {
  VAR_13 = FUNC_10(VAR_8->hpd_regs[VAR_12]);
  if (VAR_13) {
   FUNC_0(VAR_10, "failed to enable hpd regulator: %s (%d)\n",
     VAR_9->hpd_reg_names[VAR_12], VAR_13);
   goto fail;
  }
 }

 VAR_13 = FUNC_8(VAR_10);
 if (VAR_13) {
  FUNC_0(VAR_10, "pinctrl state chg failed: %d\n", VAR_13);
  goto fail;
 }

 VAR_13 = FUNC_3(VAR_8, 1);
 if (VAR_13) {
  FUNC_0(VAR_10, "failed to configure GPIOs: %d\n", VAR_13);
  goto fail;
 }

 FUNC_9(VAR_10);
 FUNC_2(VAR_8, 1);

 FUNC_7(VAR_8, 0);
 FUNC_6(VAR_8);
 FUNC_7(VAR_8, 1);

 FUNC_5(VAR_8, VAR_5, 0x0001001b);


 FUNC_5(VAR_8, VAR_4,
   VAR_1 |
   VAR_2);


 FUNC_11(&VAR_8->reg_lock, VAR_14);
 VAR_11 = FUNC_4(VAR_8, VAR_3);
 VAR_11 |= FUNC_1(0x1fff);


 FUNC_5(VAR_8, VAR_3,
   ~VAR_0 & VAR_11);
 FUNC_5(VAR_8, VAR_3,
   VAR_0 | VAR_11);
 FUNC_12(&VAR_8->reg_lock, VAR_14);

 return 0;

fail:
 return VAR_13;
}
