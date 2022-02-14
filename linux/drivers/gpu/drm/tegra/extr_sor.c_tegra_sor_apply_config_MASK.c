
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_sor_config {int hblank_symbols; int vblank_symbols; scalar_t__ active_polarity; int active_frac; int active_count; int watermark; int tu_size; } ;
struct tegra_sor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (struct tegra_sor*,int ) ;
 int FUNC_5 (struct tegra_sor*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct tegra_sor *VAR_13,
       const struct tegra_sor_config *VAR_14)
{
 u32 VAR_15;

 VAR_15 = FUNC_4(VAR_13, VAR_11);
 VAR_15 &= ~VAR_12;
 VAR_15 |= FUNC_3(VAR_14->tu_size);
 FUNC_5(VAR_13, VAR_15, VAR_11);

 VAR_15 = FUNC_4(VAR_13, VAR_4);
 VAR_15 &= ~VAR_10;
 VAR_15 |= FUNC_2(VAR_14->watermark);

 VAR_15 &= ~VAR_5;
 VAR_15 |= FUNC_0(VAR_14->active_count);

 VAR_15 &= ~VAR_7;
 VAR_15 |= FUNC_1(VAR_14->active_frac);

 if (VAR_14->active_polarity)
  VAR_15 |= VAR_8;
 else
  VAR_15 &= ~VAR_8;

 VAR_15 |= VAR_6;
 VAR_15 |= VAR_9;
 FUNC_5(VAR_13, VAR_15, VAR_4);

 VAR_15 = FUNC_4(VAR_13, VAR_0);
 VAR_15 &= ~VAR_1;
 VAR_15 |= VAR_14->hblank_symbols & 0xffff;
 FUNC_5(VAR_13, VAR_15, VAR_0);

 VAR_15 = FUNC_4(VAR_13, VAR_2);
 VAR_15 &= ~VAR_3;
 VAR_15 |= VAR_14->vblank_symbols & 0xffff;
 FUNC_5(VAR_13, VAR_15, VAR_2);
}
