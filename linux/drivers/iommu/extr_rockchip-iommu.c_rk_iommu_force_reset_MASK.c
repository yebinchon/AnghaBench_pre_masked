
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rk_iommu {int num_mmu; int dev; int * bases; scalar_t__ reset_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct rk_iommu*,int,int,int ,int ) ;
 int FUNC_2 (struct rk_iommu*,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct rk_iommu *VAR_8)
{
 int VAR_9, VAR_10;
 u32 VAR_11;
 bool VAR_12;

 if (VAR_8->reset_disabled)
  return 0;





 for (VAR_10 = 0; VAR_10 < VAR_8->num_mmu; VAR_10++) {
  FUNC_4(VAR_8->bases[VAR_10], VAR_4, VAR_0);

  VAR_11 = FUNC_3(VAR_8->bases[VAR_10], VAR_4);
  if (VAR_11 != (VAR_0 & VAR_2)) {
   FUNC_0(VAR_8->dev, "Error during raw reset. MMU_DTE_ADDR is not functioning\n");
   return -VAR_1;
  }
 }

 FUNC_2(VAR_8, VAR_3);

 VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_12,
     VAR_12, VAR_5,
     VAR_6);
 if (VAR_9) {
  FUNC_0(VAR_8->dev, "FORCE_RESET command timed out\n");
  return VAR_9;
 }

 return 0;
}
