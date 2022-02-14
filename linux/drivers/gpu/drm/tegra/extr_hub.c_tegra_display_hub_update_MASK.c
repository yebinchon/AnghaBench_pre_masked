
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tegra_dc*,int ) ;
 int FUNC_5 (struct tegra_dc*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct tegra_dc *VAR_6)
{
 u32 VAR_7;

 FUNC_2(VAR_6->dev);

 VAR_7 = FUNC_4(VAR_6, VAR_2);
 VAR_7 &= ~VAR_5;
 FUNC_5(VAR_6, VAR_7, VAR_2);

 VAR_7 = FUNC_4(VAR_6, VAR_4);
 VAR_7 = FUNC_0(1) | FUNC_1(1);
 FUNC_5(VAR_6, VAR_7, VAR_4);

 FUNC_5(VAR_6, VAR_1, VAR_3);
 FUNC_4(VAR_6, VAR_3);
 FUNC_5(VAR_6, VAR_0, VAR_3);
 FUNC_4(VAR_6, VAR_3);

 FUNC_3(VAR_6->dev);
}
