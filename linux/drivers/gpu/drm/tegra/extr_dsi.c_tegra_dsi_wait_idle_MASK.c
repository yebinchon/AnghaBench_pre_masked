
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dsi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct tegra_dsi*,int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct tegra_dsi *VAR_4, unsigned long VAR_5)
{
 u32 VAR_6;

 VAR_5 = VAR_3 + FUNC_0(VAR_5);

 while (FUNC_2(VAR_3, VAR_5)) {
  VAR_6 = FUNC_1(VAR_4, VAR_0);
  if (VAR_6 & VAR_1)
   return 0;

  FUNC_3(1000, 2000);
 }

 return -VAR_2;
}
