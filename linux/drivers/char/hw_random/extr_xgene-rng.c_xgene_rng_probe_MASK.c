
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xgene_rng_dev {int irq; int clk; int csr_base; int * dev; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {unsigned long priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *,struct resource*) ;
 struct xgene_rng_dev* FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int *,int,int ,int ,int ,struct xgene_rng_dev*) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct xgene_rng_dev*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 struct xgene_rng_dev *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_12(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dev = &VAR_5->dev;
 FUNC_16(VAR_5, VAR_7);

 VAR_6 = FUNC_15(VAR_5, VAR_2, 0);
 VAR_7->csr_base = FUNC_11(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_7->csr_base))
  return FUNC_1(VAR_7->csr_base);

 VAR_8 = FUNC_14(VAR_5, 0);
 if (VAR_8 < 0) {
  FUNC_5(&VAR_5->dev, "No IRQ resource\n");
  return VAR_8;
 }
 VAR_7->irq = VAR_8;

 FUNC_4(&VAR_5->dev, "APM X-Gene RNG BASE %p ALARM IRQ %d",
  VAR_7->csr_base, VAR_7->irq);

 VAR_8 = FUNC_13(&VAR_5->dev, VAR_7->irq, VAR_4, 0,
    FUNC_6(&VAR_5->dev), VAR_7);
 if (VAR_8) {
  FUNC_5(&VAR_5->dev, "Could not request RNG alarm IRQ\n");
  return VAR_8;
 }


 VAR_7->clk = FUNC_9(&VAR_5->dev, ((void*)0));
 if (FUNC_0(VAR_7->clk)) {
  FUNC_7(&VAR_5->dev, "Couldn't get the clock for RNG\n");
 } else {
  VAR_8 = FUNC_3(VAR_7->clk);
  if (VAR_8) {
   FUNC_7(&VAR_5->dev,
     "clock prepare enable failed for RNG");
   return VAR_8;
  }
 }

 VAR_3.priv = (unsigned long) VAR_7;

 VAR_8 = FUNC_10(&VAR_5->dev, &VAR_3);
 if (VAR_8) {
  FUNC_5(&VAR_5->dev, "RNG registering failed error %d\n", VAR_8);
  if (!FUNC_0(VAR_7->clk))
   FUNC_2(VAR_7->clk);
  return VAR_8;
 }

 VAR_8 = FUNC_8(&VAR_5->dev, 1);
 if (VAR_8) {
  FUNC_5(&VAR_5->dev, "RNG device_init_wakeup failed error %d\n",
   VAR_8);
  if (!FUNC_0(VAR_7->clk))
   FUNC_2(VAR_7->clk);
  return VAR_8;
 }

 return 0;
}
