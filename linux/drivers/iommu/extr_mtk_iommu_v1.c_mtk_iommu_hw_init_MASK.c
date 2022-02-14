
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_iommu_data {int protect_base; int irq; int dev; int bclk; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int,int ,int ,int ,void*) ;
 int VAR_16 ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(const struct mtk_iommu_data *VAR_17)
{
 u32 VAR_18;
 int VAR_19;

 VAR_19 = FUNC_2(VAR_17->bclk);
 if (VAR_19) {
  FUNC_3(VAR_17->dev, "Failed to enable iommu bclk(%d)\n", VAR_19);
  return VAR_19;
 }

 VAR_18 = VAR_9 | FUNC_0(2);
 FUNC_6(VAR_18, VAR_17->base + VAR_11);

 VAR_18 = VAR_8 |
  VAR_3 |
  VAR_2 |
  VAR_1 |
  VAR_6 |
  VAR_7 |
  VAR_5 |
  VAR_4;
 FUNC_6(VAR_18, VAR_17->base + VAR_13);


 FUNC_6(VAR_17->protect_base,
   VAR_17->base + VAR_14);

 FUNC_6(VAR_10, VAR_17->base + VAR_12);

 if (FUNC_5(VAR_17->dev, VAR_17->irq, VAR_16, 0,
        FUNC_4(VAR_17->dev), (void *)VAR_17)) {
  FUNC_6(0, VAR_17->base + VAR_15);
  FUNC_1(VAR_17->bclk);
  FUNC_3(VAR_17->dev, "Failed @ IRQ-%d Request\n", VAR_17->irq);
  return -VAR_0;
 }

 return 0;
}
