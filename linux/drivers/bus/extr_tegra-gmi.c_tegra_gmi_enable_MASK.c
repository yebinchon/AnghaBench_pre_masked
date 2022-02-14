
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gmi {scalar_t__ base; int snor_config; int snor_timing1; int snor_timing0; int rst; int dev; int clk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct tegra_gmi *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->clk);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4->dev, "failed to enable clock: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_2(VAR_4->rst);
 FUNC_4(2000, 4000);
 FUNC_3(VAR_4->rst);

 FUNC_5(VAR_4->snor_timing0, VAR_4->base + VAR_2);
 FUNC_5(VAR_4->snor_timing1, VAR_4->base + VAR_3);

 VAR_4->snor_config |= VAR_1;
 FUNC_5(VAR_4->snor_config, VAR_4->base + VAR_0);

 return 0;
}
