
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_mc {scalar_t__ regs; } ;
struct resource {scalar_t__ end; int start; } ;
struct gart_device {int iommu; int savedata; int dom_lock; int pte_lock; scalar_t__ iovmm_end; int iovmm_base; scalar_t__ regs; struct device* dev; } ;
struct device {int fwnode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct gart_device* FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct gart_device*,int *) ;
 struct gart_device* VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,struct device*,int *,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct gart_device*) ;
 struct gart_device* FUNC_11 (int,int ) ;
 struct resource* FUNC_12 (int ,int ,int) ;
 int FUNC_13 (struct resource*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (int) ;

struct gart_device *FUNC_17(struct device *VAR_10, struct tegra_mc *VAR_11)
{
 struct gart_device *VAR_12;
 struct resource *VAR_13;
 int VAR_14;

 FUNC_0(VAR_7 != VAR_2);


 VAR_13 = FUNC_12(FUNC_15(VAR_10), VAR_6, 1);
 if (!VAR_13) {
  FUNC_2(VAR_10, "Memory aperture resource unavailable\n");
  return FUNC_1(-VAR_1);
 }

 VAR_12 = FUNC_11(sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  return FUNC_1(-VAR_0);

 VAR_8 = VAR_12;

 VAR_12->dev = VAR_10;
 VAR_12->regs = VAR_11->regs + VAR_4;
 VAR_12->iovmm_base = VAR_13->start;
 VAR_12->iovmm_end = VAR_13->end + 1;
 FUNC_14(&VAR_12->pte_lock);
 FUNC_14(&VAR_12->dom_lock);

 FUNC_3(VAR_12, ((void*)0));

 VAR_14 = FUNC_7(&VAR_12->iommu, VAR_10, ((void*)0), "gart");
 if (VAR_14)
  goto free_gart;

 FUNC_6(&VAR_12->iommu, &VAR_9);
 FUNC_5(&VAR_12->iommu, VAR_10->fwnode);

 VAR_14 = FUNC_4(&VAR_12->iommu);
 if (VAR_14)
  goto remove_sysfs;

 VAR_12->savedata = FUNC_16(FUNC_13(VAR_13) / VAR_3 *
     sizeof(u32));
 if (!VAR_12->savedata) {
  VAR_14 = -VAR_0;
  goto unregister_iommu;
 }

 return VAR_12;

unregister_iommu:
 FUNC_9(&VAR_12->iommu);
remove_sysfs:
 FUNC_8(&VAR_12->iommu);
free_gart:
 FUNC_10(VAR_12);

 return FUNC_1(VAR_14);
}
