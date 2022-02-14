
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct drxk_state {int demod_address; scalar_t__ single_master; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (struct drxk_state*,int,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct drxk_state *VAR_0, u32 VAR_1, u32 *VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5 = VAR_0->demod_address, VAR_6[4], VAR_7[4], VAR_8;

 if (VAR_0->single_master)
  VAR_3 |= 0xC0;

 if (FUNC_0(VAR_1) || (VAR_3 != 0)) {
  VAR_6[0] = (((VAR_1 << 1) & 0xFF) | 0x01);
  VAR_6[1] = ((VAR_1 >> 16) & 0xFF);
  VAR_6[2] = ((VAR_1 >> 24) & 0xFF) | VAR_3;
  VAR_6[3] = ((VAR_1 >> 7) & 0xFF);
  VAR_8 = 4;
 } else {
  VAR_6[0] = ((VAR_1 << 1) & 0xFF);
  VAR_6[1] = (((VAR_1 >> 16) & 0x0F) | ((VAR_1 >> 18) & 0xF0));
  VAR_8 = 2;
 }
 FUNC_1(2, "(0x%08x, 0x%02x)\n", VAR_1, VAR_3);
 VAR_4 = FUNC_2(VAR_0, VAR_5, VAR_6, VAR_8, VAR_7, 4);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_2)
  *VAR_2 = VAR_7[0] | (VAR_7[1] << 8) |
      (VAR_7[2] << 16) | (VAR_7[3] << 24);

 return 0;
}
