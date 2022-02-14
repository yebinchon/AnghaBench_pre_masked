
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct omap_iommu {int id; int syscfg; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,int,int*) ;
 int FUNC_6 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1,
           struct omap_iommu *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->dev.of_node;
 int VAR_4;

 if (!FUNC_3(VAR_3, "ti,dra7-dsp-iommu"))
  return 0;

 if (!FUNC_4(VAR_3, "ti,syscon-mmuconfig")) {
  FUNC_2(&VAR_1->dev, "ti,syscon-mmuconfig property is missing\n");
  return -VAR_0;
 }

 VAR_2->syscfg =
  FUNC_6(VAR_3, "ti,syscon-mmuconfig");
 if (FUNC_0(VAR_2->syscfg)) {

  VAR_4 = FUNC_1(VAR_2->syscfg);
  return VAR_4;
 }

 if (FUNC_5(VAR_3, "ti,syscon-mmuconfig", 1,
           &VAR_2->id)) {
  FUNC_2(&VAR_1->dev, "couldn't get the IOMMU instance id within subsystem\n");
  return -VAR_0;
 }

 if (VAR_2->id != 0 && VAR_2->id != 1) {
  FUNC_2(&VAR_1->dev, "invalid IOMMU instance id\n");
  return -VAR_0;
 }

 return 0;
}
