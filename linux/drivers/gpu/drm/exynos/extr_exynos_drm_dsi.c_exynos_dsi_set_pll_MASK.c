
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct exynos_dsi_driver_data {scalar_t__ has_freqband; scalar_t__ plltmr_reg; int * reg_values; } ;
struct exynos_dsi {unsigned long pll_clk_rate; int dev; scalar_t__ reg_base; struct exynos_dsi_driver_data* driver_data; } ;


 int FUNC_0 (unsigned long const*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

 size_t VAR_4 ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int ,char*) ;
 unsigned long FUNC_7 (struct exynos_dsi*,unsigned long,unsigned long,int *,int *,int *) ;
 int FUNC_8 (struct exynos_dsi*,int ) ;
 int FUNC_9 (struct exynos_dsi*,int ,int) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_11(struct exynos_dsi *VAR_5,
     unsigned long VAR_6)
{
 const struct exynos_dsi_driver_data *VAR_7 = VAR_5->driver_data;
 unsigned long VAR_8, VAR_9;
 int VAR_10;
 u8 VAR_11, VAR_12;
 u16 VAR_13;
 u32 VAR_14;

 VAR_8 = VAR_5->pll_clk_rate;
 VAR_9 = FUNC_7(VAR_5, VAR_8, VAR_6, &VAR_11, &VAR_13, &VAR_12);
 if (!VAR_9) {
  FUNC_6(VAR_5->dev,
   "failed to find PLL PMS for requested frequency\n");
  return 0;
 }
 FUNC_5(VAR_5->dev, "PLL freq %lu, (p %d, m %d, s %d)\n", VAR_9, VAR_11, VAR_13, VAR_12);

 FUNC_10(VAR_7->reg_values[VAR_4],
   VAR_5->reg_base + VAR_7->plltmr_reg);

 VAR_14 = VAR_1 | FUNC_3(VAR_11) | FUNC_2(VAR_13) | FUNC_4(VAR_12);

 if (VAR_7->has_freqband) {
  static const unsigned long VAR_15[] = {
   100 * 128, 120 * 128, 160 * 128, 200 * 128,
   270 * 128, 320 * 128, 390 * 128, 450 * 128,
   510 * 128, 560 * 128, 640 * 128, 690 * 128,
   770 * 128, 870 * 128, 950 * 128,
  };
  int VAR_16;

  for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_15); ++VAR_16)
   if (VAR_9 < VAR_15[VAR_16])
    break;

  FUNC_5(VAR_5->dev, "band %d\n", VAR_16);

  VAR_14 |= FUNC_1(VAR_16);
 }

 FUNC_9(VAR_5, VAR_0, VAR_14);

 VAR_10 = 1000;
 do {
  if (VAR_10-- == 0) {
   FUNC_6(VAR_5->dev, "PLL failed to stabilize\n");
   return 0;
  }
  VAR_14 = FUNC_8(VAR_5, VAR_3);
 } while ((VAR_14 & VAR_2) == 0);

 return VAR_9;
}
