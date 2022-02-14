
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_iommu {int name; int reg_phys; int ecap; } ;
struct dmar_drhd_unit {int hdr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_iommu*) ;
 int FUNC_2 (struct intel_iommu*) ;
 int FUNC_3 (struct intel_iommu*) ;
 scalar_t__ FUNC_4 (int ,struct intel_iommu*) ;
 int FUNC_5 (struct intel_iommu*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct dmar_drhd_unit *VAR_1, struct intel_iommu *VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_9();

 if (VAR_4 && !FUNC_0(VAR_2->ecap)) {
  FUNC_7("DRHD %Lx: EIM not supported by DRHD, ecap %Lx\n",
   VAR_2->reg_phys, VAR_2->ecap);
  return -VAR_0;
 }

 if (FUNC_4(VAR_1->hdr, VAR_2)) {
  FUNC_8("DRHD %Lx: failed to parse managed IOAPIC/HPET\n",
   VAR_2->reg_phys);
  return -VAR_0;
 }




 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  FUNC_6("Failed to setup irq remapping for %s\n",
         VAR_2->name);
  FUNC_2(VAR_2);
  FUNC_5(VAR_2);
 } else {
  FUNC_3(VAR_2);
 }

 return VAR_3;
}
