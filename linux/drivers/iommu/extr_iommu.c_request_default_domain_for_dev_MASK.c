
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {int mutex; struct iommu_domain* default_domain; } ;
struct iommu_domain {unsigned long type; } ;
struct device {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct iommu_domain*,struct iommu_group*) ;
 struct iommu_domain* FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct device*,char*,char*) ;
 int FUNC_3 (struct iommu_domain*) ;
 int FUNC_4 (struct iommu_group*,struct device*) ;
 int FUNC_5 (struct iommu_group*) ;
 struct iommu_group* FUNC_6 (struct device*) ;
 int FUNC_7 (struct iommu_group*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct device *VAR_4, unsigned long VAR_5)
{
 struct iommu_domain *VAR_6;
 struct iommu_group *VAR_7;
 int VAR_8;


 VAR_7 = FUNC_6(VAR_4);
 if (!VAR_7)
  return -VAR_1;

 FUNC_8(&VAR_7->mutex);

 VAR_8 = 0;
 if (VAR_7->default_domain && VAR_7->default_domain->type == VAR_5)
  goto out;


 VAR_8 = -VAR_0;
 if (FUNC_5(VAR_7) != 1)
  goto out;

 VAR_8 = -VAR_2;
 VAR_6 = FUNC_1(VAR_4->bus, VAR_5);
 if (!VAR_6)
  goto out;


 VAR_8 = FUNC_0(VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_6);
  goto out;
 }

 FUNC_4(VAR_7, VAR_4);


 if (VAR_7->default_domain)
  FUNC_3(VAR_7->default_domain);
 VAR_7->default_domain = VAR_6;

 FUNC_2(VAR_4, "Using iommu %s mapping\n",
   VAR_5 == VAR_3 ? "dma" : "direct");

 VAR_8 = 0;
out:
 FUNC_9(&VAR_7->mutex);
 FUNC_7(VAR_7);

 return VAR_8;
}
