
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun8i_hdmi_phy {int regs; } ;
struct dw_hdmi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dw_hdmi*,int) ;
 int FUNC_1 (struct dw_hdmi*,int) ;
 int FUNC_2 (struct dw_hdmi*,int ) ;
 int FUNC_3 (struct dw_hdmi*,int,int) ;
 int FUNC_4 (struct dw_hdmi*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct dw_hdmi *VAR_3,
          struct sun8i_hdmi_phy *VAR_4,
          unsigned int VAR_5)
{
 FUNC_5(VAR_4->regs, VAR_1,
      VAR_2,
      VAR_2);


 FUNC_1(VAR_3, 0);
 FUNC_0(VAR_3, 1);

 FUNC_4(VAR_3);

 FUNC_0(VAR_3, 0);

 FUNC_2(VAR_3, VAR_0);






 if (VAR_5 <= 27000000) {
  FUNC_3(VAR_3, 0x01e0, 0x06);
  FUNC_3(VAR_3, 0x0000, 0x15);
  FUNC_3(VAR_3, 0x08da, 0x10);
  FUNC_3(VAR_3, 0x0007, 0x19);
  FUNC_3(VAR_3, 0x0318, 0x0e);
  FUNC_3(VAR_3, 0x8009, 0x09);
 } else if (VAR_5 <= 74250000) {
  FUNC_3(VAR_3, 0x0540, 0x06);
  FUNC_3(VAR_3, 0x0005, 0x15);
  FUNC_3(VAR_3, 0x0000, 0x10);
  FUNC_3(VAR_3, 0x0007, 0x19);
  FUNC_3(VAR_3, 0x02b5, 0x0e);
  FUNC_3(VAR_3, 0x8009, 0x09);
 } else if (VAR_5 <= 148500000) {
  FUNC_3(VAR_3, 0x04a0, 0x06);
  FUNC_3(VAR_3, 0x000a, 0x15);
  FUNC_3(VAR_3, 0x0000, 0x10);
  FUNC_3(VAR_3, 0x0002, 0x19);
  FUNC_3(VAR_3, 0x0021, 0x0e);
  FUNC_3(VAR_3, 0x8029, 0x09);
 } else {
  FUNC_3(VAR_3, 0x0000, 0x06);
  FUNC_3(VAR_3, 0x000f, 0x15);
  FUNC_3(VAR_3, 0x0000, 0x10);
  FUNC_3(VAR_3, 0x0002, 0x19);
  FUNC_3(VAR_3, 0x0000, 0x0e);
  FUNC_3(VAR_3, 0x802b, 0x09);
 }

 FUNC_3(VAR_3, 0x0000, 0x1e);
 FUNC_3(VAR_3, 0x0000, 0x13);
 FUNC_3(VAR_3, 0x0000, 0x17);

 FUNC_1(VAR_3, 1);

 return 0;
}
