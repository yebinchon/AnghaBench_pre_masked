
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_sor {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (struct tegra_sor*,int ) ;
 int FUNC_2 (struct tegra_sor*) ;
 int FUNC_3 (struct tegra_sor*,unsigned long,int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct tegra_sor *VAR_10)
{
 unsigned long VAR_11, VAR_12;


 VAR_11 = FUNC_1(VAR_10, VAR_3);
 VAR_11 &= ~VAR_6;
 FUNC_3(VAR_10, VAR_11, VAR_3);
 FUNC_2(VAR_10);

 VAR_12 = VAR_9 + FUNC_0(250);

 while (FUNC_4(VAR_9, VAR_12)) {
  VAR_11 = FUNC_1(VAR_10, VAR_1);
  if (VAR_11 & VAR_2)
   break;
 }

 if ((VAR_11 & VAR_2) == 0)
  return -VAR_0;


 VAR_11 = FUNC_1(VAR_10, VAR_3);
 VAR_11 &= ~VAR_5;
 FUNC_3(VAR_10, VAR_11, VAR_3);
 FUNC_2(VAR_10);


 VAR_11 = FUNC_1(VAR_10, VAR_3);
 VAR_11 &= ~VAR_4;
 FUNC_3(VAR_10, VAR_11, VAR_3);
 FUNC_2(VAR_10);

 VAR_12 = VAR_9 + FUNC_0(250);

 while (FUNC_4(VAR_9, VAR_12)) {
  VAR_11 = FUNC_1(VAR_10, VAR_7);
  if ((VAR_11 & VAR_8) == 0)
   break;

  FUNC_5(25, 100);
 }

 if ((VAR_11 & VAR_8) != 0)
  return -VAR_0;

 return 0;
}
