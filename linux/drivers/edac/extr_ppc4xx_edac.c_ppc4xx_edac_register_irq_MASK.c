
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ded; int sec; } ;
struct ppc4xx_edac_pdata {TYPE_2__ irqs; } ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mem_ctl_info {struct ppc4xx_edac_pdata* pvt_info; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct mem_ctl_info*) ;
 int FUNC_1 (struct device_node*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,struct mem_ctl_info*,char*,...) ;
 int FUNC_3 (int,int ,int ,char*,struct mem_ctl_info*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_6,
        struct mem_ctl_info *VAR_7)
{
 int VAR_8 = 0;
 int VAR_9, VAR_10;
 struct ppc4xx_edac_pdata *VAR_11 = VAR_7->pvt_info;
 struct device_node *VAR_12 = VAR_6->dev.of_node;

 VAR_9 = FUNC_1(VAR_12, VAR_1);
 VAR_10 = FUNC_1(VAR_12, VAR_2);

 if (!VAR_9 || !VAR_10) {
  FUNC_2(VAR_3, VAR_7,
          "Unable to map interrupts.\n");
  VAR_8 = -VAR_0;
  goto fail;
 }

 VAR_8 = FUNC_3(VAR_9,
        VAR_5,
        0,
        "[EDAC] MC ECCDED",
        VAR_7);

 if (VAR_8 < 0) {
  FUNC_2(VAR_3, VAR_7,
          "Unable to request irq %d for ECC DED",
          VAR_9);
  VAR_8 = -VAR_0;
  goto fail1;
 }

 VAR_8 = FUNC_3(VAR_10,
        VAR_5,
        0,
        "[EDAC] MC ECCSEC",
        VAR_7);

 if (VAR_8 < 0) {
  FUNC_2(VAR_3, VAR_7,
          "Unable to request irq %d for ECC SEC",
          VAR_10);
  VAR_8 = -VAR_0;
  goto fail2;
 }

 FUNC_2(VAR_4, VAR_7, "ECCDED irq is %d\n", VAR_9);
 FUNC_2(VAR_4, VAR_7, "ECCSEC irq is %d\n", VAR_10);

 VAR_11->irqs.ded = VAR_9;
 VAR_11->irqs.sec = VAR_10;

 return 0;

 fail2:
 FUNC_0(VAR_10, VAR_7);

 fail1:
 FUNC_0(VAR_9, VAR_7);

 fail:
 return VAR_8;
}
