
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u8 ;
typedef unsigned long long u64 ;
struct amd_iommu {scalar_t__ mmio_base; } ;


 scalar_t__ VAR_0 ;
 unsigned long long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct amd_iommu *VAR_1, u8 VAR_2)
{
 u64 VAR_3;

 VAR_3 = FUNC_0(VAR_1->mmio_base + VAR_0);
 VAR_3 |= (1ULL << VAR_2);
 FUNC_1(VAR_3, VAR_1->mmio_base + VAR_0);
}
