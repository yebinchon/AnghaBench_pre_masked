
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct arm_smmu_master {int dev; int ats_enabled; struct arm_smmu_domain* domain; struct arm_smmu_device* smmu; } ;
struct arm_smmu_domain {int nr_ats_masters; } ;
struct arm_smmu_device {int pgsize_bitmap; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct arm_smmu_domain*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,size_t) ;
 scalar_t__ FUNC_4 (struct pci_dev*,size_t) ;
 struct pci_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct arm_smmu_master *VAR_0)
{
 size_t VAR_1;
 struct pci_dev *VAR_2;
 struct arm_smmu_device *VAR_3 = VAR_0->smmu;
 struct arm_smmu_domain *VAR_4 = VAR_0->domain;


 if (!VAR_0->ats_enabled)
  return;


 VAR_1 = FUNC_0(VAR_3->pgsize_bitmap);
 VAR_2 = FUNC_5(VAR_0->dev);

 FUNC_2(&VAR_4->nr_ats_masters);
 FUNC_1(VAR_4, 0, 0, 0);
 if (FUNC_4(VAR_2, VAR_1))
  FUNC_3(VAR_0->dev, "Failed to enable ATS (STU %zu)\n", VAR_1);
}
