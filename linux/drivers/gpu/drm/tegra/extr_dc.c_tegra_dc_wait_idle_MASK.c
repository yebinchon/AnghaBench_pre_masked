
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dc {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct tegra_dc*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct tegra_dc *VAR_2, unsigned long VAR_3)
{
 VAR_3 = VAR_1 + FUNC_1(VAR_3);

 while (FUNC_3(VAR_1, VAR_3)) {
  if (FUNC_2(VAR_2))
   return 0;

  FUNC_4(1000, 2000);
 }

 FUNC_0(VAR_2->dev, "timeout waiting for DC to become idle\n");
 return -VAR_0;
}
