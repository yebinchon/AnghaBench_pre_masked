
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int cap; int domain_ids; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct intel_iommu* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct intel_iommu *VAR_3 = FUNC_2(VAR_0);
 return FUNC_3(VAR_2, "%d\n", FUNC_0(VAR_3->domain_ids,
        FUNC_1(VAR_3->cap)));
}
