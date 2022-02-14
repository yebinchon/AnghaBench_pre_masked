
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
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (struct tegra_sor*,int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct tegra_sor *VAR_5)
{
 unsigned long VAR_6, VAR_7;

 VAR_7 = VAR_4 + FUNC_0(250);


 while (FUNC_2(VAR_4, VAR_7)) {
  VAR_6 = FUNC_1(VAR_5, VAR_1);
  VAR_6 &= VAR_3;

  if (VAR_6 == VAR_2)
   return 0;

  FUNC_3(25, 100);
 }

 return -VAR_0;
}
