
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {scalar_t__ rbbmtimer_clk; scalar_t__ core_clk; int grp_clks; int nr_clocks; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct msm_gpu *VAR_0)
{
 FUNC_0(VAR_0->nr_clocks, VAR_0->grp_clks);






 if (VAR_0->core_clk)
  FUNC_1(VAR_0->core_clk, 27000000);

 if (VAR_0->rbbmtimer_clk)
  FUNC_1(VAR_0->rbbmtimer_clk, 0);

 return 0;
}
