
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pl08x_phy_chan {int reg_config; int reg_control; scalar_t__ ftdmac020; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pl08x_phy_chan *VAR_2)
{
 u32 VAR_3;


 if (VAR_2->ftdmac020) {
  VAR_3 = FUNC_0(VAR_2->reg_control);
  VAR_3 |= VAR_0;
  FUNC_1(VAR_3, VAR_2->reg_control);
  return;
 }


 VAR_3 = FUNC_0(VAR_2->reg_config);
 VAR_3 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_2->reg_config);
}
