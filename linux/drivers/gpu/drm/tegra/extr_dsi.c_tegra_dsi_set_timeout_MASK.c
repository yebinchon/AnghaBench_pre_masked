
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_dsi {struct tegra_dsi* slave; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int FUNC_7 (struct tegra_dsi*,int,int ) ;

__attribute__((used)) static void FUNC_8(struct tegra_dsi *VAR_3, unsigned long VAR_4,
      unsigned int VAR_5)
{
 unsigned int VAR_6;
 u32 VAR_7;


 VAR_6 = (VAR_4 / VAR_5) / 512;
 VAR_7 = FUNC_4(0x2000) | FUNC_3(VAR_6);
 FUNC_7(VAR_3, VAR_7, VAR_0);


 VAR_6 = 2 * VAR_4 / 512 * 1000;
 VAR_7 = FUNC_5(VAR_6) | FUNC_6(0x2000);
 FUNC_7(VAR_3, VAR_7, VAR_1);

 VAR_7 = FUNC_2(0) | FUNC_1(0) | FUNC_0(0);
 FUNC_7(VAR_3, VAR_7, VAR_2);

 if (VAR_3->slave)
  FUNC_8(VAR_3->slave, VAR_4, VAR_5);
}
