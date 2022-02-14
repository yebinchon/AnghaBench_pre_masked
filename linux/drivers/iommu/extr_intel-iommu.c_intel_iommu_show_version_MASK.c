
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_iommu {scalar_t__ reg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 struct intel_iommu* FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct intel_iommu *VAR_4 = FUNC_2(VAR_1);
 u32 VAR_5 = FUNC_3(VAR_4->reg + VAR_0);
 return FUNC_4(VAR_3, "%d:%d\n",
         FUNC_0(VAR_5), FUNC_1(VAR_5));
}
