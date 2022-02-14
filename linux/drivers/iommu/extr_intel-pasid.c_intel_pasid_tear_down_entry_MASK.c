
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pasid_entry {int dummy; } ;
struct intel_iommu {int cap; int ecap; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pasid_entry*,int) ;
 int FUNC_3 (struct intel_iommu*,struct device*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int) ;
 struct pasid_entry* FUNC_6 (struct device*,int) ;
 int FUNC_7 (struct intel_iommu*,int ,int) ;
 int FUNC_8 (struct intel_iommu*,int ,int) ;
 int FUNC_9 (struct pasid_entry*) ;

void FUNC_10(struct intel_iommu *VAR_0,
     struct device *VAR_1, int VAR_2)
{
 struct pasid_entry *VAR_3;
 u16 VAR_4;

 VAR_3 = FUNC_6(VAR_1, VAR_2);
 if (FUNC_0(!VAR_3))
  return;

 VAR_4 = FUNC_9(VAR_3);
 FUNC_5(VAR_1, VAR_2);

 if (!FUNC_4(VAR_0->ecap))
  FUNC_2(VAR_3, sizeof(*VAR_3));

 FUNC_8(VAR_0, VAR_4, VAR_2);
 FUNC_7(VAR_0, VAR_4, VAR_2);


 if (!FUNC_1(VAR_0->cap))
  FUNC_3(VAR_0, VAR_1, VAR_2);
}
