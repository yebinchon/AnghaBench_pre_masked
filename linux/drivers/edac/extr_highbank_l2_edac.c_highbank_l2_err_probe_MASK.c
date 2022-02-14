
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_13__ {TYPE_1__* driver; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_device_id {char* compatible; } ;
struct hb_l2_drvdata {void* sb_irq; void* db_irq; int base; } ;
struct edac_device_ctl_info {char* ctl_name; int dev_name; int mod_name; TYPE_2__* dev; struct hb_l2_drvdata* pvt_info; } ;
struct TYPE_12__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,void*,int ,int ,int ,struct edac_device_ctl_info*) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *,int ) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_8 (struct edac_device_ctl_info*) ;
 struct edac_device_ctl_info* FUNC_9 (int,char*,int,char*,int,int,int *,int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct edac_device_ctl_info*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct of_device_id* FUNC_12 (int ,TYPE_2__*) ;
 void* FUNC_13 (struct platform_device*,int) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct edac_device_ctl_info*) ;
 int FUNC_16 (struct resource*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_7)
{
 const struct of_device_id *VAR_8;
 struct edac_device_ctl_info *VAR_9;
 struct hb_l2_drvdata *VAR_10;
 struct resource *VAR_11;
 int VAR_12 = 0;

 VAR_9 = FUNC_9(sizeof(*VAR_10), "cpu",
  1, "L", 1, 2, ((void*)0), 0, 0);
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = VAR_9->pvt_info;
 VAR_9->dev = &VAR_7->dev;
 FUNC_15(VAR_7, VAR_9);

 if (!FUNC_6(&VAR_7->dev, ((void*)0), VAR_3))
  return -VAR_2;

 VAR_11 = FUNC_14(VAR_7, VAR_4, 0);
 if (!VAR_11) {
  FUNC_0(&VAR_7->dev, "Unable to get mem resource\n");
  VAR_12 = -VAR_1;
  goto err;
 }

 if (!FUNC_4(&VAR_7->dev, VAR_11->start,
         FUNC_16(VAR_11), FUNC_1(&VAR_7->dev))) {
  FUNC_0(&VAR_7->dev, "Error while requesting mem region\n");
  VAR_12 = -VAR_0;
  goto err;
 }

 VAR_10->base = FUNC_2(&VAR_7->dev, VAR_11->start, FUNC_16(VAR_11));
 if (!VAR_10->base) {
  FUNC_0(&VAR_7->dev, "Unable to map regs\n");
  VAR_12 = -VAR_2;
  goto err;
 }

 VAR_8 = FUNC_12(VAR_5, &VAR_7->dev);
 VAR_9->mod_name = VAR_7->dev.driver->name;
 VAR_9->ctl_name = VAR_8 ? VAR_8->compatible : "unknown";
 VAR_9->dev_name = FUNC_1(&VAR_7->dev);

 if (FUNC_8(VAR_9))
  goto err;

 VAR_10->db_irq = FUNC_13(VAR_7, 0);
 VAR_12 = FUNC_3(&VAR_7->dev, VAR_10->db_irq,
          VAR_6,
          0, FUNC_1(&VAR_7->dev), VAR_9);
 if (VAR_12 < 0)
  goto err2;

 VAR_10->sb_irq = FUNC_13(VAR_7, 1);
 VAR_12 = FUNC_3(&VAR_7->dev, VAR_10->sb_irq,
          VAR_6,
          0, FUNC_1(&VAR_7->dev), VAR_9);
 if (VAR_12 < 0)
  goto err2;

 FUNC_5(&VAR_7->dev, ((void*)0));
 return 0;
err2:
 FUNC_10(&VAR_7->dev);
err:
 FUNC_7(&VAR_7->dev, ((void*)0));
 FUNC_11(VAR_9);
 return VAR_12;
}
