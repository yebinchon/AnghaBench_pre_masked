
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct resource {int start; } ;
struct regulator {int dummy; } ;
struct TYPE_8__ {struct hdmi_platform_config* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hdmi_platform_config {int hpd_reg_cnt; int pwr_reg_cnt; int hpd_clk_cnt; int pwr_clk_cnt; int * pwr_clk_names; int * hpd_clk_names; int * pwr_reg_names; int * hpd_reg_names; int qfprom_mmio_name; int mmio_name; } ;
struct hdmi {struct regulator* hdcp_ctrl; struct regulator* i2c; int workq; struct regulator** pwr_clks; struct regulator** hpd_clks; struct regulator** pwr_regs; struct regulator** hpd_regs; struct regulator* qfprom_mmio; int mmio_phy_addr; struct regulator* mmio; int reg_lock; struct hdmi_platform_config* config; struct platform_device* pdev; } ;
typedef struct regulator clk ;


 int FUNC_0 (TYPE_1__*,char*,...) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_0 ;
 struct hdmi* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct regulator*) ;
 int FUNC_4 (struct regulator*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 void* FUNC_7 (TYPE_1__*,int,int,int ) ;
 struct hdmi* FUNC_8 (TYPE_1__*,int,int ) ;
 struct regulator* FUNC_9 (TYPE_1__*,int ) ;
 struct regulator* FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct hdmi*) ;
 int FUNC_12 (struct hdmi*) ;
 struct regulator* FUNC_13 (struct hdmi*) ;
 struct regulator* FUNC_14 (struct hdmi*) ;
 void* FUNC_15 (struct platform_device*,int ,char*) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static struct hdmi *FUNC_19(struct platform_device *VAR_3)
{
 struct hdmi_platform_config *VAR_4 = VAR_3->dev.platform_data;
 struct hdmi *VAR_5 = ((void*)0);
 struct resource *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_8(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_8 = -VAR_0;
  goto fail;
 }

 VAR_5->pdev = VAR_3;
 VAR_5->config = VAR_4;
 FUNC_18(&VAR_5->reg_lock);

 VAR_5->mmio = FUNC_15(VAR_3, VAR_4->mmio_name, "HDMI");
 if (FUNC_3(VAR_5->mmio)) {
  VAR_8 = FUNC_4(VAR_5->mmio);
  goto fail;
 }


 VAR_6 = FUNC_16(VAR_3, VAR_2,
  VAR_4->mmio_name);
 VAR_5->mmio_phy_addr = VAR_6->start;

 VAR_5->qfprom_mmio = FUNC_15(VAR_3,
  VAR_4->qfprom_mmio_name, "HDMI_QFPROM");
 if (FUNC_3(VAR_5->qfprom_mmio)) {
  FUNC_1(&VAR_3->dev, "can't find qfprom resource\n");
  VAR_5->qfprom_mmio = ((void*)0);
 }

 VAR_5->hpd_regs = FUNC_7(&VAR_3->dev,
          VAR_4->hpd_reg_cnt,
          sizeof(VAR_5->hpd_regs[0]),
          VAR_1);
 if (!VAR_5->hpd_regs) {
  VAR_8 = -VAR_0;
  goto fail;
 }
 for (VAR_7 = 0; VAR_7 < VAR_4->hpd_reg_cnt; VAR_7++) {
  struct regulator *VAR_9;

  VAR_9 = FUNC_9(&VAR_3->dev,
    VAR_4->hpd_reg_names[VAR_7]);
  if (FUNC_3(VAR_9)) {
   VAR_8 = FUNC_4(VAR_9);
   FUNC_0(&VAR_3->dev, "failed to get hpd regulator: %s (%d)\n",
     VAR_4->hpd_reg_names[VAR_7], VAR_8);
   goto fail;
  }

  VAR_5->hpd_regs[VAR_7] = VAR_9;
 }

 VAR_5->pwr_regs = FUNC_7(&VAR_3->dev,
          VAR_4->pwr_reg_cnt,
          sizeof(VAR_5->pwr_regs[0]),
          VAR_1);
 if (!VAR_5->pwr_regs) {
  VAR_8 = -VAR_0;
  goto fail;
 }
 for (VAR_7 = 0; VAR_7 < VAR_4->pwr_reg_cnt; VAR_7++) {
  struct regulator *VAR_10;

  VAR_10 = FUNC_9(&VAR_3->dev,
    VAR_4->pwr_reg_names[VAR_7]);
  if (FUNC_3(VAR_10)) {
   VAR_8 = FUNC_4(VAR_10);
   FUNC_0(&VAR_3->dev, "failed to get pwr regulator: %s (%d)\n",
     VAR_4->pwr_reg_names[VAR_7], VAR_8);
   goto fail;
  }

  VAR_5->pwr_regs[VAR_7] = VAR_10;
 }

 VAR_5->hpd_clks = FUNC_7(&VAR_3->dev,
          VAR_4->hpd_clk_cnt,
          sizeof(VAR_5->hpd_clks[0]),
          VAR_1);
 if (!VAR_5->hpd_clks) {
  VAR_8 = -VAR_0;
  goto fail;
 }
 for (VAR_7 = 0; VAR_7 < VAR_4->hpd_clk_cnt; VAR_7++) {
  struct clk *VAR_11;

  VAR_11 = FUNC_10(VAR_3, VAR_4->hpd_clk_names[VAR_7]);
  if (FUNC_3(VAR_11)) {
   VAR_8 = FUNC_4(VAR_11);
   FUNC_0(&VAR_3->dev, "failed to get hpd clk: %s (%d)\n",
     VAR_4->hpd_clk_names[VAR_7], VAR_8);
   goto fail;
  }

  VAR_5->hpd_clks[VAR_7] = VAR_11;
 }

 VAR_5->pwr_clks = FUNC_7(&VAR_3->dev,
          VAR_4->pwr_clk_cnt,
          sizeof(VAR_5->pwr_clks[0]),
          VAR_1);
 if (!VAR_5->pwr_clks) {
  VAR_8 = -VAR_0;
  goto fail;
 }
 for (VAR_7 = 0; VAR_7 < VAR_4->pwr_clk_cnt; VAR_7++) {
  struct clk *VAR_12;

  VAR_12 = FUNC_10(VAR_3, VAR_4->pwr_clk_names[VAR_7]);
  if (FUNC_3(VAR_12)) {
   VAR_8 = FUNC_4(VAR_12);
   FUNC_0(&VAR_3->dev, "failed to get pwr clk: %s (%d)\n",
     VAR_4->pwr_clk_names[VAR_7], VAR_8);
   goto fail;
  }

  VAR_5->pwr_clks[VAR_7] = VAR_12;
 }

 FUNC_17(&VAR_3->dev);

 VAR_5->workq = FUNC_5("msm_hdmi", 0);

 VAR_5->i2c = FUNC_14(VAR_5);
 if (FUNC_3(VAR_5->i2c)) {
  VAR_8 = FUNC_4(VAR_5->i2c);
  FUNC_0(&VAR_3->dev, "failed to get i2c: %d\n", VAR_8);
  VAR_5->i2c = ((void*)0);
  goto fail;
 }

 VAR_8 = FUNC_12(VAR_5);
 if (VAR_8) {
  FUNC_0(&VAR_3->dev, "failed to get phy\n");
  goto fail;
 }

 VAR_5->hdcp_ctrl = FUNC_13(VAR_5);
 if (FUNC_3(VAR_5->hdcp_ctrl)) {
  FUNC_6(&VAR_3->dev, "failed to init hdcp: disabled\n");
  VAR_5->hdcp_ctrl = ((void*)0);
 }

 return VAR_5;

fail:
 if (VAR_5)
  FUNC_11(VAR_5);

 return FUNC_2(VAR_8);
}
