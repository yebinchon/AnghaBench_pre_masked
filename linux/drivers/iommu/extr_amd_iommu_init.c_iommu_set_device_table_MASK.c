
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct amd_iommu {int * mmio_base; } ;
typedef int entry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int*,int) ;

__attribute__((used)) static void FUNC_3(struct amd_iommu *VAR_3)
{
 u64 VAR_4;

 FUNC_0(VAR_3->mmio_base == ((void*)0));

 VAR_4 = FUNC_1(VAR_1);
 VAR_4 |= (VAR_2 >> 12) - 1;
 FUNC_2(VAR_3->mmio_base + VAR_0,
   &VAR_4, sizeof(VAR_4));
}
