
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amd_iommu {int flags; scalar_t__ mmio_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct amd_iommu *VAR_3)
{
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_3->mmio_base + VAR_2);
 if (VAR_4 & (1<<VAR_1))
  VAR_3->flags |= VAR_0;
}
