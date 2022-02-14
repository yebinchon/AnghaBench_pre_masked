
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dsi {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (struct tegra_dsi*,int ) ;
 int FUNC_3 (struct tegra_dsi*,int,int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct tegra_dsi *VAR_4, unsigned long VAR_5)
{
 FUNC_3(VAR_4, VAR_1, VAR_0);

 VAR_5 = VAR_3 + FUNC_1(VAR_5);

 while (FUNC_4(VAR_3, VAR_5)) {
  u32 VAR_6 = FUNC_2(VAR_4, VAR_0);
  if ((VAR_6 & VAR_1) == 0)
   return 0;

  FUNC_5(1000, 2000);
 }

 FUNC_0("timeout waiting for transmission to complete\n");
 return -VAR_2;
}
