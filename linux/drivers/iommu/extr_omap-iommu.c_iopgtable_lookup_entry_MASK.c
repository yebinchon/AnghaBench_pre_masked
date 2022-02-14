
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_iommu {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (struct omap_iommu*,int ) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct omap_iommu *VAR_0, u32 VAR_1, u32 **VAR_2, u32 **VAR_3)
{
 u32 *VAR_4, *VAR_5 = ((void*)0);

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (!*VAR_4)
  goto out;

 if (FUNC_0(*VAR_4))
  VAR_5 = FUNC_2(VAR_4, VAR_1);
out:
 *VAR_2 = VAR_4;
 *VAR_3 = VAR_5;
}
