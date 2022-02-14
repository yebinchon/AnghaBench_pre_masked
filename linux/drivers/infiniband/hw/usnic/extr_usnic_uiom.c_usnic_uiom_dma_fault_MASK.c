
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,struct iommu_domain*,unsigned long,int) ;

__attribute__((used)) static int FUNC_2(struct iommu_domain *VAR_1,
    struct device *VAR_2,
    unsigned long VAR_3, int VAR_4,
    void *VAR_5)
{
 FUNC_1("Device %s iommu fault domain 0x%pK va 0x%lx flags 0x%x\n",
  FUNC_0(VAR_2),
  VAR_1, VAR_3, VAR_4);
 return -VAR_0;
}
