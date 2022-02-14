
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_dsi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct exynos_dsi*,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct exynos_dsi *VAR_3)
{
 int VAR_4 = 2000;

 do {
  u32 VAR_5 = FUNC_1(VAR_3, VAR_0);

  if (!(VAR_5 & VAR_1))
   return 0;

  if (!FUNC_0())
   FUNC_2(950, 1050);
 } while (--VAR_4);

 return -VAR_2;
}
