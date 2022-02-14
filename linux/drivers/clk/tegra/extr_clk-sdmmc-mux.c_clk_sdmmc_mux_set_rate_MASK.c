
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct tegra_sdmmc_mux {scalar_t__ lock; int reg; int div_flags; } ;
struct clk_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (unsigned long,unsigned long,int,int,int ) ;
 int FUNC_2 (int,int ) ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 struct tegra_sdmmc_mux* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_3, unsigned long VAR_4,
      unsigned long VAR_5)
{
 struct tegra_sdmmc_mux *VAR_6 = FUNC_5(VAR_3);
 int VAR_7;
 unsigned long VAR_8 = 0;
 u32 VAR_9;
 u8 VAR_10;

 VAR_7 = FUNC_1(VAR_4, VAR_5, 8, 1, VAR_6->div_flags);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6->lock)
  FUNC_3(VAR_6->lock, VAR_8);

 VAR_10 = FUNC_0(VAR_3);
 if (VAR_7)
  VAR_10 = VAR_2[VAR_10];
 else
  VAR_10 = VAR_1[VAR_10];

 VAR_9 = VAR_10 << VAR_0;
 VAR_9 |= VAR_7;
 FUNC_6(VAR_9, VAR_6->reg);
 FUNC_2(2, VAR_6->reg);

 if (VAR_6->lock)
  FUNC_4(VAR_6->lock, VAR_8);

 return 0;
}
