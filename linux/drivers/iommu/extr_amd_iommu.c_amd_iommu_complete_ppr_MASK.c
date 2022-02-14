
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct iommu_dev_data {size_t devid; int pri_tlp; } ;
struct iommu_cmd {int dummy; } ;
struct amd_iommu {int dummy; } ;


 struct amd_iommu** VAR_0 ;
 int FUNC_0 (struct iommu_cmd*,size_t,int,int,int,int ) ;
 struct iommu_dev_data* FUNC_1 (int *) ;
 int FUNC_2 (struct amd_iommu*,struct iommu_cmd*) ;

int FUNC_3(struct pci_dev *VAR_1, int VAR_2,
      int VAR_3, int VAR_4)
{
 struct iommu_dev_data *VAR_5;
 struct amd_iommu *VAR_6;
 struct iommu_cmd VAR_7;

 VAR_5 = FUNC_1(&VAR_1->dev);
 VAR_6 = VAR_0[VAR_5->devid];

 FUNC_0(&VAR_7, VAR_5->devid, VAR_2, VAR_3,
      VAR_4, VAR_5->pri_tlp);

 return FUNC_2(VAR_6, &VAR_7);
}
