
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ phy_interface_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(phy_interface_t VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_0);
 VAR_6 &= ~VAR_1;
 if (VAR_5 == VAR_4)
  VAR_6 |= VAR_2;
 else
  VAR_6 |= VAR_3;
 FUNC_1(VAR_6, VAR_0);
}
