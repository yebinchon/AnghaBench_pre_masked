
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int name; struct exynos_nocp* driver_data; int * ops; } ;
struct exynos_nocp {int clk; int edev; TYPE_1__ desc; struct device* dev; } ;
struct device_node {int full_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,TYPE_1__*) ;
 struct exynos_nocp* FUNC_6 (struct device*,int,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct platform_device*,struct exynos_nocp*) ;
 int FUNC_8 (struct platform_device*,struct exynos_nocp*) ;
 int FUNC_9 (char*,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct device_node *VAR_5 = VAR_4->of_node;
 struct exynos_nocp *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(&VAR_3->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dev = &VAR_3->dev;


 VAR_7 = FUNC_7(VAR_3, VAR_6);
 if (VAR_7 < 0) {
  FUNC_3(&VAR_3->dev,
   "failed to parse devicetree for resource\n");
  return VAR_7;
 }


 VAR_6->desc.ops = &VAR_2;
 VAR_6->desc.driver_data = VAR_6;
 VAR_6->desc.name = VAR_5->full_name;
 VAR_6->edev = FUNC_5(&VAR_3->dev, &VAR_6->desc);
 if (FUNC_0(VAR_6->edev)) {
  FUNC_3(&VAR_3->dev,
   "failed to add devfreq-event device\n");
  return FUNC_1(VAR_6->edev);
 }
 FUNC_8(VAR_3, VAR_6);

 VAR_7 = FUNC_2(VAR_6->clk);
 if (VAR_7) {
  FUNC_3(&VAR_3->dev, "failed to prepare ppmu clock\n");
  return VAR_7;
 }

 FUNC_9("exynos-nocp: new NoC Probe device registered: %s\n",
   FUNC_4(VAR_4));

 return 0;
}
