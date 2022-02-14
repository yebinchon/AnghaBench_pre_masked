
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int fast_rate; int grp_clks; int nr_clocks; scalar_t__ rbbmtimer_clk; scalar_t__ core_clk; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct msm_gpu *VAR_0)
{
 if (VAR_0->core_clk && VAR_0->fast_rate)
  FUNC_1(VAR_0->core_clk, VAR_0->fast_rate);


 if (VAR_0->rbbmtimer_clk)
  FUNC_1(VAR_0->rbbmtimer_clk, 19200000);

 return FUNC_0(VAR_0->nr_clocks, VAR_0->grp_clks);
}
