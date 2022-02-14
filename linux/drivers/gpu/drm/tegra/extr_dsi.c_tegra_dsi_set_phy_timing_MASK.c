
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dsi {struct tegra_dsi* slave; } ;
struct mipi_dphy_timing {int hsexit; int hstrail; int hszero; int hsprepare; int clktrail; int clkpost; int clkzero; int lpx; int clkprepare; int clkpre; int taget; int tasure; int tago; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,unsigned long,int) ;
 int FUNC_1 (struct tegra_dsi*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_dsi *VAR_4,
         unsigned long VAR_5,
         const struct mipi_dphy_timing *VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6->hsexit, VAR_5, 1) << 24 |
  FUNC_0(VAR_6->hstrail, VAR_5, 0) << 16 |
  FUNC_0(VAR_6->hszero, VAR_5, 3) << 8 |
  FUNC_0(VAR_6->hsprepare, VAR_5, 1);
 FUNC_1(VAR_4, VAR_7, VAR_1);

 VAR_7 = FUNC_0(VAR_6->clktrail, VAR_5, 1) << 24 |
  FUNC_0(VAR_6->clkpost, VAR_5, 1) << 16 |
  FUNC_0(VAR_6->clkzero, VAR_5, 1) << 8 |
  FUNC_0(VAR_6->lpx, VAR_5, 1);
 FUNC_1(VAR_4, VAR_7, VAR_2);

 VAR_7 = FUNC_0(VAR_6->clkprepare, VAR_5, 1) << 16 |
  FUNC_0(VAR_6->clkpre, VAR_5, 1) << 8 |
  FUNC_0(0xff * VAR_5, VAR_5, 0) << 0;
 FUNC_1(VAR_4, VAR_7, VAR_3);

 VAR_7 = FUNC_0(VAR_6->taget, VAR_5, 1) << 16 |
  FUNC_0(VAR_6->tasure, VAR_5, 1) << 8 |
  FUNC_0(VAR_6->tago, VAR_5, 1);
 FUNC_1(VAR_4, VAR_7, VAR_0);

 if (VAR_4->slave)
  FUNC_2(VAR_4->slave, VAR_5, VAR_6);
}
