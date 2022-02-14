
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7530_priv {scalar_t__ base; scalar_t__ bus; } ;


 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (scalar_t__,int,int,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct mt7530_priv *VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (VAR_0->bus) {
  FUNC_1(VAR_0->bus, 0x1f, 0x1f, (VAR_1 >> 6) & 0x3ff);
  FUNC_1(VAR_0->bus, 0x1f, (VAR_1 >> 2) & 0xf, VAR_2 & 0xffff);
  FUNC_1(VAR_0->bus, 0x1f, 0x10, VAR_2 >> 16);
  return;
 }

 FUNC_2("MT7530 MDIO Write[%04x]=%08x\n", VAR_1, VAR_2);
 FUNC_0(VAR_2, VAR_0->base + VAR_1);
}
