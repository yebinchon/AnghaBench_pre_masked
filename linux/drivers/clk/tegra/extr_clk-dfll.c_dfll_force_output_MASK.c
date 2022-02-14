
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dfll {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct tegra_dfll*,int) ;
 int FUNC_1 (struct tegra_dfll*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct tegra_dfll *VAR_4, unsigned int VAR_5)
{
 u32 VAR_6;

 if (VAR_5 > VAR_3)
  return -VAR_2;

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if ((VAR_4->mode < VAR_0) &&
     !(VAR_6 & VAR_1)) {
  FUNC_0(VAR_4, 1);
 }

 return 0;
}
