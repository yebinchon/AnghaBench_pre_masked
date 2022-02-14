
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct pasid_entry {int dummy; } ;
struct intel_iommu {int cap; int ecap; int agaw; int name; } ;
struct device {int dummy; } ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct pasid_entry*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct pasid_entry* FUNC_9 (struct device*,int) ;
 int FUNC_10 (struct intel_iommu*) ;
 int FUNC_11 (struct intel_iommu*,int ,int) ;
 int FUNC_12 (struct intel_iommu*,int ,int) ;
 int FUNC_13 (struct pasid_entry*) ;
 int FUNC_14 (struct pasid_entry*,int ) ;
 int FUNC_15 (struct pasid_entry*,int ) ;
 int FUNC_16 (struct pasid_entry*,int) ;
 int FUNC_17 (struct pasid_entry*,int ) ;
 int FUNC_18 (struct pasid_entry*,int) ;
 int FUNC_19 (struct pasid_entry*) ;
 int FUNC_20 (struct pasid_entry*) ;
 int FUNC_21 (struct pasid_entry*,int) ;
 int FUNC_22 (char*,int ) ;

int FUNC_23(struct intel_iommu *VAR_3,
      struct device *VAR_4, pgd_t *VAR_5,
      int VAR_6, u16 VAR_7, int VAR_8)
{
 struct pasid_entry *VAR_9;

 if (!FUNC_6(VAR_3->ecap)) {
  FUNC_22("No first level translation support on %s\n",
         VAR_3->name);
  return -VAR_0;
 }

 VAR_9 = FUNC_9(VAR_4, VAR_6);
 if (FUNC_0(!VAR_9))
  return -VAR_0;

 FUNC_13(VAR_9);


 FUNC_17(VAR_9, (u64)FUNC_1(VAR_5));
 if (VAR_8 & VAR_1) {
  if (!FUNC_8(VAR_3->ecap)) {
   FUNC_22("No supervisor request support on %s\n",
          VAR_3->name);
   return -VAR_0;
  }
  FUNC_20(VAR_9);
 }






 FUNC_15(VAR_9, VAR_7);
 FUNC_14(VAR_9, VAR_3->agaw);
 FUNC_18(VAR_9, !!FUNC_7(VAR_3->ecap));


 FUNC_21(VAR_9, 1);
 FUNC_19(VAR_9);

 if (!FUNC_5(VAR_3->ecap))
  FUNC_3(VAR_9, sizeof(*VAR_9));

 if (FUNC_2(VAR_3->cap)) {
  FUNC_12(VAR_3, VAR_7, VAR_6);
  FUNC_11(VAR_3, VAR_7, VAR_6);
 } else {
  FUNC_10(VAR_3);
 }

 return 0;
}
