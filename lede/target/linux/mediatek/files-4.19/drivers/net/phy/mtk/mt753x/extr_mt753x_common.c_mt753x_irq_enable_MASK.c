
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsw_mt753x {int (* mii_read ) (struct gsw_mt753x*,int,int ) ;int phy_link_sts; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gsw_mt753x*,int ,int) ;
 int FUNC_2 (struct gsw_mt753x*,int,int ) ;

void FUNC_3(struct gsw_mt753x *VAR_4)
{
 u32 VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = VAR_4->mii_read(VAR_4, VAR_6, VAR_1);
  if (VAR_5 & VAR_0)
   VAR_4->phy_link_sts |= FUNC_0(VAR_6);
 }

 VAR_5 = FUNC_0(VAR_2) - 1;

 FUNC_1(VAR_4, VAR_3, VAR_5);
}
