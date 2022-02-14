
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_iommu_domain {int domain; } ;
struct mtk_iommu_data {scalar_t__ base; int dev; struct mtk_iommu_domain* m4u_dom; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,char*,int ,int ,int ,unsigned int,unsigned int) ;
 int FUNC_3 (struct mtk_iommu_data*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct mtk_iommu_data *VAR_11 = VAR_10;
 struct mtk_iommu_domain *VAR_12 = VAR_11->m4u_dom;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17, VAR_18;


 VAR_13 = FUNC_4(VAR_11->base + VAR_4);
 VAR_15 = FUNC_4(VAR_11->base + VAR_5);

 VAR_15 &= VAR_1;
 VAR_16 = FUNC_4(VAR_11->base + VAR_8);
 VAR_14 = FUNC_4(VAR_11->base + VAR_7);
 VAR_17 = FUNC_0(VAR_14);
 VAR_18 = FUNC_1(VAR_14);





 if (FUNC_5(&VAR_12->domain, VAR_11->dev, VAR_15,
   VAR_2))
  FUNC_2(VAR_11->dev,
   "fault type=0x%x iova=0x%x pa=0x%x larb=%d port=%d\n",
   VAR_13, VAR_15, VAR_16,
   VAR_17, VAR_18);


 VAR_14 = FUNC_4(VAR_11->base + VAR_6);
 VAR_14 |= VAR_0;
 FUNC_6(VAR_14, VAR_11->base + VAR_6);

 FUNC_3(VAR_11);

 return VAR_3;
}
