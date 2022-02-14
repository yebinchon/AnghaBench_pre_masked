
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int iommu_dev; int fid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

int FUNC_4(struct zpci_dev *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_2(&VAR_1->iommu_dev, ((void*)0), ((void*)0),
        "s390-iommu.%08x", VAR_1->fid);
 if (VAR_2)
  goto out_err;

 FUNC_1(&VAR_1->iommu_dev, &VAR_0);

 VAR_2 = FUNC_0(&VAR_1->iommu_dev);
 if (VAR_2)
  goto out_sysfs;

 return 0;

out_sysfs:
 FUNC_3(&VAR_1->iommu_dev);

out_err:
 return VAR_2;
}
