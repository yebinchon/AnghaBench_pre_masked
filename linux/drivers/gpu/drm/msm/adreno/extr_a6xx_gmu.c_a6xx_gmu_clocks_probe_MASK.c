
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a6xx_gmu {int nr_clocks; int clocks; int core_clk; int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int,char*) ;

__attribute__((used)) static int FUNC_2(struct a6xx_gmu *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->dev, &VAR_0->clocks);

 if (VAR_1 < 1)
  return VAR_1;

 VAR_0->nr_clocks = VAR_1;

 VAR_0->core_clk = FUNC_1(VAR_0->clocks,
  VAR_0->nr_clocks, "gmu");

 return 0;
}
