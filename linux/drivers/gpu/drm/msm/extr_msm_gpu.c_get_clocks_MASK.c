
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct msm_gpu {int nr_clocks; int grp_clks; void* rbbmtimer_clk; void* core_clk; } ;


 int FUNC_0 (int *,int *) ;
 void* FUNC_1 (int ,int,char*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0, struct msm_gpu *VAR_1)
{
 int VAR_2 = FUNC_0(&VAR_0->dev, &VAR_1->grp_clks);

 if (VAR_2 < 1) {
  VAR_1->nr_clocks = 0;
  return VAR_2;
 }

 VAR_1->nr_clocks = VAR_2;

 VAR_1->core_clk = FUNC_1(VAR_1->grp_clks,
  VAR_1->nr_clocks, "core");

 VAR_1->rbbmtimer_clk = FUNC_1(VAR_1->grp_clks,
  VAR_1->nr_clocks, "rbbmtimer");

 return 0;
}
