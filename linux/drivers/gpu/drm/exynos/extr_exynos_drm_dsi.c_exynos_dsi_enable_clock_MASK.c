
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_dsi {int lanes; int dev; int esc_clk_rate; int burst_clk_rate; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (unsigned long) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,char*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct exynos_dsi*,int ) ;
 unsigned long FUNC_8 (struct exynos_dsi*,int ) ;
 int FUNC_9 (struct exynos_dsi*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct exynos_dsi *VAR_11)
{
 unsigned long VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15;
 u32 VAR_16;

 VAR_12 = FUNC_8(VAR_11, VAR_11->burst_clk_rate);
 if (!VAR_12) {
  FUNC_6(VAR_11->dev, "failed to configure DSI PLL\n");
  return -VAR_9;
 }

 VAR_13 = VAR_12 / 8;
 VAR_15 = FUNC_1(VAR_13, VAR_11->esc_clk_rate);
 VAR_14 = VAR_13 / VAR_15;

 if (VAR_14 > 20 * VAR_10) {
  ++VAR_15;
  VAR_14 = VAR_13 / VAR_15;
 }

 FUNC_5(VAR_11->dev, "hs_clk = %lu, byte_clk = %lu, esc_clk = %lu\n",
  VAR_12, VAR_13, VAR_14);

 VAR_16 = FUNC_7(VAR_11, VAR_2);
 VAR_16 &= ~(VAR_4 | VAR_5
   | VAR_6 | VAR_7
   | VAR_1);
 VAR_16 |= VAR_3 | VAR_0
   | FUNC_3(VAR_15)
   | VAR_5
   | FUNC_4(FUNC_0(VAR_11->lanes) - 1)
   | FUNC_2(0)
   | VAR_8;
 FUNC_9(VAR_11, VAR_2, VAR_16);

 return 0;
}
