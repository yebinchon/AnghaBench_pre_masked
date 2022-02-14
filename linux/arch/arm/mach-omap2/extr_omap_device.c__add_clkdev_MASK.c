
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_device {TYPE_1__* pdev; } ;
struct of_phandle_args {int np; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (char const*,int *,char const*,int *) ;
 struct clk* FUNC_2 (int *,char const*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*,char const*,int *) ;
 int FUNC_5 (int *,char*,char const*,...) ;
 int FUNC_6 (int *,char*,char const*) ;
 int * FUNC_7 (int *) ;
 struct clk* FUNC_8 (struct of_phandle_args*) ;
 int FUNC_9 (int *,char const*) ;

__attribute__((used)) static void FUNC_10(struct omap_device *VAR_2, const char *VAR_3,
         const char *VAR_4)
{
 struct clk *VAR_5;
 int VAR_6;

 if (!VAR_3 || !VAR_4)
  return;

 FUNC_5(&VAR_2->pdev->dev, "Creating %s -> %s\n", VAR_3, VAR_4);

 VAR_5 = FUNC_2(FUNC_7(&VAR_2->pdev->dev), VAR_3);
 if (!FUNC_0(VAR_5)) {
  FUNC_5(&VAR_2->pdev->dev,
    "alias %s already exists\n", VAR_3);
  FUNC_3(VAR_5);
  return;
 }

 VAR_5 = FUNC_2(((void*)0), VAR_4);

 if (FUNC_0(VAR_5)) {
  struct of_phandle_args VAR_7;

  VAR_7.np = FUNC_9(((void*)0), VAR_4);

  VAR_5 = FUNC_8(&VAR_7);

  VAR_6 = FUNC_4(VAR_5, VAR_3,
      FUNC_7(&VAR_2->pdev->dev));
 } else {
  VAR_6 = FUNC_1(VAR_3, FUNC_7(&VAR_2->pdev->dev),
       VAR_4, ((void*)0));
 }

 if (VAR_6) {
  if (VAR_6 == -VAR_0 || VAR_6 == -VAR_1)
   FUNC_6(&VAR_2->pdev->dev,
    "clkdev_alloc for %s failed\n", VAR_3);
  else
   FUNC_6(&VAR_2->pdev->dev,
    "clk_get for %s failed\n", VAR_4);
 }
}
