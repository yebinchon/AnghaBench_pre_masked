
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_iommu {TYPE_1__* ir_table; int cap; int ecap; } ;
struct dmar_drhd_unit {struct intel_iommu* iommu; } ;
struct TYPE_2__ {int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dmar_drhd_unit*,struct intel_iommu*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_iommu*) ;
 int FUNC_5 (struct intel_iommu*) ;
 int FUNC_6 (struct intel_iommu*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_4 ;

int FUNC_8(struct dmar_drhd_unit *VAR_5, bool VAR_6)
{
 int VAR_7 = 0;
 struct intel_iommu *VAR_8 = VAR_5->iommu;

 if (!VAR_4)
  return 0;
 if (VAR_8 == ((void*)0))
  return -VAR_1;
 if (!FUNC_3(VAR_8->ecap))
  return 0;
 if (FUNC_7(VAR_3) &&
     !FUNC_1(VAR_8->cap))
  return -VAR_0;

 if (VAR_6) {
  if (!VAR_8->ir_table)
   VAR_7 = FUNC_2(VAR_5, VAR_8);
 } else {
  if (VAR_8->ir_table) {
   if (!FUNC_0(VAR_8->ir_table->bitmap,
       VAR_2)) {
    VAR_7 = -VAR_0;
   } else {
    FUNC_5(VAR_8);
    FUNC_4(VAR_8);
    FUNC_6(VAR_8);
   }
  }
 }

 return VAR_7;
}
