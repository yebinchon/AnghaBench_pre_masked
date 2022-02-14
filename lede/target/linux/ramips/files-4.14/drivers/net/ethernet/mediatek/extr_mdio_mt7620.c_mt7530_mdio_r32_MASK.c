
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mt7620_gsw {int dummy; } ;


 int FUNC_0 (struct mt7620_gsw*,int,int) ;
 int FUNC_1 (struct mt7620_gsw*,int,int,int) ;

u32 FUNC_2(struct mt7620_gsw *VAR_0, u32 VAR_1)
{
 u16 VAR_2, VAR_3;

 FUNC_1(VAR_0, 0x1f, 0x1f, (VAR_1 >> 6) & 0x3ff);
 VAR_3 = FUNC_0(VAR_0, 0x1f, (VAR_1 >> 2) & 0xf);
 VAR_2 = FUNC_0(VAR_0, 0x1f, 0x10);

 return (VAR_2 << 16) | (VAR_3 & 0xffff);
}
