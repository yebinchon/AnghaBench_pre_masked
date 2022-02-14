
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_platform {int coherent; } ;
struct sp_device {int axcache; int io_map; int dev_vdata; struct sp_platform* dev_specific; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
typedef enum dev_dma_attr { ____Placeholder_dev_dma_attr } dev_dma_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct sp_device*) ;
 int FUNC_6 (struct device*) ;
 struct sp_platform* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct device*,int ) ;
 struct sp_device* FUNC_10 (struct device*) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct sp_device*) ;
 int FUNC_13 (struct platform_device*) ;
 int FUNC_14 (struct sp_device*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_7)
{
 struct sp_device *VAR_8;
 struct sp_platform *VAR_9;
 struct device *VAR_10 = &VAR_7->dev;
 enum dev_dma_attr VAR_11;
 int VAR_12;

 VAR_12 = -VAR_5;
 VAR_8 = FUNC_10(VAR_10);
 if (!VAR_8)
  goto e_err;

 VAR_9 = FUNC_7(VAR_10, sizeof(*VAR_9), VAR_6);
 if (!VAR_9)
  goto e_err;

 VAR_8->dev_specific = VAR_9;
 VAR_8->dev_vdata = VAR_7->dev.of_node ? FUNC_13(VAR_7)
      : FUNC_11(VAR_7);
 if (!VAR_8->dev_vdata) {
  VAR_12 = -VAR_4;
  FUNC_3(VAR_10, "missing driver data\n");
  goto e_err;
 }

 VAR_8->io_map = FUNC_8(VAR_7, 0);
 if (FUNC_1(VAR_8->io_map)) {
  VAR_12 = FUNC_2(VAR_8->io_map);
  goto e_err;
 }

 VAR_11 = FUNC_6(VAR_10);
 if (VAR_11 == VAR_3) {
  FUNC_3(VAR_10, "DMA is not supported");
  goto e_err;
 }

 VAR_9->coherent = (VAR_11 == VAR_2);
 if (VAR_9->coherent)
  VAR_8->axcache = VAR_1;
 else
  VAR_8->axcache = VAR_0;

 VAR_12 = FUNC_9(VAR_10, FUNC_0(48));
 if (VAR_12) {
  FUNC_3(VAR_10, "dma_set_mask_and_coherent failed (%d)\n", VAR_12);
  goto e_err;
 }

 VAR_12 = FUNC_12(VAR_8);
 if (VAR_12)
  goto e_err;

 FUNC_5(VAR_10, VAR_8);

 VAR_12 = FUNC_14(VAR_8);
 if (VAR_12)
  goto e_err;

 FUNC_4(VAR_10, "enabled\n");

 return 0;

e_err:
 FUNC_4(VAR_10, "initialization failed\n");
 return VAR_12;
}
