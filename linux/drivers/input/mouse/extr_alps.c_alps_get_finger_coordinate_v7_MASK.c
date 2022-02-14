
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_mt_pos {unsigned char x; unsigned char y; } ;






__attribute__((used)) static void FUNC_0(struct input_mt_pos *VAR_0,
       unsigned char *VAR_1,
       unsigned char VAR_2)
{
 VAR_0[0].x = ((VAR_1[2] & 0x80) << 4);
 VAR_0[0].x |= ((VAR_1[2] & 0x3F) << 5);
 VAR_0[0].x |= ((VAR_1[3] & 0x30) >> 1);
 VAR_0[0].x |= (VAR_1[3] & 0x07);
 VAR_0[0].y = (VAR_1[1] << 3) | (VAR_1[0] & 0x07);

 VAR_0[1].x = ((VAR_1[3] & 0x80) << 4);
 VAR_0[1].x |= ((VAR_1[4] & 0x80) << 3);
 VAR_0[1].x |= ((VAR_1[4] & 0x3F) << 4);
 VAR_0[1].y = ((VAR_1[5] & 0x80) << 3);
 VAR_0[1].y |= ((VAR_1[5] & 0x3F) << 4);

 switch (VAR_2) {
 case 128:
  VAR_0[1].x &= ~0x000F;
  VAR_0[1].y |= 0x000F;

  if (VAR_0[1].y == 0x7ff && VAR_0[1].x == 0xff0) {
   VAR_0[1].x = 0;

  }
  break;

 case 130:
  VAR_0[1].x &= ~0x003F;
  VAR_0[1].y &= ~0x0020;
  VAR_0[1].y |= ((VAR_1[4] & 0x02) << 4);
  VAR_0[1].y |= 0x001F;
  break;

 case 129:
  VAR_0[1].x &= ~0x003F;
  VAR_0[1].x |= (VAR_1[0] & 0x20);
  VAR_0[1].y |= 0x000F;
  break;
 }

 VAR_0[0].y = 0x7FF - VAR_0[0].y;
 VAR_0[1].y = 0x7FF - VAR_0[1].y;
}
