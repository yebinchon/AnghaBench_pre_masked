
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_dev {int iface_clk; int dev; int bus_clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct qcom_iommu_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->iface_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "Couldn't enable iface_clk\n");
  return VAR_1;
 }

 VAR_1 = FUNC_1(VAR_0->bus_clk);
 if (VAR_1) {
  FUNC_2(VAR_0->dev, "Couldn't enable bus_clk\n");
  FUNC_0(VAR_0->iface_clk);
  return VAR_1;
 }

 return 0;
}
