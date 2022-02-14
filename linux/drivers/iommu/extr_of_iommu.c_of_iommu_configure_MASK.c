
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int np; } ;
struct of_pci_iommu_alias_info {struct device_node* np; struct device* dev; } ;
typedef struct iommu_ops const iommu_ops ;
struct iommu_fwspec {struct iommu_ops const* ops; } ;
struct device_node {int dummy; } ;
struct device {scalar_t__ bus; } ;


 int VAR_0 ;
 struct iommu_ops const* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*,int) ;
 struct iommu_fwspec* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int ,struct device_node*) ;
 int FUNC_9 (struct device*,struct of_phandle_args*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 int VAR_2 ;
 int FUNC_12 (int ,int ,struct of_pci_iommu_alias_info*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;

const struct iommu_ops *FUNC_15(struct device *VAR_3,
        struct device_node *VAR_4)
{
 const struct iommu_ops *VAR_5 = ((void*)0);
 struct iommu_fwspec *VAR_6 = FUNC_2(VAR_3);
 int VAR_7 = VAR_1;

 if (!VAR_4)
  return ((void*)0);

 if (VAR_6) {
  if (VAR_6->ops)
   return VAR_6->ops;


  FUNC_6(VAR_3);
 }






 if (FUNC_4(VAR_3)) {
  struct of_pci_iommu_alias_info VAR_8 = {
   .dev = VAR_3,
   .np = VAR_4,
  };

  VAR_7 = FUNC_12(FUNC_14(VAR_3),
          VAR_2, &VAR_8);
 } else if (FUNC_3(VAR_3)) {
  VAR_7 = FUNC_8(FUNC_13(VAR_3), VAR_4);
 } else {
  struct of_phandle_args VAR_9;
  int VAR_10 = 0;

  while (!FUNC_11(VAR_4, "iommus",
         "#iommu-cells",
         VAR_10, &VAR_9)) {
   VAR_7 = FUNC_9(VAR_3, &VAR_9);
   FUNC_10(VAR_9.np);
   VAR_10++;
   if (VAR_7)
    break;
  }
 }
 if (!VAR_7) {

  VAR_6 = FUNC_2(VAR_3);
  VAR_5 = VAR_6->ops;
 }




 if (!VAR_7 && VAR_3->bus && !FUNC_5(VAR_3))
  VAR_7 = FUNC_7(VAR_3);


 if (VAR_7 == -VAR_0) {
  VAR_5 = FUNC_0(VAR_7);
 } else if (VAR_7 < 0) {
  FUNC_1(VAR_3, "Adding to IOMMU failed: %d\n", VAR_7);
  VAR_5 = ((void*)0);
 }

 return VAR_5;
}
