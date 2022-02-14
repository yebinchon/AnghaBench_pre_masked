
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sata_rcar_priv {int type; int base; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct ata_host {struct sata_rcar_priv* private_data; } ;
typedef enum sata_rcar_type { ____Placeholder_sata_rcar_type } sata_rcar_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ata_host*,int,int ,int ,int *) ;
 struct ata_host* FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct sata_rcar_priv* FUNC_5 (struct device*,int,int ) ;
 scalar_t__ FUNC_6 (struct device*) ;
 int FUNC_7 (struct platform_device*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct ata_host*) ;
 int VAR_4 ;
 int FUNC_14 (struct ata_host*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct ata_host *VAR_8;
 struct sata_rcar_priv *VAR_9;
 struct resource *VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_7(VAR_6, 0);
 if (VAR_11 < 0)
  return VAR_11;
 if (!VAR_11)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_7, sizeof(struct sata_rcar_priv), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->type = (enum sata_rcar_type)FUNC_6(VAR_7);

 FUNC_10(VAR_7);
 VAR_12 = FUNC_11(VAR_7);
 if (VAR_12 < 0)
  goto err_pm_disable;

 VAR_8 = FUNC_3(VAR_7, 1);
 if (!VAR_8) {
  VAR_12 = -VAR_1;
  goto err_pm_put;
 }

 VAR_8->private_data = VAR_9;

 VAR_10 = FUNC_8(VAR_6, VAR_3, 0);
 VAR_9->base = FUNC_4(VAR_7, VAR_10);
 if (FUNC_0(VAR_9->base)) {
  VAR_12 = FUNC_1(VAR_9->base);
  goto err_pm_put;
 }


 FUNC_14(VAR_8);


 FUNC_13(VAR_8);

 VAR_12 = FUNC_2(VAR_8, VAR_11, VAR_4, 0,
    &VAR_5);
 if (!VAR_12)
  return 0;

err_pm_put:
 FUNC_12(VAR_7);
err_pm_disable:
 FUNC_9(VAR_7);
 return VAR_12;
}
