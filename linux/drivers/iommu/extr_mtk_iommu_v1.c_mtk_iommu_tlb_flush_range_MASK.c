
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mtk_iommu_data {scalar_t__ base; int dev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtk_iommu_data*) ;
 int FUNC_2 (scalar_t__,scalar_t__,int,int,int) ;
 int FUNC_3 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mtk_iommu_data *VAR_9,
    unsigned long VAR_10, size_t VAR_11)
{
 int VAR_12;
 u32 VAR_13;

 FUNC_3(VAR_1 | VAR_0,
  VAR_9->base + VAR_8);
 FUNC_3(VAR_10 & VAR_2,
  VAR_9->base + VAR_7);
 FUNC_3((VAR_10 + VAR_11 - 1) & VAR_2,
  VAR_9->base + VAR_6);
 FUNC_3(VAR_3, VAR_9->base + VAR_5);

 VAR_12 = FUNC_2(VAR_9->base + VAR_4,
    VAR_13, VAR_13 != 0, 10, 100000);
 if (VAR_12) {
  FUNC_0(VAR_9->dev,
    "Partial TLB flush timed out, falling back to full flush\n");
  FUNC_1(VAR_9);
 }

 FUNC_3(0, VAR_9->base + VAR_4);
}
