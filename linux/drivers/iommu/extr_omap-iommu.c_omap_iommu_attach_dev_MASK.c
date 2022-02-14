
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_iommu_domain {int num_iommus; int lock; struct device* dev; struct omap_iommu_device* iommus; } ;
struct omap_iommu_device {struct omap_iommu* iommu_dev; int pgtable; } ;
struct omap_iommu_arch_data {struct omap_iommu* iommu_dev; } ;
struct omap_iommu {struct iommu_domain* domain; } ;
struct iommu_domain {int dummy; } ;
struct TYPE_2__ {struct omap_iommu_arch_data* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct omap_iommu*,int ) ;
 int FUNC_2 (struct device*,struct omap_iommu_domain*) ;
 int FUNC_3 (struct omap_iommu*) ;
 int FUNC_4 (struct omap_iommu_domain*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct omap_iommu_domain* FUNC_7 (struct iommu_domain*) ;

__attribute__((used)) static int
FUNC_8(struct iommu_domain *VAR_2, struct device *VAR_3)
{
 struct omap_iommu_domain *VAR_4 = FUNC_7(VAR_2);
 struct omap_iommu_arch_data *VAR_5 = VAR_3->archdata.iommu;
 struct omap_iommu_device *VAR_6;
 struct omap_iommu *VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 if (!VAR_5 || !VAR_5->iommu_dev) {
  FUNC_0(VAR_3, "device doesn't have an associated iommu\n");
  return -VAR_1;
 }

 FUNC_5(&VAR_4->lock);


 if (VAR_4->dev) {
  FUNC_0(VAR_3, "iommu domain is already attached\n");
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_8 = FUNC_2(VAR_3, VAR_4);
 if (VAR_8) {
  FUNC_0(VAR_3, "failed to allocate required iommu data %d\n",
   VAR_8);
  goto init_fail;
 }

 VAR_6 = VAR_4->iommus;
 for (VAR_9 = 0; VAR_9 < VAR_4->num_iommus; VAR_9++, VAR_6++, VAR_5++) {

  VAR_7 = VAR_5->iommu_dev;
  VAR_8 = FUNC_1(VAR_7, VAR_6->pgtable);
  if (VAR_8) {
   FUNC_0(VAR_3, "can't get omap iommu: %d\n", VAR_8);
   goto attach_fail;
  }

  VAR_7->domain = VAR_2;
  VAR_6->iommu_dev = VAR_7;
 }

 VAR_4->dev = VAR_3;

 goto out;

attach_fail:
 while (VAR_9--) {
  VAR_6--;
  VAR_5--;
  VAR_7 = VAR_6->iommu_dev;
  FUNC_3(VAR_7);
  VAR_6->iommu_dev = ((void*)0);
  VAR_7->domain = ((void*)0);
 }
init_fail:
 FUNC_4(VAR_4);
out:
 FUNC_6(&VAR_4->lock);
 return VAR_8;
}
