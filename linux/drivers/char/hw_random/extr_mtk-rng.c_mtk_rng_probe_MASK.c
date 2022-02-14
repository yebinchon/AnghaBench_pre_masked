
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_2__ {unsigned long priv; int quality; int read; int cleanup; int init; int name; } ;
struct mtk_rng {TYPE_1__ rng; int base; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct mtk_rng*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,struct resource*) ;
 struct mtk_rng* FUNC_8 (int *,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 struct resource *VAR_9;
 int VAR_10;
 struct mtk_rng *VAR_11;

 VAR_9 = FUNC_9(VAR_8, VAR_3, 0);
 if (!VAR_9) {
  FUNC_2(&VAR_8->dev, "no iomem resource\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_8(&VAR_8->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->rng.name = VAR_8->name;

 VAR_11->rng.init = VAR_6;
 VAR_11->rng.cleanup = VAR_5;

 VAR_11->rng.read = VAR_7;
 VAR_11->rng.priv = (unsigned long)&VAR_8->dev;
 VAR_11->rng.quality = 900;

 VAR_11->clk = FUNC_5(&VAR_8->dev, "rng");
 if (FUNC_0(VAR_11->clk)) {
  VAR_10 = FUNC_1(VAR_11->clk);
  FUNC_2(&VAR_8->dev, "no clock for device: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_11->base = FUNC_7(&VAR_8->dev, VAR_9);
 if (FUNC_0(VAR_11->base))
  return FUNC_1(VAR_11->base);

 VAR_10 = FUNC_6(&VAR_8->dev, &VAR_11->rng);
 if (VAR_10) {
  FUNC_2(&VAR_8->dev, "failed to register rng device: %d\n",
   VAR_10);
  return VAR_10;
 }

 FUNC_4(&VAR_8->dev, VAR_11);
 FUNC_11(&VAR_8->dev, VAR_4);
 FUNC_12(&VAR_8->dev);
 FUNC_10(&VAR_8->dev);

 FUNC_3(&VAR_8->dev, "registered RNG driver\n");

 return 0;
}
