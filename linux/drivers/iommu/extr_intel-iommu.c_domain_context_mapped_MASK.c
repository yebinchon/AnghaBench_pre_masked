
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_iommu {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct intel_iommu*,int ,int ) ;
 struct intel_iommu* FUNC_2 (struct device*,int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,struct intel_iommu*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2)
{
 struct intel_iommu *VAR_3;
 u8 VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_2, &VAR_4, &VAR_5);
 if (!VAR_3)
  return -VAR_0;

 if (!FUNC_0(VAR_2))
  return FUNC_1(VAR_3, VAR_4, VAR_5);

 return !FUNC_3(FUNC_4(VAR_2),
           VAR_1, VAR_3);
}
