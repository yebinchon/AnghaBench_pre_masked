
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_iommu_domain {int domain; } ;
struct mtk_iommu_data {scalar_t__ base; int dev; TYPE_1__* plat_data; struct mtk_iommu_domain* m4u_dom; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned int* larbid_remap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int ,char*,int,int,int,unsigned int,unsigned int,int,char*) ;
 int FUNC_3 (struct mtk_iommu_data*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_15, void *VAR_16)
{
 struct mtk_iommu_data *VAR_17 = VAR_16;
 struct mtk_iommu_domain *VAR_18 = VAR_17->m4u_dom;
 u32 VAR_19, VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23, VAR_24;
 bool VAR_25, VAR_26;


 VAR_19 = FUNC_4(VAR_17->base + VAR_13);
 if (VAR_19 & VAR_3) {
  VAR_20 = FUNC_4(VAR_17->base + VAR_8);
  VAR_21 = FUNC_4(VAR_17->base + VAR_7);
  VAR_22 = FUNC_4(VAR_17->base + VAR_9);
 } else {
  VAR_20 = FUNC_4(VAR_17->base + VAR_11);
  VAR_21 = FUNC_4(VAR_17->base + VAR_10);
  VAR_22 = FUNC_4(VAR_17->base + VAR_12);
 }
 VAR_25 = VAR_21 & VAR_1;
 VAR_26 = VAR_21 & VAR_2;
 VAR_23 = FUNC_0(VAR_20);
 VAR_24 = FUNC_1(VAR_20);

 VAR_23 = VAR_17->plat_data->larbid_remap[VAR_23];

 if (FUNC_5(&VAR_18->domain, VAR_17->dev, VAR_21,
          VAR_26 ? VAR_5 : VAR_4)) {
  FUNC_2(
   VAR_17->dev,
   "fault type=0x%x iova=0x%x pa=0x%x larb=%d port=%d layer=%d %s\n",
   VAR_19, VAR_21, VAR_22, VAR_23, VAR_24,
   VAR_25, VAR_26 ? "write" : "read");
 }


 VAR_20 = FUNC_4(VAR_17->base + VAR_14);
 VAR_20 |= VAR_0;
 FUNC_6(VAR_20, VAR_17->base + VAR_14);

 FUNC_3(VAR_17);

 return VAR_6;
}
