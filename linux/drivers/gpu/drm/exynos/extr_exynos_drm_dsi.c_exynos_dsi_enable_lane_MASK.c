
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_dsi {scalar_t__ lanes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct exynos_dsi*,int ) ;
 int FUNC_3 (struct exynos_dsi*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct exynos_dsi *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_2(VAR_2, VAR_0);
 VAR_4 |= (FUNC_1(VAR_2->lanes - 1) | VAR_1 |
   FUNC_0(VAR_3));
 FUNC_3(VAR_2, VAR_0, VAR_4);
}
