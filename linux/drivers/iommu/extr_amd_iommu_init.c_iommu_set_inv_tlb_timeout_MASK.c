
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amd_iommu {scalar_t__ mmio_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct amd_iommu *VAR_3, int VAR_4)
{
 u64 VAR_5;

 VAR_5 = FUNC_0(VAR_3->mmio_base + VAR_2);
 VAR_5 &= ~VAR_1;
 VAR_5 |= (VAR_4 << VAR_0) & VAR_1;
 FUNC_1(VAR_5, VAR_3->mmio_base + VAR_2);
}
