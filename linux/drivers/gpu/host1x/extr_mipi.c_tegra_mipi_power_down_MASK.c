
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_mipi {TYPE_1__* soc; int clk; } ;
struct TYPE_2__ {scalar_t__ needs_vclamp_ref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_mipi*,int ) ;
 int FUNC_2 (struct tegra_mipi*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct tegra_mipi *VAR_5)
{
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5->clk);
 if (VAR_7 < 0)
  return VAR_7;






 VAR_6 = FUNC_1(VAR_5, VAR_1);
 VAR_6 |= VAR_4;
 FUNC_2(VAR_5, VAR_6, VAR_1);







 VAR_6 = FUNC_1(VAR_5, VAR_0);

 if (VAR_5->soc->needs_vclamp_ref)
  VAR_6 &= ~VAR_2;

 VAR_6 |= VAR_3;
 FUNC_2(VAR_5, VAR_6, VAR_0);

 return 0;
}
