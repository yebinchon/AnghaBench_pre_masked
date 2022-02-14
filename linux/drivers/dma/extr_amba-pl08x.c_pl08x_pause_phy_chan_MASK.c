
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pl08x_phy_chan {int id; int reg_config; int reg_control; scalar_t__ ftdmac020; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pl08x_phy_chan*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct pl08x_phy_chan *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 if (VAR_2->ftdmac020) {

  VAR_3 = FUNC_2(VAR_2->reg_control);
  VAR_3 &= ~VAR_0;
  FUNC_4(VAR_3, VAR_2->reg_control);
  return;
 }


 VAR_3 = FUNC_2(VAR_2->reg_config);
 VAR_3 |= VAR_1;
 FUNC_4(VAR_3, VAR_2->reg_config);


 for (VAR_4 = 1000; VAR_4; VAR_4--) {
  if (!FUNC_0(VAR_2))
   break;
  FUNC_3(1);
 }
 if (FUNC_0(VAR_2))
  FUNC_1("pl08x: channel%u timeout waiting for pause\n", VAR_2->id);
}
