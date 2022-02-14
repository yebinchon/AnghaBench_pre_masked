
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_mipi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct tegra_mipi*,int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct tegra_mipi *VAR_5)
{
 unsigned long VAR_6 = VAR_4 + FUNC_0(250);
 u32 VAR_7;

 while (FUNC_2(VAR_4, VAR_6)) {
  VAR_7 = FUNC_1(VAR_5, VAR_1);
  if ((VAR_7 & VAR_2) == 0 &&
      (VAR_7 & VAR_3) != 0)
   return 0;

  FUNC_3(10, 50);
 }

 return -VAR_0;
}
