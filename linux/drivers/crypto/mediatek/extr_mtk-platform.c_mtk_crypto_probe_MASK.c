
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mtk_cryp {scalar_t__* irq; int * dev; int clk_cryp; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 struct mtk_cryp* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct mtk_cryp*) ;
 int FUNC_9 (struct mtk_cryp*) ;
 int FUNC_10 (struct mtk_cryp*) ;
 int FUNC_11 (struct mtk_cryp*) ;
 int FUNC_12 (struct mtk_cryp*) ;
 int FUNC_13 (struct mtk_cryp*) ;
 int FUNC_14 (struct mtk_cryp*) ;
 scalar_t__ FUNC_15 (struct platform_device*,int) ;
 int FUNC_16 (struct platform_device*,struct mtk_cryp*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_4)
{
 struct mtk_cryp *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_6(&VAR_4->dev, sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->base = FUNC_7(VAR_4, 0);
 if (FUNC_0(VAR_5->base))
  return FUNC_1(VAR_5->base);

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5->irq[VAR_6] = FUNC_15(VAR_4, VAR_6);
  if (VAR_5->irq[VAR_6] < 0)
   return VAR_5->irq[VAR_6];
 }

 VAR_5->clk_cryp = FUNC_5(&VAR_4->dev, "cryp");
 if (FUNC_0(VAR_5->clk_cryp))
  return -VAR_1;

 VAR_5->dev = &VAR_4->dev;
 FUNC_18(VAR_5->dev);
 FUNC_19(VAR_5->dev);

 VAR_7 = FUNC_3(VAR_5->clk_cryp);
 if (VAR_7)
  goto err_clk_cryp;


 VAR_7 = FUNC_12(VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_5->dev, "Unable to allocate descriptor rings.\n");
  goto err_resource;
 }


 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_5->dev, "Failed to initialize cryptographic engine.\n");
  goto err_engine;
 }

 VAR_7 = FUNC_9(VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_5->dev, "Unable to register cipher algorithm.\n");
  goto err_cipher;
 }

 VAR_7 = FUNC_14(VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_5->dev, "Unable to register hash algorithm.\n");
  goto err_hash;
 }

 FUNC_16(VAR_4, VAR_5);
 return 0;

err_hash:
 FUNC_10(VAR_5);
err_cipher:
 FUNC_13(VAR_5);
err_engine:
 FUNC_11(VAR_5);
err_resource:
 FUNC_2(VAR_5->clk_cryp);
err_clk_cryp:
 FUNC_20(VAR_5->dev);
 FUNC_17(VAR_5->dev);

 return VAR_7;
}
