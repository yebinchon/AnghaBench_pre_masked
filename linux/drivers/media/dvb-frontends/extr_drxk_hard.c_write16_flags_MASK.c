
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct drxk_state {int demod_address; scalar_t__ single_master; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,int,int) ;
 int FUNC_2 (struct drxk_state*,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct drxk_state *VAR_0, u32 VAR_1, u16 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = VAR_0->demod_address, VAR_5[6], VAR_6;

 if (VAR_0->single_master)
  VAR_3 |= 0xC0;
 if (FUNC_0(VAR_1) || (VAR_3 != 0)) {
  VAR_5[0] = (((VAR_1 << 1) & 0xFF) | 0x01);
  VAR_5[1] = ((VAR_1 >> 16) & 0xFF);
  VAR_5[2] = ((VAR_1 >> 24) & 0xFF) | VAR_3;
  VAR_5[3] = ((VAR_1 >> 7) & 0xFF);
  VAR_6 = 4;
 } else {
  VAR_5[0] = ((VAR_1 << 1) & 0xFF);
  VAR_5[1] = (((VAR_1 >> 16) & 0x0F) | ((VAR_1 >> 18) & 0xF0));
  VAR_6 = 2;
 }
 VAR_5[VAR_6] = VAR_2 & 0xff;
 VAR_5[VAR_6 + 1] = (VAR_2 >> 8) & 0xff;

 FUNC_1(2, "(0x%08x, 0x%04x, 0x%02x)\n", VAR_1, VAR_2, VAR_3);
 return FUNC_2(VAR_0, VAR_4, VAR_5, VAR_6 + 2);
}
