
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct llcc_drv_data* platform_data; } ;
struct platform_device {struct device dev; } ;
struct llcc_drv_data {int ecc_irq; int num_banks; int bcast_regmap; } ;
struct edac_device_ctl_info {char* ctl_name; struct device* dev; struct llcc_drv_data* pvt_info; int panic_on_ue; void* dev_name; void* mod_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int,int ,int ,char*,struct edac_device_ctl_info*) ;
 int FUNC_2 (struct edac_device_ctl_info*) ;
 struct edac_device_ctl_info* FUNC_3 (int ,char*,int,char*,int ,int,int *,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct edac_device_ctl_info*) ;
 int VAR_4 ;
 int FUNC_7 (struct platform_device*,struct edac_device_ctl_info*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct llcc_drv_data *VAR_6 = VAR_5->dev.platform_data;
 struct edac_device_ctl_info *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_8(VAR_6->bcast_regmap);
 if (VAR_10)
  return VAR_10;


 VAR_7 = FUNC_3(0, "qcom-llcc", 1, "bank",
           VAR_6->num_banks, 1,
           ((void*)0), 0,
           FUNC_4());

 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = VAR_8;
 VAR_7->mod_name = FUNC_0(VAR_8);
 VAR_7->dev_name = FUNC_0(VAR_8);
 VAR_7->ctl_name = "llcc";
 VAR_7->panic_on_ue = VAR_3;
 VAR_7->pvt_info = VAR_6;

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  goto out_mem;

 FUNC_7(VAR_5, VAR_7);


 VAR_9 = VAR_6->ecc_irq;
 if (VAR_9 < 0) {
  VAR_10 = -VAR_0;
  goto out_dev;
 }
 VAR_10 = FUNC_1(VAR_8, VAR_9, VAR_4,
         VAR_2, "llcc_ecc", VAR_7);
 if (VAR_10)
  goto out_dev;

 return VAR_10;

out_dev:
 FUNC_5(VAR_7->dev);
out_mem:
 FUNC_6(VAR_7);

 return VAR_10;
}
