
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk3066_hdmi {int tmdsclk; } ;


 int VAR_0 ;
 int FUNC_0 (struct rk3066_hdmi*,int ,int) ;
 int FUNC_1 (struct rk3066_hdmi*,int,int) ;

__attribute__((used)) static void FUNC_2(struct rk3066_hdmi *VAR_1)
{

 FUNC_0(VAR_1, VAR_0, 0x22);






 if (VAR_1->tmdsclk > 100000000) {
  FUNC_1(VAR_1, 0x158, 0x0E);
  FUNC_1(VAR_1, 0x15c, 0x00);
  FUNC_1(VAR_1, 0x160, 0x60);
  FUNC_1(VAR_1, 0x164, 0x00);
  FUNC_1(VAR_1, 0x168, 0xDA);
  FUNC_1(VAR_1, 0x16c, 0xA1);
  FUNC_1(VAR_1, 0x170, 0x0e);
  FUNC_1(VAR_1, 0x174, 0x22);
  FUNC_1(VAR_1, 0x178, 0x00);
 } else if (VAR_1->tmdsclk > 50000000) {
  FUNC_1(VAR_1, 0x158, 0x06);
  FUNC_1(VAR_1, 0x15c, 0x00);
  FUNC_1(VAR_1, 0x160, 0x60);
  FUNC_1(VAR_1, 0x164, 0x00);
  FUNC_1(VAR_1, 0x168, 0xCA);
  FUNC_1(VAR_1, 0x16c, 0xA3);
  FUNC_1(VAR_1, 0x170, 0x0e);
  FUNC_1(VAR_1, 0x174, 0x20);
  FUNC_1(VAR_1, 0x178, 0x00);
 } else {
  FUNC_1(VAR_1, 0x158, 0x02);
  FUNC_1(VAR_1, 0x15c, 0x00);
  FUNC_1(VAR_1, 0x160, 0x60);
  FUNC_1(VAR_1, 0x164, 0x00);
  FUNC_1(VAR_1, 0x168, 0xC2);
  FUNC_1(VAR_1, 0x16c, 0xA2);
  FUNC_1(VAR_1, 0x170, 0x0e);
  FUNC_1(VAR_1, 0x174, 0x20);
  FUNC_1(VAR_1, 0x178, 0x00);
 }
}
