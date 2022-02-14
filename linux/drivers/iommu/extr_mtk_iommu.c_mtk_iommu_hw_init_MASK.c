
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_iommu_data {int protect_base; int enable_4GB; int irq; int dev; int bclk; scalar_t__ base; TYPE_1__* plat_data; } ;
struct TYPE_2__ {scalar_t__ m4u_plat; scalar_t__ reset_axi; scalar_t__ has_vld_pa_rng; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int,int ,int ,int ,void*) ;
 int FUNC_6 (int) ;
 int VAR_26 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(const struct mtk_iommu_data *VAR_27)
{
 u32 VAR_28;
 int VAR_29;

 VAR_29 = FUNC_2(VAR_27->bclk);
 if (VAR_29) {
  FUNC_3(VAR_27->dev, "Failed to enable iommu bclk(%d)\n", VAR_29);
  return VAR_29;
 }

 if (VAR_27->plat_data->m4u_plat == VAR_17)
  VAR_28 = VAR_11 |
    VAR_13;
 else
  VAR_28 = VAR_12;
 FUNC_8(VAR_28, VAR_27->base + VAR_18);

 VAR_28 = VAR_8 |
  VAR_16 |
  VAR_14 |
  VAR_10 |
  VAR_15 |
  VAR_9;
 FUNC_8(VAR_28, VAR_27->base + VAR_20);

 VAR_28 = VAR_7 |
  VAR_3 |
  VAR_2 |
  VAR_1 |
  VAR_6 |
  VAR_4 |
  VAR_5;
 FUNC_8(VAR_28, VAR_27->base + VAR_21);

 if (VAR_27->plat_data->m4u_plat == VAR_17)
  VAR_28 = (VAR_27->protect_base >> 1) | (VAR_27->enable_4GB << 31);
 else
  VAR_28 = FUNC_6(VAR_27->protect_base) |
    FUNC_7(VAR_27->protect_base);
 FUNC_8(VAR_28, VAR_27->base + VAR_22);

 if (VAR_27->enable_4GB && VAR_27->plat_data->has_vld_pa_rng) {




  VAR_28 = FUNC_0(7, 4);
  FUNC_8(VAR_28, VAR_27->base + VAR_25);
 }
 FUNC_8(0, VAR_27->base + VAR_19);

 if (VAR_27->plat_data->reset_axi)
  FUNC_8(0, VAR_27->base + VAR_24);

 if (FUNC_5(VAR_27->dev, VAR_27->irq, VAR_26, 0,
        FUNC_4(VAR_27->dev), (void *)VAR_27)) {
  FUNC_8(0, VAR_27->base + VAR_23);
  FUNC_1(VAR_27->bclk);
  FUNC_3(VAR_27->dev, "Failed @ IRQ-%d Request\n", VAR_27->irq);
  return -VAR_0;
 }

 return 0;
}
