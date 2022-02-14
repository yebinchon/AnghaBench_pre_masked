
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct arm_smmu_match_data {int model; int version; } ;
struct arm_smmu_device {int features; int model; int version; int num_global_irqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct arm_smmu_match_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int *) ;
 scalar_t__ FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4,
        struct arm_smmu_device *VAR_5)
{
 const struct arm_smmu_match_data *VAR_6;
 struct device *VAR_7 = &VAR_4->dev;
 bool VAR_8;

 if (FUNC_4(VAR_7->of_node, "#global-interrupts",
     &VAR_5->num_global_irqs)) {
  FUNC_0(VAR_7, "missing #global-interrupts property\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_1(VAR_7);
 VAR_5->version = VAR_6->version;
 VAR_5->model = VAR_6->model;

 VAR_8 = FUNC_3(VAR_7->of_node, "mmu-masters", ((void*)0));
 if (VAR_8 && !VAR_2) {
  if (!VAR_3)
   FUNC_5("deprecated \"mmu-masters\" DT property in use; DMA API support unavailable\n");
  VAR_3 = 1;
 } else if (!VAR_8 && !VAR_3) {
  VAR_2 = 1;
 } else {
  FUNC_0(VAR_7, "not probing due to mismatched DT properties\n");
  return -VAR_1;
 }

 if (FUNC_2(VAR_7->of_node))
  VAR_5->features |= VAR_0;

 return 0;
}
