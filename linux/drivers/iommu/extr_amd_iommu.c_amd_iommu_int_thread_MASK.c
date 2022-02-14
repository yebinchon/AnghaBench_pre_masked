
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amd_iommu {scalar_t__ mmio_base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct amd_iommu*) ;
 int FUNC_1 (struct amd_iommu*) ;
 int FUNC_2 (struct amd_iommu*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct amd_iommu *VAR_8 = (struct amd_iommu *) VAR_7;
 u32 VAR_9 = FUNC_4(VAR_8->mmio_base + VAR_4);

 while (VAR_9 & VAR_0) {

  FUNC_5(VAR_0,
   VAR_8->mmio_base + VAR_4);

  if (VAR_9 & VAR_2) {
   FUNC_3("Processing IOMMU Event Log\n");
   FUNC_0(VAR_8);
  }

  if (VAR_9 & VAR_5) {
   FUNC_3("Processing IOMMU PPR Log\n");
   FUNC_2(VAR_8);
  }
  VAR_9 = FUNC_4(VAR_8->mmio_base + VAR_4);
 }
 return VAR_1;
}
