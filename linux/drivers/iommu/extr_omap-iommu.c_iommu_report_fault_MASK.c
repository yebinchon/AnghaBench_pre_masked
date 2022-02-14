
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_iommu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap_iommu*,int ) ;
 int FUNC_1 (struct omap_iommu*,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(struct omap_iommu *VAR_3, u32 *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_1);
 VAR_5 &= VAR_2;
 if (!VAR_5) {
  *VAR_4 = 0;
  return 0;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_0);
 *VAR_4 = VAR_6;

 FUNC_1(VAR_3, VAR_5, VAR_1);

 return VAR_5;
}
