
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct omap_iommu_domain {int dev; } ;
struct omap_iommu {int name; int dev; struct iommu_domain* domain; } ;
struct iommu_domain {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__,scalar_t__*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (struct omap_iommu*,scalar_t__*) ;
 int FUNC_2 (struct omap_iommu*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__* FUNC_4 (struct omap_iommu*,scalar_t__) ;
 scalar_t__* FUNC_5 (scalar_t__*,scalar_t__) ;
 int FUNC_6 (struct iommu_domain*,int ,scalar_t__,int ) ;
 struct omap_iommu_domain* FUNC_7 (struct iommu_domain*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 u32 VAR_5, VAR_6;
 u32 *VAR_7, *VAR_8;
 struct omap_iommu *VAR_9 = VAR_4;
 struct iommu_domain *VAR_10 = VAR_9->domain;
 struct omap_iommu_domain *VAR_11 = FUNC_7(VAR_10);

 if (!VAR_11->dev)
  return VAR_1;

 VAR_6 = FUNC_1(VAR_9, &VAR_5);
 if (VAR_6 == 0)
  return VAR_0;


 if (!FUNC_6(VAR_10, VAR_9->dev, VAR_5, 0))
  return VAR_0;

 FUNC_2(VAR_9, 0, VAR_2);

 VAR_7 = FUNC_4(VAR_9, VAR_5);

 if (!FUNC_3(*VAR_7)) {
  FUNC_0(VAR_9->dev, "%s: errs:0x%08x da:0x%08x pgd:0x%p *pgd:px%08x\n",
   VAR_9->name, VAR_6, VAR_5, VAR_7, *VAR_7);
  return VAR_1;
 }

 VAR_8 = FUNC_5(VAR_7, VAR_5);

 FUNC_0(VAR_9->dev, "%s: errs:0x%08x da:0x%08x pgd:0x%p *pgd:0x%08x pte:0x%p *pte:0x%08x\n",
  VAR_9->name, VAR_6, VAR_5, VAR_7, *VAR_7, VAR_8, *VAR_8);

 return VAR_1;
}
