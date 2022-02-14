
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline unsigned char FUNC_0(short int VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;
 static int VAR_5[8] = {
  0xFF, 0x1FF, 0x3FF, 0x7FF, 0xFFF, 0x1FFF, 0x3FFF, 0x7FFF
 };

 VAR_4 = VAR_1;
 if (VAR_4 >= 0) {

  VAR_2 = VAR_0 | 0x80;
 } else {

  VAR_2 = VAR_0;
  VAR_4 = -VAR_4;
 }


 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if (VAR_4 <= VAR_5[VAR_3])
   break;
 }

 return ((VAR_3 << 4) |
   ((VAR_4 >> ((VAR_3) ? (VAR_3 + 3) : 4)) & 0x0F)) ^ VAR_2;
}
