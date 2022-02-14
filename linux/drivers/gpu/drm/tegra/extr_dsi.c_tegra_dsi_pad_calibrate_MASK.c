
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dsi {int mipi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct tegra_dsi*) ;
 int FUNC_10 (struct tegra_dsi*,int,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct tegra_dsi *VAR_5)
{
 u32 VAR_6;





 FUNC_10(VAR_5, 0, VAR_0);
 FUNC_10(VAR_5, 0, VAR_1);
 FUNC_10(VAR_5, 0, VAR_2);
 FUNC_10(VAR_5, 0, VAR_3);
 FUNC_10(VAR_5, 0, VAR_4);


 FUNC_9(VAR_5);

 VAR_6 = FUNC_8(0x7) | FUNC_7(0x7) |
  FUNC_1(0x1) | FUNC_0(0x1) |
  FUNC_2(0x0);
 FUNC_10(VAR_5, VAR_6, VAR_2);

 VAR_6 = FUNC_4(0x3) | FUNC_6(0x3) |
  FUNC_3(0x03) | FUNC_5(0x3);
 FUNC_10(VAR_5, VAR_6, VAR_3);

 return FUNC_11(VAR_5->mipi);
}
