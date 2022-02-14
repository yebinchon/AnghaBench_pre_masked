
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct intel_iommu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (int ,int*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct intel_iommu *VAR_1, int VAR_2,
  u8 VAR_3, int VAR_4, u16 VAR_5,
  unsigned long long VAR_6)
{
 const char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_3, &VAR_8);

 if (VAR_8 == VAR_0)
  FUNC_3("[INTR-REMAP] Request device [%02x:%02x.%d] fault index %llx [fault reason %02d] %s\n",
   VAR_5 >> 8, FUNC_1(VAR_5 & 0xFF),
   FUNC_0(VAR_5 & 0xFF), VAR_6 >> 48,
   VAR_3, VAR_7);
 else
  FUNC_3("[%s] Request device [%02x:%02x.%d] PASID %x fault addr %llx [fault reason %02d] %s\n",
         VAR_2 ? "DMA Read" : "DMA Write",
         VAR_5 >> 8, FUNC_1(VAR_5 & 0xFF),
         FUNC_0(VAR_5 & 0xFF), VAR_4, VAR_6,
         VAR_3, VAR_7);
 return 0;
}
