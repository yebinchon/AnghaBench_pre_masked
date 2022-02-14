
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int of_node; int * funcs; } ;
struct exynos_mic {TYPE_1__ bridge; int * clks; int sysreg; int reg; struct device* dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int * VAR_3 ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct device*,int ,int ) ;
 struct exynos_mic* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int ,struct resource*) ;
 int FUNC_10 (struct platform_device*,struct exynos_mic*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct resource*) ;
 int FUNC_14 (int ,char*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct exynos_mic *VAR_8;
 struct resource VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_7(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  FUNC_1(VAR_7,
         "mic: Failed to allocate memory for MIC object\n");
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_8->dev = VAR_7;

 VAR_10 = FUNC_9(VAR_7->of_node, 0, &VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_7, "mic: Failed to get mem region for MIC\n");
  goto err;
 }
 VAR_8->reg = FUNC_6(VAR_7, VAR_9.start, FUNC_13(&VAR_9));
 if (!VAR_8->reg) {
  FUNC_1(VAR_7, "mic: Failed to remap for MIC\n");
  VAR_10 = -VAR_0;
  goto err;
 }

 VAR_8->sysreg = FUNC_14(VAR_7->of_node,
       "samsung,disp-syscon");
 if (FUNC_2(VAR_8->sysreg)) {
  FUNC_1(VAR_7, "mic: Failed to get system register.\n");
  VAR_10 = FUNC_3(VAR_8->sysreg);
  goto err;
 }

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  VAR_8->clks[VAR_11] = FUNC_5(VAR_7, VAR_3[VAR_11]);
  if (FUNC_2(VAR_8->clks[VAR_11])) {
   FUNC_1(VAR_7, "mic: Failed to get clock (%s)\n",
          VAR_3[VAR_11]);
   VAR_10 = FUNC_3(VAR_8->clks[VAR_11]);
   goto err;
  }
 }

 FUNC_10(VAR_6, VAR_8);

 VAR_8->bridge.funcs = &VAR_5;
 VAR_8->bridge.of_node = VAR_7->of_node;

 FUNC_8(&VAR_8->bridge);

 FUNC_12(VAR_7);

 VAR_10 = FUNC_4(VAR_7, &VAR_4);
 if (VAR_10)
  goto err_pm;

 FUNC_0(VAR_7, "MIC has been probed\n");

 return 0;

err_pm:
 FUNC_11(VAR_7);
err:
 return VAR_10;
}
