
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct amd_iommu {int dummy; } ;


 struct amd_iommu** VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct amd_iommu*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct amd_iommu *VAR_2;
 int VAR_3;

 if (!FUNC_0(VAR_1))
  return;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 < 0)
  return;

 VAR_2 = VAR_0[VAR_3];

 FUNC_3(VAR_1);
 FUNC_2(VAR_2);
}
