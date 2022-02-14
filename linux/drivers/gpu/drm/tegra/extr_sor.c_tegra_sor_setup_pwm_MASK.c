
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_sor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct tegra_sor*,int ) ;
 int FUNC_2 (struct tegra_sor*,int,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct tegra_sor *VAR_8, unsigned long VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_8, VAR_5);
 VAR_10 &= ~VAR_6;
 VAR_10 |= 0x400;
 FUNC_2(VAR_8, VAR_10, VAR_5);

 VAR_10 = FUNC_1(VAR_8, VAR_1);
 VAR_10 &= ~VAR_3;
 VAR_10 |= 0x400;
 VAR_10 &= ~VAR_2;
 VAR_10 |= VAR_4;
 FUNC_2(VAR_8, VAR_10, VAR_1);

 VAR_9 = VAR_7 + FUNC_0(VAR_9);

 while (FUNC_3(VAR_7, VAR_9)) {
  VAR_10 = FUNC_1(VAR_8, VAR_1);
  if ((VAR_10 & VAR_4) == 0)
   return 0;

  FUNC_4(25, 100);
 }

 return -VAR_0;
}
