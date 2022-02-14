
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_iommu {int num_mmu; int * bases; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (scalar_t__ (*) (struct rk_iommu*),struct rk_iommu*,int,int,int ,int ) ;
 int FUNC_2 (struct rk_iommu*,int ) ;
 int FUNC_3 (struct rk_iommu*) ;
 scalar_t__ FUNC_4 (struct rk_iommu*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct rk_iommu *VAR_4)
{
 int VAR_5, VAR_6;
 bool VAR_7;

 if (FUNC_4(VAR_4))
  return 0;


 if (!FUNC_3(VAR_4))
  return 0;

 FUNC_2(VAR_4, VAR_0);

 VAR_5 = FUNC_1(FUNC_4, VAR_4, VAR_7,
     VAR_7, VAR_1,
     VAR_2);
 if (VAR_5)
  for (VAR_6 = 0; VAR_6 < VAR_4->num_mmu; VAR_6++)
   FUNC_0(VAR_4->dev, "Enable stall request timed out, status: %#08x\n",
    FUNC_5(VAR_4->bases[VAR_6], VAR_3));

 return VAR_5;
}
