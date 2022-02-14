
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_drhd_unit {scalar_t__ iommu; scalar_t__ devices_cnt; scalar_t__ devices; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct dmar_drhd_unit*) ;

__attribute__((used)) static void FUNC_3(struct dmar_drhd_unit *VAR_0)
{
 if (VAR_0->devices && VAR_0->devices_cnt)
  FUNC_0(&VAR_0->devices, &VAR_0->devices_cnt);
 if (VAR_0->iommu)
  FUNC_1(VAR_0->iommu);
 FUNC_2(VAR_0);
}
