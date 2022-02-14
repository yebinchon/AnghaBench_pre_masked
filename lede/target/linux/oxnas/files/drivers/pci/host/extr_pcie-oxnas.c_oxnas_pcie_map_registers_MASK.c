
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct oxnas_pcie {void* pcie_ctrl_offset; void* outbound_offset; int * phy; void* inbound; void* base; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,struct resource*) ;
 int * FUNC_5 (int *,struct device_node*,int *) ;
 int FUNC_6 (struct device_node*,int,struct resource*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,void**) ;

__attribute__((used)) static int
FUNC_8(struct platform_device *VAR_3,
    struct device_node *VAR_4,
    struct oxnas_pcie *VAR_5)
{
 struct resource VAR_6;
 int VAR_7 = 0;
 u32 VAR_8;
 u32 VAR_9;

 VAR_7 = FUNC_6(VAR_4, 0, &VAR_6);
 if (VAR_7) {
  FUNC_2(&VAR_3->dev, "failed to parse base register space\n");
  return -VAR_0;
 }

 VAR_5->base = FUNC_4(&VAR_3->dev, &VAR_6);
 if (!VAR_5->base) {
  FUNC_2(&VAR_3->dev, "failed to map base register space\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_6(VAR_4, 1, &VAR_6);
 if (VAR_7) {
  FUNC_2(&VAR_3->dev, "failed to parse inbound register space\n");
  return -VAR_0;
 }

 VAR_5->inbound = FUNC_4(&VAR_3->dev, &VAR_6);
 if (!VAR_5->inbound) {
  FUNC_2(&VAR_3->dev, "failed to map inbound register space\n");
  return -VAR_1;
 }

 VAR_5->phy = FUNC_5(&VAR_3->dev, VAR_4, ((void*)0));
 if (FUNC_0(VAR_5->phy)) {
  if (FUNC_1(VAR_5->phy) == -VAR_2) {
   FUNC_2(&VAR_3->dev, "failed to probe phy\n");
   return FUNC_1(VAR_5->phy);
  }
  FUNC_3(&VAR_3->dev, "phy not attached\n");
  VAR_5->phy = ((void*)0);
 }

 if (FUNC_7(VAR_4, "plxtech,pcie-outbound-offset",
     &VAR_8)) {
  FUNC_2(&VAR_3->dev, "failed to parse outbound register offset\n");
  return -VAR_0;
 }
 VAR_5->outbound_offset = VAR_8;

 if (FUNC_7(VAR_4, "plxtech,pcie-ctrl-offset",
     &VAR_9)) {
  FUNC_2(&VAR_3->dev, "failed to parse pcie-ctrl register offset\n");
  return -VAR_0;
 }
 VAR_5->pcie_ctrl_offset = VAR_9;

 return 0;
}
