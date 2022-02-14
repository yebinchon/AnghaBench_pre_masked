
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_ops {struct iommu_group* (* device_group ) (struct device*) ;} ;
struct iommu_group {struct iommu_domain* domain; struct iommu_domain* default_domain; } ;
struct iommu_domain {int dummy; } ;
struct device {TYPE_1__* bus; } ;
struct TYPE_2__ {struct iommu_ops* iommu_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iommu_group* FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct iommu_group*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct iommu_domain* FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (struct device*,char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct iommu_domain*,int ,int*) ;
 int FUNC_6 (struct iommu_group*,struct device*) ;
 struct iommu_group* FUNC_7 (struct device*) ;
 int FUNC_8 (struct iommu_group*) ;
 struct iommu_group* FUNC_9 (struct device*) ;

struct iommu_group *FUNC_10(struct device *VAR_5)
{
 const struct iommu_ops *VAR_6 = VAR_5->bus->iommu_ops;
 struct iommu_group *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7)
  return VAR_7;

 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_7 = VAR_6->device_group(VAR_5);
 if (FUNC_2(VAR_7 == ((void*)0)))
  return FUNC_0(-VAR_1);

 if (FUNC_1(VAR_7))
  return VAR_7;





 if (!VAR_7->default_domain) {
  struct iommu_domain *VAR_9;

  VAR_9 = FUNC_3(VAR_5->bus, VAR_3);
  if (!VAR_9 && VAR_3 != VAR_2) {
   VAR_9 = FUNC_3(VAR_5->bus, VAR_2);
   if (VAR_9) {
    FUNC_4(VAR_5,
      "failed to allocate default IOMMU domain of type %u; falling back to IOMMU_DOMAIN_DMA",
      VAR_3);
   }
  }

  VAR_7->default_domain = VAR_9;
  if (!VAR_7->domain)
   VAR_7->domain = VAR_9;

  if (VAR_9 && !VAR_4) {
   int VAR_10 = 1;
   FUNC_5(VAR_9,
           VAR_0,
           &VAR_10);
  }
 }

 VAR_8 = FUNC_6(VAR_7, VAR_5);
 if (VAR_8) {
  FUNC_8(VAR_7);
  return FUNC_0(VAR_8);
 }

 return VAR_7;
}
