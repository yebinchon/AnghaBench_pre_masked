
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sdmmc_mux {int div_flags; } ;
struct clk_rate_request {unsigned long best_parent_rate; unsigned long rate; int max_rate; int min_rate; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long,unsigned long,int,int,int) ;
 unsigned long FUNC_2 (unsigned long,int ) ;
 unsigned long FUNC_3 (unsigned long,int ) ;
 struct tegra_sdmmc_mux* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_2,
     struct clk_rate_request *VAR_3)
{
 struct tegra_sdmmc_mux *VAR_4 = FUNC_4(VAR_2);
 int VAR_5;
 unsigned long VAR_6 = VAR_3->best_parent_rate;

 VAR_3->rate = FUNC_2(VAR_3->rate, VAR_3->min_rate);
 VAR_3->rate = FUNC_3(VAR_3->rate, VAR_3->max_rate);

 if (!VAR_3->rate)
  return VAR_6;

 VAR_5 = FUNC_1(VAR_3->rate, VAR_6, 8, 1, VAR_4->div_flags);
 if (VAR_5 < 0)
  VAR_5 = 0;

 if (VAR_4->div_flags & VAR_1)
  VAR_3->rate = FUNC_0(VAR_6 * VAR_0,
       VAR_5 + VAR_0);
 else
  VAR_3->rate = VAR_6 * VAR_0 / (VAR_5 + VAR_0);

 return 0;
}
