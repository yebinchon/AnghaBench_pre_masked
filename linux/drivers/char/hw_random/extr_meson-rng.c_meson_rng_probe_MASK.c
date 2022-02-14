
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct TYPE_2__ {int read; int name; } ;
struct meson_rng_data {TYPE_1__ rng; int * core_clk; int * base; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,int ,int *) ;
 int * FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,TYPE_1__*) ;
 int * FUNC_6 (struct device*,struct resource*) ;
 struct meson_rng_data* FUNC_7 (struct device*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct meson_rng_data*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct meson_rng_data *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_7(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->pdev = VAR_5;

 VAR_8 = FUNC_8(VAR_5, VAR_2, 0);
 VAR_7->base = FUNC_6(VAR_6, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->core_clk = FUNC_4(VAR_6, "core");
 if (FUNC_0(VAR_7->core_clk))
  VAR_7->core_clk = ((void*)0);

 if (VAR_7->core_clk) {
  VAR_9 = FUNC_2(VAR_7->core_clk);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_3(VAR_6, VAR_3,
            VAR_7->core_clk);
  if (VAR_9)
   return VAR_9;
 }

 VAR_7->rng.name = VAR_5->name;
 VAR_7->rng.read = VAR_4;

 FUNC_9(VAR_5, VAR_7);

 return FUNC_5(VAR_6, &VAR_7->rng);
}
