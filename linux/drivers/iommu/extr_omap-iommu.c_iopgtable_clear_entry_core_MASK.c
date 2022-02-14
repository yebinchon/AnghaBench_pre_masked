
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_iommu {int pd_dma; int dev; } ;
typedef int dma_addr_t ;
typedef int da ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned long,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int* FUNC_3 (struct omap_iommu*,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (struct omap_iommu*,int*,int) ;
 int FUNC_6 (int) ;
 int* FUNC_7 (int*,int) ;
 int FUNC_8 (int*,int ,int) ;

__attribute__((used)) static size_t FUNC_9(struct omap_iommu *VAR_7, u32 VAR_8)
{
 size_t VAR_9;
 u32 *VAR_10 = FUNC_3(VAR_7, VAR_8);
 int VAR_11 = 1;
 dma_addr_t VAR_12;
 unsigned long VAR_13 = FUNC_1(VAR_8) * sizeof(VAR_8);
 unsigned long VAR_14 = FUNC_6(VAR_8) * sizeof(VAR_8);

 if (!*VAR_10)
  return 0;

 if (FUNC_2(*VAR_10)) {
  int VAR_15;
  u32 *VAR_16 = FUNC_7(VAR_10, VAR_8);

  VAR_9 = VAR_4;
  if (*VAR_16 & VAR_3) {
   VAR_11 *= 16;

   VAR_16 = FUNC_7(VAR_10, (VAR_8 & VAR_0));
  }
  VAR_9 *= VAR_11;
  FUNC_8(VAR_16, 0, VAR_11 * sizeof(*VAR_16));
  VAR_12 = FUNC_4(VAR_10);
  FUNC_0(VAR_7->dev, VAR_12, VAR_14, VAR_11);




  VAR_16 = FUNC_7(VAR_10, 0);
  for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++)
   if (VAR_16[VAR_15])
    goto out;

  FUNC_5(VAR_7, VAR_16, 1);
  VAR_11 = 1;
 } else {
  VAR_9 = VAR_1;
  if ((*VAR_10 & VAR_2) == VAR_2) {
   VAR_11 *= 16;

   VAR_10 = FUNC_3(VAR_7, (VAR_8 & VAR_5));
  }
  VAR_9 *= VAR_11;
 }
 FUNC_8(VAR_10, 0, VAR_11 * sizeof(*VAR_10));
 FUNC_0(VAR_7->dev, VAR_7->pd_dma, VAR_13, VAR_11);
out:
 return VAR_9;
}
