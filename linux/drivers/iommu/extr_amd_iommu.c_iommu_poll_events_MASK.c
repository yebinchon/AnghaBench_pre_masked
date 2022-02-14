
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amd_iommu {scalar_t__ mmio_base; scalar_t__ evt_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct amd_iommu*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct amd_iommu *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_4->mmio_base + VAR_2);
 VAR_6 = FUNC_1(VAR_4->mmio_base + VAR_3);

 while (VAR_5 != VAR_6) {
  FUNC_0(VAR_4, VAR_4->evt_buf + VAR_5);
  VAR_5 = (VAR_5 + VAR_0) % VAR_1;
 }

 FUNC_2(VAR_5, VAR_4->mmio_base + VAR_2);
}
