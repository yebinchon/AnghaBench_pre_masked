
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag71xx_mdio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ag71xx_mdio*,int ) ;
 int FUNC_2 (struct ag71xx_mdio*) ;
 int FUNC_3 (struct ag71xx_mdio*,int ,int) ;

int FUNC_4(struct ag71xx_mdio *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9)
  return 0xffff;

 FUNC_3(VAR_6, VAR_1, VAR_5);
 FUNC_3(VAR_6, VAR_0,
   ((VAR_7 & 0xff) << VAR_3) | (VAR_8 & 0xff));
 FUNC_3(VAR_6, VAR_1, VAR_4);

 VAR_9 = FUNC_2(VAR_6);
 if (VAR_9)
  return 0xffff;

 VAR_10 = FUNC_1(VAR_6, VAR_2) & 0xffff;
 FUNC_3(VAR_6, VAR_1, VAR_5);

 FUNC_0("mii_read: addr=%04x, reg=%04x, value=%04x\n", VAR_7, VAR_8, VAR_10);

 return VAR_10;
}
