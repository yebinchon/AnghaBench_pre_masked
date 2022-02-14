
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct tegra_dsi {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (struct tegra_dsi*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct tegra_dsi *VAR_3,
           unsigned long VAR_4)
{
 VAR_4 = VAR_2 + FUNC_1(250);

 while (FUNC_3(VAR_2, VAR_4)) {
  u32 VAR_5 = FUNC_2(VAR_3, VAR_0);
  u8 VAR_6 = VAR_5 & 0x1f;

  if (VAR_6 > 0)
   return VAR_6;

  FUNC_4(1000, 2000);
 }

 FUNC_0("peripheral returned no data\n");
 return -VAR_1;
}
