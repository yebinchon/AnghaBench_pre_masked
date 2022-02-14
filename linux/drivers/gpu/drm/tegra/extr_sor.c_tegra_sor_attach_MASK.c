
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (struct tegra_sor*,int ) ;
 int FUNC_2 (struct tegra_sor*) ;
 int FUNC_3 (struct tegra_sor*,unsigned long,int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct tegra_sor *VAR_8)
{
 unsigned long VAR_9, VAR_10;


 VAR_9 = FUNC_1(VAR_8, VAR_1);
 VAR_9 |= VAR_3;
 VAR_9 |= VAR_4;
 FUNC_3(VAR_8, VAR_9, VAR_1);
 FUNC_2(VAR_8);


 VAR_9 = FUNC_1(VAR_8, VAR_1);
 VAR_9 |= VAR_2;
 FUNC_3(VAR_8, VAR_9, VAR_1);
 FUNC_2(VAR_8);

 VAR_10 = VAR_7 + FUNC_0(250);

 while (FUNC_4(VAR_7, VAR_10)) {
  VAR_9 = FUNC_1(VAR_8, VAR_5);
  if ((VAR_9 & VAR_6) != 0)
   return 0;

  FUNC_5(25, 100);
 }

 return -VAR_0;
}
