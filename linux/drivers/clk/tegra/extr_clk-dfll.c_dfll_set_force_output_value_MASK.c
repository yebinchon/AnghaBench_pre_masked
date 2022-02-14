
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tegra_dfll {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_dfll*,int ) ;
 int FUNC_1 (struct tegra_dfll*) ;
 int FUNC_2 (struct tegra_dfll*,int,int ) ;

__attribute__((used)) static u32 FUNC_3(struct tegra_dfll *VAR_3, u8 VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3, VAR_0);

 VAR_5 = (VAR_5 & VAR_1) | (VAR_4 & VAR_2);
 FUNC_2(VAR_3, VAR_5, VAR_0);
 FUNC_1(VAR_3);

 return FUNC_0(VAR_3, VAR_0);
}
