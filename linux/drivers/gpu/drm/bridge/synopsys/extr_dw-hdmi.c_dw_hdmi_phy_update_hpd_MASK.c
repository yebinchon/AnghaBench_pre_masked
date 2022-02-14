
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dw_hdmi {int phy_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dw_hdmi*,int ,int ) ;

void FUNC_1(struct dw_hdmi *VAR_2, void *VAR_3,
       bool VAR_4, bool VAR_5, bool VAR_6)
{
 u8 VAR_7 = VAR_2->phy_mask;

 if (VAR_4 || VAR_5 || !VAR_6)
  VAR_2->phy_mask |= VAR_1;
 else
  VAR_2->phy_mask &= ~VAR_1;

 if (VAR_7 != VAR_2->phy_mask)
  FUNC_0(VAR_2, VAR_2->phy_mask, VAR_0);
}
