
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct em_sti_priv {int lock; int clk; int rate; struct platform_device* pdev; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,struct resource*) ;
 struct em_sti_priv* FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int,int ,int,int ,struct em_sti_priv*) ;
 int VAR_6 ;
 int FUNC_13 (struct em_sti_priv*) ;
 int FUNC_14 (struct em_sti_priv*) ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (struct platform_device*,struct em_sti_priv*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_7)
{
 struct em_sti_priv *VAR_8;
 struct resource *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_11(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->pdev = VAR_7;
 FUNC_17(VAR_7, VAR_8);

 VAR_10 = FUNC_15(VAR_7, 0);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_9 = FUNC_16(VAR_7, VAR_2, 0);
 VAR_8->base = FUNC_10(&VAR_7->dev, VAR_9);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_11 = FUNC_12(&VAR_7->dev, VAR_10, VAR_6,
          VAR_5 | VAR_3 | VAR_4,
          FUNC_8(&VAR_7->dev), VAR_8);
 if (VAR_11) {
  FUNC_7(&VAR_7->dev, "failed to request low IRQ\n");
  return VAR_11;
 }


 VAR_8->clk = FUNC_9(&VAR_7->dev, "sclk");
 if (FUNC_0(VAR_8->clk)) {
  FUNC_7(&VAR_7->dev, "cannot get clock\n");
  return FUNC_1(VAR_8->clk);
 }

 VAR_11 = FUNC_5(VAR_8->clk);
 if (VAR_11 < 0) {
  FUNC_7(&VAR_7->dev, "cannot prepare clock\n");
  return VAR_11;
 }

 VAR_11 = FUNC_3(VAR_8->clk);
 if (VAR_11 < 0) {
  FUNC_7(&VAR_8->pdev->dev, "cannot enable clock\n");
  FUNC_6(VAR_8->clk);
  return VAR_11;
 }
 VAR_8->rate = FUNC_4(VAR_8->clk);
 FUNC_2(VAR_8->clk);

 FUNC_18(&VAR_8->lock);
 FUNC_13(VAR_8);
 FUNC_14(VAR_8);
 return 0;
}
