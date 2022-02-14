
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ag71xx_mdio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int VAR_2 ;
 int FUNC_1 (struct ag71xx_mdio*) ;
 int FUNC_2 (struct ag71xx_mdio*,int ,int) ;

void FUNC_3(struct ag71xx_mdio *VAR_3, int VAR_4, int VAR_5, u16 VAR_6)
{
 FUNC_0("mii_write: addr=%04x, reg=%04x, value=%04x\n", VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_3, VAR_0,
   ((VAR_4 & 0xff) << VAR_2) | (VAR_5 & 0xff));
 FUNC_2(VAR_3, VAR_1, VAR_6);

 FUNC_1(VAR_3);
}
